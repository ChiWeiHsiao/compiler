#include <stdio.h>
#include "check.h"
#include <stdlib.h>
#include <string.h>
#include "ds.h"
#include "table.h"
#include <stdbool.h>

#define debug

extern int linenum;

struct idNode *createIdList( const char *str ) 
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

/*void deleteIdList( struct idNode *idlist )
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

bool isRedeclare(){
	return false;
}

