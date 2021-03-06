#ifndef _CHECK_H_
#define _CHECK_H_
#include "ds.h"
#include "table.h"
#include <stdbool.h>
/*
void init_funcOption();
void init_errorPool();
void add_errorPool(const char* msg);
void print_error(const char* msg)
bool show_errors();
*/
bool checkFunctMatch( struct SymbolEntry declareF, struct SymbolEntry defineF );

bool coercion( struct SymbolEntry original, struct SymbolEntry goal );

void printErr( const char *msg );

void printNoError();
//struct idNode *createIdList( const char *str );
//void appendIdList( struct idNode *node, const char *str );

#endif