#ifndef _TABLE_H_
#define _TABLE_H_
#include "ds.h"

void InitTable();
void pushTable();
void popTable();
void printEntry(int ptr);
void insertFunctEntry( bool toDefine, const char *name, const char *attr );
void insertEntry(const char *name, const char *kind);
void insertArrayEntry(const char *name, const char *dim, const char *kind);
void insertEntryWithAttr( const char *name, const char *kind, const char *attr );

#endif