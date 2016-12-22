%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "ds.h"
#include "table.h"
#include "check.h"

#define debug

extern int Opt_Source;
extern int Opt_Token;
extern int Opt_Statistic;
extern int Opt_Symbol;
extern int linenum;
extern FILE	*yyin;
extern char	*yytext;
extern char buf[256];

%}

%union {
	char strSmall[33];
	char str[100];
	struct arrEntry{ char arrID[33]; char arrDim[30]; } oneArr;
	//int scalarType;
		///SEMTYPE type;
	//struct ConstAttr *constVal;
	//struct PType *ptype;
	//struct param_sem *par;
	//struct expr_sem *exprs;
	/*struct var_ref_sem *varRef; */
	//struct expr_sem_node *exprNode;
};

%type <strSmall> identifier_list
%type <str> literal_const
%type <str> dim
%type <oneArr> array_decl

//%type <scalarType> scalar_type;


%token <strSmall> ID 
%token <str> INT_CONST
%token <str> FLOAT_CONST
%token <str> SCIENTIFIC
%token <str> STR_CONST

%token	LE_OP
%token	NE_OP
%token	GE_OP
%token	EQ_OP
%token	AND_OP
%token	OR_OP

%token	READ
%token	BOOLEAN
%token	WHILE
%token	DO
%token	IF
%token	ELSE
%token	<str> TRUE
%token	<str> FALSE
%token	FOR
%token	INT
%token	BOOL
%token	FLOAT
%token	DOUBLE
%token	STRING
%token	PRINT
%token	VOID
%token	CONTINUE
%token	BREAK
%token	RETURN
%token  CONST

%token	L_PAREN
%token	R_PAREN
%token	COMMA
%token	SEMICOLON
%token	ML_BRACE
%token	MR_BRACE
%token	L_BRACE
%token	R_BRACE
%token	ADD_OP
%token	SUB_OP
%token	MUL_OP
%token	DIV_OP
%token	MOD_OP
%token	ASSIGN_OP
%token	LT_OP
%token	GT_OP
%token	NOT_OP

/*	Program 
	Function 
	Array 
	Const 
	IF 
	ELSE 
	RETURN 
	FOR 
	WHILE
*/
%start program
%%

program :  { InitTable(); } decl_list funct_def decl_and_def_list { popTable(); }
           ;

decl_list : decl_list var_decl
		  | decl_list const_decl
		  | decl_list funct_decl
		  |
		  ;


decl_and_def_list : decl_and_def_list var_decl
				  | decl_and_def_list const_decl
				  | decl_and_def_list funct_decl
				  | decl_and_def_list funct_def
				  | 
				  ;


funct_def : scalar_type ID L_PAREN R_PAREN { printf("Define a Funct:%s\n",$2); insertEntry( $2, "function" ); } compound_statement  
		  | scalar_type ID L_PAREN parameter_list R_PAREN  compound_statement
		  | VOID ID L_PAREN R_PAREN { sprintf(curType, "void"); insertEntry( $2, "function" ); } compound_statement 
		  | VOID ID L_PAREN parameter_list R_PAREN { sprintf(curType, "void"); insertEntryWithAttr( $2, "function", curParams.str); } compound_statement
		  ;

funct_decl : scalar_type ID L_PAREN R_PAREN SEMICOLON 
	 	   | scalar_type ID L_PAREN parameter_list R_PAREN SEMICOLON
		   | VOID ID L_PAREN R_PAREN SEMICOLON { sprintf(curType, "void"); }
		   | VOID ID L_PAREN parameter_list R_PAREN SEMICOLON { sprintf(curType, "void");}
		   ;

parameter_list : parameter_list COMMA scalar_type ID { curParams.cnt++; sprintf( curParams.str, "%s,%s", curParams.str, curType );  }
			   | parameter_list COMMA scalar_type array_decl 
			   	{	//int[2]
 			   		curParams.cnt++; 
 			   		sprintf( curParams.str, "%s,%s%s", curParams.str, curType, $4.arrDim );
			   		#ifdef debug
 			   		printf("#params:%d\t%s\n", curParams.cnt, curParams.str); 
			   		#endif
			   	}
			   | scalar_type array_decl { curParams.cnt = 1; sprintf( curParams.str, "%s%s", curType, $2.arrDim );}
			   | scalar_type ID { curParams.cnt = 0; strcpy( curParams.str, curType ); }
			   ;

var_decl : scalar_type identifier_list SEMICOLON
		 ;

identifier_list : identifier_list COMMA ID { 
					strcpy($$, $3);//$$ = $3; //appendIdList($1, $3); 
					insertEntry($3, "variable");
				}
		 		| identifier_list COMMA ID ASSIGN_OP logical_expression { insertEntry($3, "variable"); }
				| identifier_list COMMA array_decl ASSIGN_OP initial_array { insertArrayEntry($3.arrID, $3.arrDim,"variable"); }
				| identifier_list COMMA array_decl { insertArrayEntry($3.arrID, $3.arrDim, "variable"); }
				| array_decl ASSIGN_OP initial_array { insertArrayEntry($1.arrID, $1.arrDim, "variable"); }
				| array_decl { insertArrayEntry($1.arrID, $1.arrDim, "variable"); }
				| ID ASSIGN_OP logical_expression { insertEntry($1, "variable"); }
				| ID { insertEntry($1, "variable"); } //$$ = createIdList($1); 
				;

initial_array : L_BRACE literal_list R_BRACE
			  ;

literal_list : literal_list COMMA logical_expression
			 | logical_expression
             | 
			 ;

const_decl : CONST scalar_type const_list SEMICOLON;

const_list : const_list COMMA ID ASSIGN_OP literal_const { insertEntryWithAttr( $3, "constant", $5 ); }
		   | ID ASSIGN_OP literal_const { insertEntryWithAttr( $1, "constant", $3 ); }
                    
		   ;

array_decl : ID dim { sprintf($$.arrID, "%s", $1); sprintf($$.arrDim, "%s", $2);  }//sprintf(idStr, "%s", $1); }
			//{ strcpy( curArr.arrID, $1); strcpy( curArr.arrDim, );//不要用＄2，用global$2); printf("array_decl: %s%s\n", curArr.arrID, curArr.arrDim); }//sprintf(idStr, "%s", $1); }
		   ;

dim : dim ML_BRACE INT_CONST MR_BRACE { sprintf($$, "%s[%s]", $1, $3); }//printf("append dimStr: %s\n", $$);}//sprintf(dimStr, "%s[%s]", dimStr, $3);
	| ML_BRACE INT_CONST MR_BRACE { sprintf( $$, "[%s]", $2); }//sprintf(dimStr, "[%s]", $2); }

compound_statement : L_BRACE { pushTable(); } var_const_stmt_list R_BRACE {
					 popTable();
					 #ifdef debug
					 	printf("Compound_POP==line:%d, ptrStack=%d,curLevel=%d\n", linenum, ptrStack, curLevel); 
					 #endif
					}
				   ;

var_const_stmt_list : var_const_stmt_list statement	
				    | var_const_stmt_list var_decl
					| var_const_stmt_list const_decl
				    |
				    ;

statement : compound_statement
		  | simple_statement
		  | conditional_statement
		  | while_statement
		  | for_statement
		  | function_invoke_statement
		  | jump_statement
		  ;		

simple_statement : variable_reference ASSIGN_OP logical_expression SEMICOLON
				 | PRINT logical_expression SEMICOLON
				 | READ variable_reference SEMICOLON
				 ;

conditional_statement : IF L_PAREN logical_expression R_PAREN L_BRACE var_const_stmt_list R_BRACE
					  | IF L_PAREN logical_expression R_PAREN 
					  		L_BRACE var_const_stmt_list R_BRACE
						ELSE
							L_BRACE var_const_stmt_list R_BRACE
					  ;
while_statement : WHILE L_PAREN logical_expression R_PAREN
					L_BRACE var_const_stmt_list R_BRACE
				| DO L_BRACE
					var_const_stmt_list
				  R_BRACE WHILE L_PAREN logical_expression R_PAREN SEMICOLON
				;

for_statement : FOR L_PAREN initial_expression_list SEMICOLON control_expression_list SEMICOLON increment_expression_list R_PAREN 
					L_BRACE var_const_stmt_list R_BRACE
			  ;

initial_expression_list : initial_expression
				  	    |
				        ;

initial_expression : initial_expression COMMA variable_reference ASSIGN_OP logical_expression
				   | initial_expression COMMA logical_expression
				   | logical_expression
				   | variable_reference ASSIGN_OP logical_expression

control_expression_list : control_expression
				  		|
				  		;

control_expression : control_expression COMMA variable_reference ASSIGN_OP logical_expression
				   | control_expression COMMA logical_expression
				   | logical_expression
				   | variable_reference ASSIGN_OP logical_expression
				   ;

increment_expression_list : increment_expression 
						  |
						  ;

increment_expression : increment_expression COMMA variable_reference ASSIGN_OP logical_expression
					 | increment_expression COMMA logical_expression
					 | logical_expression
					 | variable_reference ASSIGN_OP logical_expression
					 ;

function_invoke_statement : ID L_PAREN logical_expression_list R_PAREN SEMICOLON
						  | ID L_PAREN R_PAREN SEMICOLON
						  ;

jump_statement : CONTINUE SEMICOLON
			   | BREAK SEMICOLON
			   | RETURN logical_expression SEMICOLON
			   ;

variable_reference : array_list
				   | ID
				   ;


logical_expression : logical_expression OR_OP logical_term
				   | logical_term
				   ;

logical_term : logical_term AND_OP logical_factor
			 | logical_factor
			 ;

logical_factor : NOT_OP logical_factor
			   | relation_expression
			   ;

relation_expression : arithmetic_expression relation_operator arithmetic_expression
					| arithmetic_expression 
					;

relation_operator : LT_OP
				  | LE_OP
				  | EQ_OP
				  | GE_OP
				  | GT_OP
				  | NE_OP
				  ;

arithmetic_expression : arithmetic_expression ADD_OP term
		   | arithmetic_expression SUB_OP term
                   | relation_expression
		   | term
		   ;

term : term MUL_OP factor
     | term DIV_OP factor
	 | term MOD_OP factor
	 | factor
	 ;

factor : variable_reference
	   | SUB_OP factor
	   | L_PAREN logical_expression R_PAREN
	   | SUB_OP L_PAREN logical_expression R_PAREN
	   | ID L_PAREN logical_expression_list R_PAREN
	   | ID L_PAREN R_PAREN
	   | literal_const
	   | SUB_OP ID L_PAREN logical_expression R_PAREN
	   | SUB_OP ID L_PAREN R_PAREN
	   ;

logical_expression_list : logical_expression_list COMMA logical_expression
						| logical_expression
						;

array_list : ID dimension
		   ;

dimension : dimension ML_BRACE logical_expression MR_BRACE		   
		  | ML_BRACE logical_expression MR_BRACE
		  ;

scalar_type : INT { sprintf(curType, "int"); }
			| DOUBLE { sprintf(curType, "double"); }
			| STRING { sprintf(curType, "string"); }
			| BOOL { sprintf(curType, "bool"); }
			| FLOAT { sprintf(curType, "float"); }//curScalarType = 5;  }
			;
 
literal_const : INT_CONST { strcpy($$, $1); }//printf("INT_CONST: %s \n", $1);}// {$$ = $1;}//{ printf("INT_CONST: %s \n", $1);}
			  | SUB_OP INT_CONST { sprintf(tmpStr, "-%s", $2); strcpy($$,tmpStr); }
			  | FLOAT_CONST { strcpy($$, $1); }
			  | SUB_OP FLOAT_CONST { sprintf(tmpStr, "-%s", $2); strcpy($$,tmpStr); }
			  | SCIENTIFIC { strcpy($$, $1); }
			  | SUB_OP SCIENTIFIC { sprintf(tmpStr, "-%s", $2); strcpy($$,tmpStr); }
			  | STR_CONST { strcpy($$, $1); }
			  | TRUE { strcpy($$, "true"); }//$1); }// printf("bool_CONST: %s \n", l);}// printf("bool_CONST: %s \n", $$);}
			  | FALSE { strcpy($$, "false"); }//{ strcpy($$, "false");  printf("bool_CONST: %s \n", $$);}
			  ;
%%

int yyerror( char *msg )
{
    fprintf( stderr, "\n|--------------------------------------------------------------------------\n" );
	fprintf( stderr, "| Error found in Line #%d: %s\n", linenum, buf );
	fprintf( stderr, "|\n" );
	fprintf( stderr, "| Unmatched token: %s\n", yytext );
	fprintf( stderr, "|--------------------------------------------------------------------------\n" );
	exit(-1);
	//  fprintf( stderr, "%s\t%d\t%s\t%s\n", "Error found in Line ", linenum, "next token: ", yytext );
}


