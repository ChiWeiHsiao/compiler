#include <stdio.h>
#include <stdlib.h>
#include "ds.h"

extern int yyparse();
extern FILE* yyin;
int  main( int argc, char **argv )
{

	if( argc == 1 )
	{
		yyin = stdin;
	}
	else if( argc == 2 )
	{
		FILE *fp = fopen( argv[1], "r" );
		if( fp == NULL ) {
				fprintf( stderr, "Open file error\n" );
				exit(-1);
		}
		yyin = fp;
	}
	else
	{
	  	fprintf( stderr, "Usage: ./parser [filename]\n" );
   		exit(0);
 	} 

	yyparse();	/* primary procedure of parser */

	/*if("no error"){
		dispose_id_table();
        
        if(!show_errors()){           
            fprintf( stdout, "\n" );
            fprintf( stdout, "|---------------------------------------------|\n" );
            fprintf( stdout, "|  There is no syntactic and semantic error!  |\n" );
            fprintf( stdout, "|---------------------------------------------|\n" );
        }
	}*/
	
	if( noErr ){
		fprintf( stdout, "\n|-------------------------------------------|\n" );
		fprintf( stdout, "| There is no syntactic and semantic error! |\n" );
		fprintf( stdout, "|-------------------------------------------|\n" );
	}
	exit(0);
}

