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

void insertFunctEntry( bool toDefine, const char *name, const char *attr ){
	//printf("insertEntry, mof type = %s\n",curType);
	if( toDefine ){
		;//check if is declare before;
		//if declared
		//check match
		//if(WRONG)	printErr, return
	}
	else{
		;//is declare
		//check if defin or declare before
		//if(WRONG)	printErr, return
	}

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
	stack[ ptrStack++ ] = newEntry;
	#ifdef debug
	printf("level:%d, name:%s, type:%s, kind:%s, attr:%s  \n",stack[ptrStack-1].level, stack[ptrStack-1].name, stack[ptrStack-1].type, stack[ptrStack-1].kind, stack[ptrStack-1].attribute );
	#endif
}

void insertEntry( const char *name, const char *kind ){
	//printf("insertEntry, mof type = %s\n",curType);
	struct SymbolEntry newEntry;
	strcpy( newEntry.name, name );
	strcpy( newEntry.type, curType );//newEntry.type = curScalarType;
	strcpy( newEntry.kind, kind );
	memset(newEntry.attribute, '\0', sizeof(newEntry.attribute)); //clear
	newEntry.level = curLevel;
	stack[ ptrStack++ ] = newEntry;
	#ifdef debug
	//for(int i=0; i<ptrStack; i++)
		//printf("level:%d, name:%s, type:%s \n",stack[i].level, stack[i].name, stack[i].type );
	printf("level:%d, name:%s, type:%s, kind:%s  \n",stack[ptrStack-1].level, stack[ptrStack-1].name, stack[ptrStack-1].type, stack[ptrStack-1].kind );
	#endif
}

void insertArrayEntry( const char *name, const char *dim, const char *kind ){
	struct SymbolEntry newEntry;
	strcpy( newEntry.name, name );
	sprintf( newEntry.type, "%s%s", curType, dim );// 把 dim  資訊存到 type //newEntry.type = curScalarType;
	strcpy( newEntry.kind, kind );
	memset(newEntry.attribute, '\0', sizeof(newEntry.attribute));  //clear
	newEntry.level = curLevel;
	stack[ ptrStack++ ] = newEntry;
	#ifdef debug
	printf("\t\tlevel:%d, name:%s, type:%s, kind:%s \n",stack[ptrStack-1].level, stack[ptrStack-1].name, stack[ptrStack-1].type, stack[ptrStack-1].kind );
	#endif
}

void insertEntryWithAttr( const char *name, const char *kind, const char *attr ){
	//printf("insertEntry, mof type = %s\n",curType);
	struct SymbolEntry newEntry;
	strcpy( newEntry.name, name );
	strcpy( newEntry.type, curType );//newEntry.type = curScalarType;
	strcpy( newEntry.kind, kind );
	strcpy( newEntry.attribute, attr );
	newEntry.level = curLevel;
	stack[ ptrStack++ ] = newEntry;
	#ifdef debug
	printf("level:%d, name:%s, type:%s, kind:%s, attr:%s  \n",stack[ptrStack-1].level, stack[ptrStack-1].name, stack[ptrStack-1].type, stack[ptrStack-1].kind, stack[ptrStack-1].attribute );
	#endif
}