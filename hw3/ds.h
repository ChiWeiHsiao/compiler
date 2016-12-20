#ifndef _DS_H_
#define _DS_H_

#define MAX_ENTRY_NUM 2000

#include <stdbool.h>

typedef enum { VOID_t, INTEGER_t, BOOLEAN_t, STRING_t, REAL_t, ARRAY_t, PROGRAM_t, FUNCTION_t, \
VARIABLE_t, PARAMETER_t, CONSTANT_t, ERROR_t, ID_LIST, LOOPVAR_t } SEMTYPE;
typedef enum { ADD_t, SUB_t, MUL_t, DIV_t, MOD_t, LT_t, LE_t, EQ_t, GE_t, GT_t, NE_t, AND_t, OR_t, NOT_t, NONE_t } OPERATOR;

struct ConstAttr {
	SEMTYPE category;
	union {
		int integerVal;
		float realVal;
		bool booleanVal;
		char *stringVal;
	} value;
	bool hasMinus;
};

union SymAttr {
	struct ConstAttr *constVal;
	struct FuncAttr *formalParam;
};

struct FuncAttr {
	int paramNum;
	struct PTypeList *params;
};

union SymbolAttr {
	struct ConstAttr *constVal;
	struct FuncAttr *formalParam;
};

struct SymbolEntry{
	char name[33];
	int level;//global=0, local=1,2,3... 
	char kind[10];//function, parameter, variable, constant  ////SEMTYPE category;
	int type;// token INT 	 //int=0, float=1, double=2, bool=3, string=4 or the signature of an array=5. ex. float, int[10]
	union SymbolAttr *attribute;
	//char attr[100];//use strcat(attr, ...);	//use typedef union
	//attribute, Other attributes of the symbol, 
	//such as the value of a constant, arguments of function
	
	//bool declared;
    //bool matched;
};

struct SymbolEntry stack[MAX_ENTRY_NUM];//use level to decide pop
int ptrStack;


#endif