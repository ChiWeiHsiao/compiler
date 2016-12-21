#ifndef _TABLE_H_
#define _TABLE_H_
#include "ds.h"

void InitTable();
void pushTable();
void popTable(int scope);
void printTable(int scope);
void insertEntry(const char *str);
//void insertArrayEntry(const char *id, const char *dim);

#endif