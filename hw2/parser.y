%{
#include <stdio.h>
#include <stdlib.h>

extern int linenum;             /* declared in lex.l */
extern FILE *yyin;              /* declared by lex */
extern char *yytext;            /* declared by lex */
extern char buf[256];           /* declared in lex.l */

int yylex();
int yyerror(char *s);

%}

%nonassoc INT BOOL FLOAT DOUBLE STRING CONST VOID
%nonassoc BOOLEAN

/*Punctuation*/
%nonassoc L_PAREN
%nonassoc R_PAREN
%nonassoc L_BRACKET 
%nonassoc R_BRACKET
%nonassoc L_BRACE 
%nonassoc R_BRACE 

/*operation*/
%left OR
%left AND
%token NOT
%left LESS LESS_EQ EQUAL GREAT_EQ GREAT NOT_EQ
%left PLUS MINUS
%left MULTIPLY DIVIDE MOD
/*?? unary -*/

/*Keyword*/
%token ASSIGN

%token WHILE
%token DO
%token IF
%token ELSE
%token FOR
%token PRINT
%token READ
%token CONTINUE
%token BREAK
%token RETURN
%token ID           /* identifier */

%token SEMICOLON 
%token COMMA 

%token CONS_INTEGER
%token CONS_FLOAT
%token CONS_SCIENTIFIC
%token CONS_STRING
%token CONS_BOOL

%start program


%%
/* at least one function_def in a program*/
program	: decl_and_def_list 
		;


decl_and_def_list	: decl_and_def_list declaration_list {printf("DECLARE\n");} 
					| declaration_list decl_and_def_list
					| definition_list
					| definition_list decl_and_def_list
					;

/* Declare 1 or more */
declaration_list	: declaration_list const_decl {printf("C: const decl\n");}
					| declaration_list var_decl {printf("D: var decl\n");}
					| declaration_list funct_decl {printf("D: func decl\n");}
					| declaration_list proc_decl {printf("D: proc decl\n");}
					| const_decl {printf("C: const decl\n");}
					| var_decl {printf("D: funct decl\n");}
					| funct_decl {printf("D: func decl\n");}
					| proc_decl	{printf("D: proc decl\n");}
					;

/* Variable */
var_decl : type {printf("wait assign\n");}  var_list {printf("var_dec: want ;\n");} SEMICOLON {printf("var declare\n");}
         ;

/* General */
type	: INT 
		| DOUBLE 
		| FLOAT 
		| STRING 
		| BOOL
		| BOOLEAN /*?? */
		; 

identifier	: symbol_id
			| symbol_id array_indice /* an array ex. x[1][2][4] */
			;

symbol_id	: ID {printf("ID\n");}
			;
	/* 1 or more */  /*[2][8]*/
array_indice: array_indice L_BRACKET CONS_INTEGER R_BRACKET 
			| L_BRACKET CONS_INTEGER R_BRACKET /*array_index*/
			;

/* Variable */
var_list 	: var_list COMMA var_single /*not empty*/
         	| var_single
         	;

var_single	: identifier /* w/o init*/
			| symbol_id ASSIGN expr  /* a = 1+2 */
			| symbol_id array_indice ASSIGN init_array /* arr[2] = { 4*4, 5 } */
			;

init_array	: expr_list R_BRACE
          	;

	/* zero or more, seperated by ',' */
expr_list : L_BRACE nonEmpty_expr_list
          | L_BRACE
          ;

nonEmpty_expr_list : nonEmpty_expr_list COMMA expr
                   | expr 
                   ;

/* Constant Variable */
const_decl	: CONST type const_list SEMICOLON
	   		;

const_list : const_init COMMA const_list
           | const_init
           ;

const_init	: symbol_id ASSIGN literal_constant
			;

literal_constant	: CONS_INTEGER
					| CONS_FLOAT
					| CONS_SCIENTIFIC
					| CONS_STRING
					| CONS_BOOL
					;

/* Declare Function */
funct_decl	: type symbol_id L_PAREN arg_list R_PAREN SEMICOLON {printf("Reduce: funct decl\n");}/*will return something*/
			;

proc_decl	: VOID symbol_id L_PAREN arg_list R_PAREN SEMICOLON {printf("Reduce: proc decl\n");} /*procedure*/
			;



/* Define 1 or more */ 
definition_list	: definition definition_list
				| definition
				;

definition 	: {printf("Reduce: func define \n");} type symbol_id arg_list R_PAREN compound_st 
			| {printf("Reduce: proc define \n");} VOID symbol_id arg_list R_PAREN compound_st 
            ;

/* Argument */			
	/*int x, int y[2][8], string z*/

arg_list 	: L_PAREN nonEmpty_arg_list 
			| L_PAREN
			;

nonEmpty_arg_list	: arg COMMA nonEmpty_arg_list
					| arg
					;

arg 	: type identifier
		;

/* Compound, local */
compound_st	: compound_list R_BRACE 
	    	;
/* 0 or more */
compound_list	: L_BRACE compound_list var_const_decl_list
				| L_BRACE compound_list stat_list
				| L_BRACE
				;

	/* 0 or more*/
var_const_decl_list	: var_const_decl_list var_decl
		 			| var_const_decl_list const_decl
					| var_decl
					| const_decl
					;

stat_list		: stat_list statement
				| statement
				;

/* Statements, 7 types */
/*? semicolon */
statement	: compound_st
	  		| simple_st
			| condition_st
			| while_st
			| for_st
			| jump_st
			| funct_invoc /*?same as in expr,  procedure call?*/
			;


/* Simple */
simple_st	: var_ref ASSIGN expr SEMICOLON 
       		| PRINT var_ref SEMICOLON
			| PRINT expr SEMICOLON
			| READ var_ref SEMICOLON
			;

var_ref	: symbol_id
		| symbol_id arr_ref_indice /* a[3+3][1] */
		;

arr_ref_indice	: arr_ref_index arr_ref_indice
				| arr_ref_index
				;

arr_ref_index	: L_BRACKET expr R_BRACKET
				;


/* Condition */
condition_st	: IF L_PAREN bool_expr R_PAREN compound_st /* if */
				| IF L_PAREN bool_expr R_PAREN compound_st ELSE compound_st /*if else*/
				;

bool_expr	: expr
			;

/* While statment*/
while_st 	: WHILE L_PAREN bool_expr R_PAREN compound_st /* while */
			| DO compound_st WHILE L_PAREN bool_expr R_PAREN SEMICOLON /*do while*/
			;

/* Jump */			
jump_st	: RETURN expr SEMICOLON
		| BREAK SEMICOLON
		| CONTINUE SEMICOLON
		;


/* Expression */
expr 	: L_PAREN expr R_PAREN 
		| expr OR expr
		| expr AND expr
		| expr NOT expr
		| expr LESS expr
		| expr LESS_EQ expr
		| expr EQUAL expr
		| expr GREAT_EQ expr
		| expr GREAT expr
		| expr NOT_EQ expr
		| expr PLUS expr
		| expr MINUS expr
    	| expr MULTIPLY expr
    	| expr DIVIDE expr
    	| expr MOD expr
    	| MINUS expr %prec MULTIPLY {fprintf(stderr, "- as negation operator\n");}
    	| literal_constant
    	| var_ref
    	| funct_invoc
    	;
     	/*| '(' expr ')'*/

/* For */
for_st	: FOR for_init for_control for_incre R_PAREN compound_st
		;
		/* 0 or more expr */
		/* not finish */
/*for_expr_list	: expr_list*/
for_init	: L_PAREN nonEmpty_for_init
			| L_PAREN
			;
nonEmpty_for_init	: nonEmpty_for_init COMMA for_single_entry
					| for_single_entry
					;
/* assign or function call */
for_incre	: SEMICOLON nonEmpty_for_incre
			| SEMICOLON
			;	

nonEmpty_for_incre	: nonEmpty_for_incre COMMA for_single_entry
					| for_single_entry
					;

/* relation */
for_control	: SEMICOLON nonEmpty_for_control
			| SEMICOLON
			;

nonEmpty_for_control	: nonEmpty_for_control COMMA for_control_entry
						| for_control_entry
						;

for_control_entry	: expr OR expr
					| expr AND expr
					| expr NOT expr
					| expr LESS expr
					| expr LESS_EQ expr
					| expr EQUAL expr
					| expr GREAT_EQ expr
					| expr GREAT expr
					| expr NOT_EQ expr 
					| symbol_id ASSIGN expr
					| symbol_id array_indice ASSIGN init_array
					;
/*
for_control_entry	: expr OR expr
					| expr AND expr
					| expr NOT expr
					| expr LESS expr
					| expr LESS_EQ expr
					| expr EQUAL expr
					| expr GREAT_EQ expr
					| expr GREAT expr
					| expr NOT_EQ expr 
					| symbol_id ASSIGN expr
					| symbol_id array_indice ASSIGN init_array
					;*/

for_single_entry	: symbol_id ASSIGN expr
					| symbol_id array_indice ASSIGN init_array
					| funct_invoc
					| expr
					;

/*init_expr	: */

/* Function Invocation */     	
funct_invoc	: symbol_id funct_invoc_list R_PAREN SEMICOLON {printf("call func\n");}/* 0 or more expr */
			;

funct_invoc_list	: L_PAREN 
					| L_PAREN nonEmpty_funct_invoc_list COMMA expr
					;

nonEmpty_funct_invoc_list	: nonEmpty_funct_invoc_list COMMA expr
							| expr
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
}

int  main( int argc, char **argv )
{
	if( argc != 2 ) {
		fprintf(  stdout,  "Usage:  ./parser  [filename]\n"  );
		exit(0);
	}

	FILE *fp = fopen( argv[1], "r" );
	
	if( fp == NULL )  {
		fprintf( stdout, "Open  file  error\n" );
		exit(-1);
	}
	
	yyin = fp;
	yyparse();

	fprintf( stdout, "\n" );
	fprintf( stdout, "|--------------------------------|\n" );
	fprintf( stdout, "|  There is no syntactic error!  |\n" );
	fprintf( stdout, "|--------------------------------|\n" );
	exit(0);
}

