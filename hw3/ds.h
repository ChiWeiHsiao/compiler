#ifndef _DS_H_
#define _DS_H_

#define MAX_ENTRY_NUM 1000

#include <stdbool.h>

typedef enum { VOID_t, INTEGER_t, BOOLEAN_t, STRING_t, REAL_t, ARRAY_t, PROGRAM_t, FUNCTION_t, \
VARIABLE_t, PARAMETER_t, CONSTANT_t, ERROR_t, ID_LIST, LOOPVAR_t } SEMTYPE;
typedef enum { ADD_t, SUB_t, MUL_t, DIV_t, MOD_t, LT_t, LE_t, EQ_t, GE_t, GT_t, NE_t, AND_t, OR_t, NOT_t, NONE_t } OPERATOR;

//char lexStr[100];
//char lexID[33]; 
char tmpStr[100];
char dimStr[100];
char idStr[33];
typedef struct anArray { char arrID[33]; char arrDim[100]; }arrEntry;
//struct arrEntry curArr;

int curLevel;//scope
//int curScalarType;//INT=1, DOUBLE=2, STRING=3, BOOL=4, FLOAT=5 
char curType[30];

/*
union SymbolAttr {
	struct ConstAttr constVal;
	struct FuncAttr formalParam;
};*/
 //use global variables to implement?
struct SymbolEntry{
	char name[33];
	int level;//global=0, local=1,2,3... 
	char type[30];//int type; // 存成 char[100]? int, int[10];
	//int type;// token INT 	 //int=0, float=1, double=2, bool=3, string=4 or the signature of an array=5. ex. float, int[10]
	char kind[10];//function, parameter, variable, constant  ////SEMTYPE category;
	char attribute[15];
	//attribute, Other attributes of the symbol, 
	//such as the value of a constant, arguments of function
};
struct SymbolEntry stack[MAX_ENTRY_NUM];//use level to decide pop
int ptrStack;









 








//================================================================================================================================
struct idNode {
	char *value;//[33];
	struct idNode *next;
	int level;
};
/*
struct ConstAttr {
	SEMTYPE category;
	union {
		int integerVal;
		float realVal;
		bool booleanVal;
		char *stringVal;
	} value;
	bool hasMinus;
};*/

struct PType {
	bool isError;
	bool isArray;		/* array or scalar*/
	SEMTYPE type;
	int dimNum;
	struct ArrayDimNode *dim;	/* # of dim, and size of each dimension */
};

struct PTypeList {
	struct PType *value;
	struct PTypeList* next;
};
/*
struct FuncAttr {
	int paramNum;
	struct PTypeList *params;
};*/

union SymAttr {
	struct ConstAttr *constVal;
	struct FuncAttr *formalParam;
};


#endif