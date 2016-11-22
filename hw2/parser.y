%{
#include <stdio.h>
#include <stdlib.h>

extern int linenum;             /* declared in lex.l */
extern FILE *yyin;              /* declared by lex */
extern char *yytext;            /* declared by lex */
extern char buf[256];           /* declared in lex.l */
%}

%nonassoc INT BOOL FLOAT DOUBLE STRING CONST VOID
%nonassoc BOOLEAN

/*Punctuation*/
%token SEMICOLON    /* ; */
%token COMMA    /* , */
%token L_PARENTHESIS    /* ( */
%token R_PARENTHESIS    /* ) */
%token L_BRACKET    /* [ */
%token R_BRACKET    /* ] */
%token L_BRACE    /* { */
%token R_BRACE    /* } */

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
%token TRUE
%token FALSE
%token FOR
%token PRINT
%token READ
%token CONTINUE
%token BREAK
%token RETURN
%token ID           /* identifier */

%token CONS_INTEGER
%token CONS_FLOAT
%token CONS_SCIENTIFIC
%token CONS_STRING

%start program


%%

program : decl_and_def_list
	;

decl_and_def_list	: declaration_list decl_and_def_list 
			| definition_list decl_and_def_list   
			| definition_list 
			;
definition_list : funct_def definition_list /**/
		| funct_def
                ;
funct_def: type identifier L_PARENTHESIS formal_argument_list R_PARENTHESIS compound_st 
	 | VOID identifier L_PARENTHESIS formal_argument_list R_PARENTHESIS compound_st

declaration_list : const_decl declaration_list 
                 | var_decl declaration_list 
                 | funct_decl declaration_list 
		 ;

funct_decl : type identifier L_PARENTHESIS formal_argument_list R_PARENTHESIS SEMICOLON /*will return something*/
           | VOID identifier L_PARENTHESIS formal_argument_list R_PARENTHESIS SEMICOLON  /*procedure*/
           ;

/*int x, int y[2][8], string z*/
formal_argument_list : nonEmpty_formal_argument_list 
                     | /* epsilon*/
                     ;
nonEmpty_formal_argument_list : formal_argument COMMA nonEmpty_formal_argument_list
                              | formal_argument
                              ;
formal_argument : type identifier
                | type array
                ;

const_dimention_list : const_dimention_list L_BRACKET CONS_INTEGER R_BRACKET /*[2][8]*/
               | L_BRACKET CONS_INTEGER R_BRACKET
               ;/*for array [4][5]*/

const_decl : CONST type const_list
	   ;

const_list : const_list COMMA const_init
           | const_init
           ;
const_init : ID ASSIGN CONS_INTEGER
           | ID ASSIGN CONS_FLOAT
           | ID ASSIGN CONS_SCIENTIFIC
           | ID ASSIGN CONS_STRING
           ;

var_decl : type identifier_list SEMICOLON
         ;

identifier_list	: identifier_list COMMA identifier /*not empty*/
		| identifier
		;

type : INT | DOUBLE | FLOAT | STRING | BOOL ;
            

identifier : ID
           | ID ASSIGN expr
           | array
           | array ASSIGN init_array 
	   ;

array : ID const_dimention_list  /*y[2][8]*/
      ;
init_array: L_BRACE expr_list R_BRACE
          ;

expr_list : nonEmpty_expr_list
          | /*epsilon*/
          ;

nonEmpty_expr_list : nonEmpty_expr_list COMMA expr
                   | expr 
                   ;
statement	: compound_st
	  	| simple_st
		| condition_st
		| while_st
		| for_st
		| jump_st
		| procedure_call
		;
/*Compound*/
compound_st : L_BRACE var_const_st_list R_BRACE 
	    ;
	/*0 or more*/
var_const_st_list : var_decl var_const_st_list  
		  | const_decl var_const_st_list
		  | statement var_const_st_list
		  | /*epsilon*/
		  ;
/*Simple*/
simple	: var_ref ASSIGN expr SEMICOLON
       	| PRINT var_ref SEMICOLON
	| PRINT expr SEMICOLON
	| READ var_ref
	;

var_ref	: ID
	| ID expr_dimention_list
	;

expr_dimention_list : expr_dimention_list L_BRACKET expr R_BRACKET 
		    | L_BRACKET expr R_BRACKET 
		    ;
expr : expr  expr
     | expr '-' expr
     | expr '*' expr
     | expr '/' expr
     | expr '%' expr
     | '-' expr %prec '*' {printf("Reduce with negation operator\n");}
     | '(' expr ')'
     | expr OP_LT expr
     | expr OP_LE expr
     | expr OP_GT expr
     | expr OP_GE expr
     | expr OP_NE expr
     | expr OP_EQ expr
     | expr OP_AND expr
     | expr OP_OR expr
     | OP_NOT expr
     | literal_constant
     | funct_call
     | var_ref
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

