#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include "ds.h"
#include "table.h"
#include "check.h"
#define debug

void InitTable(){
	curLevel = 0;
	ptrStack = 0;
	#ifdef debug
	printf("...InitTable\n");
	#endif
}

void pushTable(){
	curLevel ++;
}

void popTable(int scope){
	//pop until the next entry's level != scope

}

void printTable(int scope){
	printf("=======================================================================================\n");
	 // Name [29 blanks] Kind [7 blanks] Level [7 blank] Type [15 blanks] Attribute [15 blanks]
	printf("Name                             Kind       Level       Type               Attribute   \n");
	printf("---------------------------------------------------------------------------------------\n");

	//if()

	printf("======================================================================================\n");

}

void insertEntry( const char *str ){
	//printf("insertEntry, mof type = %d\n",curScalarType);
	struct SymbolEntry newEntry;
	strcpy( newEntry.name, str );
	newEntry.type = curScalarType;
	newEntry.level = curLevel;
	stack[ ptrStack++ ] = newEntry;
	printf("name: %s\n", stack[ptrStack-1].name);
}

void insertArray( const char *str, const char *dim ){
	//printf("insertEntry, mof type = %d\n",curScalarType);
	struct SymbolEntry newEntry;
	strcpy( newEntry.name, str );
	newEntry.type = curScalarType;
	newEntry.level = curLevel;
	stack[ ptrStack++ ] = newEntry;
	printf("name: %s\n", stack[ptrStack-1].name);
}
