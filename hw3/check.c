#include <stdio.h>
#include "check.h"
#include <stdlib.h>
#include <string.h>
#include "ds.h"
#include "table.h"
#include <stdbool.h>

#define debug

extern int linenum;

bool checkFunctMatch( struct SymbolEntry declareF, struct SymbolEntry defineF ){
	//defineF is later than declare, should match declare's type and attribute( paramerters )
	if( strcmp( declareF.type, defineF.type ) == 0 && strcmp( declareF.attribute, defineF.attribute ) == 0 )
		return true;
	else
		return false;
}

bool coercion( struct SymbolEntry original, struct SymbolEntry goal ){
	return true;
}

void printErr( const char *msg ){
	noErr = false;
	printf("\n##########Error at Line #%d: %s ##########\n\n", linenum, msg);	
}

void printNoError(){
	if( noErr ){
		fprintf( stdout, "\n|-------------------------------------------|\n" );
		fprintf( stdout, "| There is no syntactic and semantic error! |\n" );
		fprintf( stdout, "|-------------------------------------------|\n" );
	}
}
/*
void init_funcOption(){
    funcOption.isDeclare = false;
    funcOption.pTypeList = NULL;
    funcOption.retType = T_ERROR;
    funcOption.paramAddOK = false;
}
void init_errorPool(){
    errorPool.cnt = 0;
}
void add_errorPool(const char* msg){
    if(errorPool.cnt<MAX_ERROR_MSG){
        errorPool.pool[errorPool.cnt] = msg;
        ++errorPool.cnt;
    }
    else{
        fprintf( stderr, "***** GG!!! Too many error messages!! ******\n" );
    }
}

// output error msg
void print_error(const char* msg){
    if(!supressError){
        snprintf(tempBuf,MAX_STRING_SIZE,"##########Error at Line #%d: %s##########\n",linenum,msg);
        fprintf(ERR_FD,tempBuf);
        char* str = (char*)malloc(strlen(tempBuf)+1);
        strcpy(str,tempBuf);
        add_string(str);
        add_errorPool(str);
    }
}
// show all error, return if there is at least an error
bool show_errors(){
    if(errorPool.cnt==0){
        return false;
    }
	#ifdef SHOW_ERROR
	    printf("-------Dump all errors-------\n");
	    for(int i=0;i<errorPool.cnt;i++){
	        printf(errorPool.pool[i]);
	    }
	#endif
    return true;
}
*/

/*struct idNode *createIdList( const char *str ) 
{
	struct idNode *newNode = (struct idNode *)malloc(sizeof(struct idNode));
	newNode -> value = (char *)malloc(sizeof(char)*(strlen(str)+1));
	newNode -> level = curLevel;
	strcpy( newNode->value, str );
	newNode -> next = 0;
	return newNode;
}
void appendIdList( struct idNode *node, const char *str )
{
	struct idNode *newNode = 0;
	newNode = (struct idNode *)malloc(sizeof(struct idNode ));
	newNode->value = (char *)malloc(sizeof(char)*(strlen(str)+1));
	newNode -> level = curLevel;
	strcpy( newNode->value, str );
	newNode -> next = 0;

	struct idNode *ptr;
	for( ptr=node ; (ptr->next)!=0 ; ptr=(ptr->next) );//move to last node
	// add into idlist
	ptr->next = newNode;
}
void deleteIdList( struct idNode *idlist )
{
	if( idlist == 0 )	return;
	else if( idlist->next == 0 ) {
		if( idlist->value != 0 )
			free( idlist->value );
		free( idlist );
	}
	else {
		struct idNode *current, *previous;
		for( current=(idlist->next), previous=idlist ; current!=0 ; previous=current, current=(current->next) ) {
			if( previous->value != 0 )
				free( previous->value );
		}
		if( previous->value != 0 )
			free( previous->value );

		free( idlist );
	}
}*/
