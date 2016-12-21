#ifndef _CHECK_H_
#define _CHECK_H_
#include "ds.h"
#include "table.h"

struct idNode *createIdList( const char *str );
void appendIdList( struct idNode *node, const char *str );
bool isRedeclare();

#endif