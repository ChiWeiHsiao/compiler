#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include "ds.h"
#include "table.h"
#include "check.h"
//#define debug
extern int linenum;
extern int Opt_Symbol;

void InitTable(){
	noErr = true;
	curLevel = 0;
	ptrStack = 0;
	for(int i = 0; i < MAX_ENTRY_NUM; i++ ){
		memset(stack[i].name, '\0', sizeof(stack[i].name)); 
		memset(stack[i].type, '\0', sizeof(stack[i].type)); 
		memset(stack[i].kind, '\0', sizeof(stack[i].kind)); 
		memset(stack[i].attribute, '\0', sizeof(stack[i].attribute)); 
		stack[i].level = -1;
		stack[i].functDeclared = false;
		stack[i].functDefined = false;
	}
	#ifdef debug
	printf("...InitTable\n");
	#endif
}

void pushTable(){
	curLevel ++;
}

void popTable(){
	if( !Opt_Symbol ) return;
	//pop until the next entry's level != scope
	int nowLevel = stack[ ptrStack-1 ].level;
	printf("=======================================================================================\n");
	 // Name [29 blanks] Kind [7 blanks] Level [7 blank] Type [15 blanks] Attribute [15 blanks]
	printf("Name                             Kind       Level       Type               Attribute               \n");
	printf("---------------------------------------------------------------------------------------\n");
	int to =  ptrStack-1 ;
	while(stack[ ptrStack-1 ].level == nowLevel){
		if(ptrStack == 0 ) break;
		ptrStack--;
	}
	int from =  ptrStack ; //?? from = movie, to = abc  //printf("from:%d, to:%d\n", from, to);
	for( int i = from; i <= to; i++)
		printEntry(i);
	printf("======================================================================================\n");

	curLevel--;
}

void printEntry(int ptr){
	// Name [29 blanks] Kind [7 blanks] Level [7 blank] Type [15 blanks] Attribute [15 blanks]
	//Name
	char str[34];
	strcpy( str, stack[ptr].name);
	printf("%-33s", str);
	//Kind
	strcpy( str, stack[ptr].kind);
	printf("%-11s", str);
	//Level
	if(stack[ptr].level == 0){	//global
		strcpy( str, "0(global)" );
		printf("%-12s", str);
	}
	else{//local
		sprintf( str, "%d(local)", stack[ ptr ].level);
		printf("%-12s", str);
	}
	//Type
	strcpy( str, stack[ptr].type);
	printf("%-19s", str);
	//Attribute
	strcpy( str, stack[ptr].attribute);
	printf("%-12s", str);
	printf("\n");
}

int searchTable( struct SymbolEntry target ){
	int level = target.level;
	int it = ptrStack - 1;
	
	while( stack[ it ].level == level ){
		if( strcmp( stack[ it ].name, target.name ) == 0 )
			return it;
		it--;
	}
	return -1;	//not found 
}

void insertFunctEntry( bool toDefine, const char *name, const char *attr ){
	//printf("insertEntry, mof type = %s\n",curType);
	struct SymbolEntry newEntry;
	strcpy( newEntry.name, name );
	strcpy( newEntry.type, functType );	// because curType will be overwriten by param_list
	strcpy( newEntry.kind, "function" );
	if( !attr ){ //NULL, no parameter
		memset(newEntry.attribute, '\0', sizeof(newEntry.attribute)); //clear
	}
	else{
		strncpy( newEntry.attribute, attr, 49);
	}
	newEntry.level = curLevel;
	newEntry.functDefined = toDefine; //name it match?
	newEntry.functDeclared = !toDefine; 

	//Semantic
	int ptrFound = searchTable( newEntry );
	if( ptrFound != -1){	//don't insert
		struct SymbolEntry found = stack[ptrFound];

		if( toDefine ){
			if( found.functDefined ){
				printErr("Function is defined twice");
				return;
			}
			else if( found.functDeclared ){ //check if is declare before;
				if( ! checkFunctMatch( found, newEntry ) ){ 
					printErr("Function definition does not match the previous declaration");
					return;
				}
			}
			else	
				printErr("Names must be unique within a given scope");//used as a var / const name
		}
		else{	// want to declare a function, sholdn't be declared or defined previously
			if( found.functDeclared ) printErr("Function should not be declared twice");
			else if( found.functDefined ) printErr("Function declaration must before its definition");
			else  printErr("Names must be unique within a given scope ");
		}
	}
	else{
		stack[ ptrStack++ ] = newEntry;
		//printf("insert Funct, level:%d, name:%s, type:%s, kind:%s, attr:%s  \n",stack[ptrStack-1].level, stack[ptrStack-1].name, stack[ptrStack-1].type, stack[ptrStack-1].kind, stack[ptrStack-1].attribute );
	}
}

void insertEntry( const char *name, const char *kind ){
	//printf("insertEntry, mof type = %s\n",curType);
	struct SymbolEntry newEntry;
	strcpy( newEntry.name, name );
	strcpy( newEntry.type, curType );//newEntry.type = curScalarType;
	strcpy( newEntry.kind, kind );
	memset(newEntry.attribute, '\0', sizeof(newEntry.attribute)); //clear
	newEntry.level = curLevel;
	newEntry.functDeclared = false;
	newEntry.functDefined = false;

	int ptrFound = searchTable( newEntry );
	if( ptrFound == -1) //not found
		stack[ ptrStack++ ] = newEntry;
	else
		printErr("Names must be unique within a given scope ");
}

void insertArrayEntry( const char *name, const char *dim, const char *kind ){
	struct SymbolEntry newEntry;
	strcpy( newEntry.name, name );
	sprintf( newEntry.type, "%s%s", curType, dim );// 把 dim  資訊存到 type //newEntry.type = curScalarType;
	strcpy( newEntry.kind, kind );
	memset(newEntry.attribute, '\0', sizeof(newEntry.attribute));  //clear
	newEntry.level = curLevel;
	newEntry.functDeclared = false;
	newEntry.functDefined = false;

	int ptrFound = searchTable( newEntry );
	if( ptrFound == -1) //not found
		stack[ ptrStack++ ] = newEntry;
	else
		printErr("Names must be unique within a given scope");
}

void insertEntryWithAttr( const char *name, const char *kind, const char *attr ){
	//printf("insertEntry, mof type = %s\n",curType);
	struct SymbolEntry newEntry;
	strcpy( newEntry.name, name );
	strcpy( newEntry.type, curType );//newEntry.type = curScalarType;
	strcpy( newEntry.kind, kind );
	strcpy( newEntry.attribute, attr );
	newEntry.level = curLevel;
	newEntry.functDeclared = false;
	newEntry.functDefined = false;
	
	int ptrFound = searchTable( newEntry );
	if( ptrFound == -1)//not found
		stack[ ptrStack++ ] = newEntry;
	else
		printErr("Names must be unique within a given scope");

	#ifdef debug
	printf("level:%d, name:%s, type:%s, kind:%s, attr:%s  \n",stack[ptrStack-1].level, stack[ptrStack-1].name, stack[ptrStack-1].type, stack[ptrStack-1].kind, stack[ptrStack-1].attribute );
	#endif
}