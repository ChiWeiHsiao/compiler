% {
#include <stdio.h>
#include <stdlib.h>

extern int linenum;             /* declared in lex.l */
extern FILE *yyin;              /* declared by lex */
extern char *yytext;            /* declared by lex */
extern char buf[256];           /* declared in lex.l */
%}

%token SEMICOLON    /* ; */
%token COMMA    /* , */
%token L_PARENTHESIS;    /* ( */
%token R_PARENTHESIS;    /* ) */
%token L_BRACKET;    /* [ */
%token R_BRACKET;    /* ] */
%token L_BRACE;    /* { */
%token R_BRACE;    /* } */
%token ID           /* identifier */
%token INT          /* keyword */

%%

program : decl_and_def_list
	;

decl_and_def_list	: decl_and_def_list declaration_list
			| decl_and_def_list definition_list
			;

declaration_list : declaration_list const_decl
                 | declaration_list var_decl
                 | declaration_list funct_decl
				 ;
const_decl : 
	   ;

var_decl : type non_empty_identifier_list SEMICOLON
         ;

non_empty_identifier_list:identifier identifier_list
			; 

identifier_list	: COMMA identifier_list
		| identifier
		;

type : INT | DOUBLE | FLOAT | STRING | BOOL
     ; /*? array */


identifier : ID
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

