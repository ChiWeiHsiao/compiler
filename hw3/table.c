#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ds.h"
#include "table.h"

void InitTable(){
	curLevel = 0;
	ptrStack = 0;
	printf("Init\n");
}

void pushTable(){
	curLevel ++;
}

void pushEntry(struct SymbolEntry newEntry){
	stack[ ptrStack++ ] = newEntry;
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