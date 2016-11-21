%{
#include <string.h>
#include “y.tab.h”

#define LIST                { strncat(buf, yytext, sizeof(buf) - strlen(buf) - 1); }
#define token(t)            { LIST; if (Opt_Token) printf("<%s>\n", #t); }
#define tokenString(t, s)   { LIST; if (Opt_Token) printf("<%s:%s>\n", t, s); }
#define MAX_LINE_LENGTH 257
#define MAX_ID_LENGTH 257
#define MAX_ID_COUNT 10000
int Opt_Source = 1;
int Opt_Token = 1;
int Opt_Statistic = 1;
int linenum = 1;
char buf[MAX_LINE_LENGTH];
char str[MAX_LINE_LENGTH];

struct id_entity{
  char name[MAX_ID_LENGTH+1];
  int count;
} id_table[MAX_ID_COUNT];
int id_count = 0; //the number of existing identifier
int id_search(char* newid);//function 

void error();

%}

whitespace  [ \t]+
letter  [A-Za-z]
digit [0-9]
integer 0|[1-9][0-9]*
float [0-9]+"."[0-9]+
significand [0]*({integer}|{float})
exponent [0]*({integer})
scientific  {significand}[Ee][\+-]?{exponent}
identifier  ({letter})({letter}|{digit})*


%x STRING
%x COMMENT_ONE
%x COMMENT_MUL
%x PRAGMA 
%x PRAGMA_SOU 
%x PRAGMA_TOK
%x PRAGMA_STA
%x PRAGMA_AFTER
%x PRAGMA_COMMENT_M
%x PRAGMA_AFTER_COMMENT
%%
","   { tokenString("delim", ","); return COMMA; }
";"   { tokenString("delim", ";"); return SEMICOLON; }
"("   { tokenString("delim", "("); return L_PARENTHESIS; }
")"   { tokenString("delim", ")"); return R_PARENTHESIS; }
"["   { tokenString("delim", "["); return L_BRACKET; }
"]"   { tokenString("delim", "]"); return R_BRACKET; }
"{"   { tokenString("delim", "{"); return L_BRACE; }
"}"   { tokenString("delim", "}"); return R_BRACE; }

"+"   { token("+"); return PLUS; }
"-"   { token("-"); return MINUS; }
"*"   { token("*"); }
"/"   { token("/"); }
"%"   { token("%"); }
"="   { token("="); }
"<"   { token("<"); }
"<="  { token("<="); }
"!="  { token("!="); }
">="  { token(">="); }
">"   { token(">"); }
"=="  { token("=="); }
"&&"  { token("&&"); }
"||"  { token("||"); }
"!"   { token("!"); }

"while"                         { token("KW:while"); }
"do"                            { token("KW:do"); }
"if"                            { token("KW:if"); }
"else"                          { token("KW:else"); }
"true"                          { token("KW:true"); }
"false"                         { token("KW:false"); }
"for"                           { token("KW:for"); }
"int"                           { token("KW:int"); }
"print"                         { token("KW:print"); }
"const"                         { token("KW:const"); }
"read"                          { token("KW:read"); }
"boolean"                       { token("KW:boolean"); }
"bool"                          { token("KW:bool"); }
"void"                          { token("KW:void"); }
"float"                         { token("KW:float"); }
"double"                        { token("KW:double"); }
"string"                        { token("KW:string"); }
"continue"                      { token("KW:continue"); }
"break"                         { token("KW:break"); }
"return"                        { token("KW:return"); }

{identifier}    	{ tokenString("id",yytext); 
                 	  if(Opt_Statistic) id_search(yytext); 
                	}
{integer}       	{ tokenString("integer",yytext);  }
{float}         	{ tokenString("float",yytext);  }
{scientific}   		{ tokenString("scientific",yytext);  }


"\""			{ /*start of a string  */
                          LIST;
                          BEGIN STRING; 
                        }   

<STRING>([^"\n\\])+     {/*General Case: not \ " \n*/   
                          LIST;
                          strcat( str, yytext );
                        }


<STRING>[\\][\"]	{/*double quote*/
			 LIST;
			 strcat(str, "\""); 	
			}


<STRING>[\"]		{/*end of the string*/
			 LIST;
			 //tokenString("string",str);
 			 if (Opt_Token) printf("<string:%s>\n", str); 
			 str[0]= '\0'; //clear the string
			 BEGIN INITIAL;
			}

<STRING>[\\]{2}		{/*back-slash*/
			 LIST;
			 strcat(str, "\\"); 	
			}

<STRING>"\n"            { error();}     



"//"                    { /*start of one-line comment*/
			  LIST;
                          BEGIN COMMENT_ONE;
                        }     

<COMMENT_ONE>[^\n]+     { LIST;}

<COMMENT_ONE>"\n"	{
			 LIST;
			 if (Opt_Source) printf("%d:%s\n", linenum, buf);
			 ++linenum;
       			 buf[0] = '\0';
                         BEGIN INITIAL;
                        }

"/*"                    {/*start of multi-line comment*/
			 LIST;
			 BEGIN COMMENT_MUL;
                        }

<COMMENT_MUL>"*/"       {
                         LIST;
                         BEGIN INITIAL;
                        }

<COMMENT_MUL>"\n"	{
			 LIST;
			 if (Opt_Source) printf("%d:%s\n", linenum, buf);
			 ++linenum;
       			 buf[0] = '\0';
                        }

<COMMENT_MUL>.          { LIST; }


^"#pragma"		{
			/*Nothing before pragma, legal*/
		  	 LIST;
		 	 BEGIN PRAGMA;
			}

<PRAGMA>"source"	{ LIST; BEGIN PRAGMA_SOU; }
<PRAGMA>"token"		{ LIST; BEGIN PRAGMA_TOK; }
<PRAGMA>"statistic"	{ LIST; BEGIN PRAGMA_STA; }
<PRAGMA>{whitespace}	{ LIST; }
<PRAGMA>.		{ error(); }

<PRAGMA_SOU>[ \t]*"on"	{
			 LIST;
			 Opt_Source = 1;
		 	 BEGIN PRAGMA_AFTER;
			}
<PRAGMA_SOU>[ \t]*"off"	{ 
			LIST;
			 Opt_Source = 0;
		 	BEGIN PRAGMA_AFTER;
			}
<PRAGMA_SOU>.		{ error(); }

<PRAGMA_TOK>[ \t]*"on"	{
			 LIST;
			 Opt_Token = 1;		
		  	 BEGIN PRAGMA_AFTER;
			}
<PRAGMA_TOK>[ \t]*"off"	{
			 LIST; 
			 Opt_Token = 0;
			 BEGIN PRAGMA_AFTER;
			}
<PRAGMA_TOK>.		{ error(); }

<PRAGMA_STA>[ \t]*"on"	{ 
			LIST;
			Opt_Statistic = 1;
		 	BEGIN PRAGMA_AFTER;
			}
<PRAGMA_STA>[ \t]*"off"	{
			 LIST;
			 Opt_Statistic = 0;	
			 BEGIN PRAGMA_AFTER;
			}
<PRAGMA_STA>.		{ error(); }

<PRAGMA_AFTER>{whitespace}	{ LIST; }
<PRAGMA_AFTER>"/*"	{ 
			  LIST; 
			  BEGIN PRAGMA_COMMENT_M; //COMMENT_MUL;
			}




<PRAGMA_COMMENT_M>"*/"  {
                         LIST;
                         BEGIN PRAGMA_AFTER_COMMENT;//if same line with #pragma, after comment still can not have anything
                        }

<PRAGMA_COMMENT_M>"\n"	{
			 LIST;
			 if (Opt_Source) printf("%d:%s\n", linenum, buf);
			 ++linenum;
       			 buf[0] = '\0';
			 BEGIN COMMENT_MUL;
                        }

<PRAGMA_COMMENT_M>.     { LIST; }

<PRAGMA_AFTER_COMMENT>{whitespace}	{LIST;}

<PRAGMA_AFTER_COMMENT>"\n"	{
			 	LIST;
			 	if (Opt_Source) printf("%d:%s\n", linenum, buf);
				 ++linenum;
       			 	buf[0] = '\0';
			 	BEGIN INITIAL;
				}

<PRAGMA_AFTER_COMMENT>.	{error();}

<PRAGMA_AFTER>"//"	{ 
			  LIST; 
			  BEGIN COMMENT_ONE;
			}


<PRAGMA_AFTER>"\n"	{ 
			 LIST;
        		 if (Opt_Source) printf("%d:%s\n", linenum, buf);
			 ++linenum;
        		 buf[0] = '\0';
			 BEGIN INITIAL;
			}
<PRAGMA_AFTER>.		{ error(); }

{whitespace}		{ LIST;}

\n    {
        LIST;
        if (Opt_Source) printf("%d:%s\n", linenum, buf);
        ++linenum;
        buf[0] = '\0';
      }

.     { // Unrecognized character
        error();
	//fprintf(stderr, "Error at line %d: %s\n", linenum, yytext);
        //exit(1);
      }

%%
int main( int argc, char **argv )
{
    if (argc >= 2)
    {
        yyin = fopen( argv[1], "r" );
        if ( NULL == yyin ) {
            fprintf( stderr, "Cannot open: %s\n", argv[1] );
            exit(-1);
        }
    }
    else
    {
        yyin = stdin;
    }

    yylex();

    if (Opt_Statistic)
    {
        // Print frequency table
	printf("frequencies of identifiers:\n");
	int i = 0;
	while(id_table[i].count != 0){
		printf("%s\t%d\n",id_table[i].name,id_table[i].count);
		i++;
	}
    }

    exit(0);
}

void error(){	
        fprintf(stderr, "Error at line %d: %s\n", linenum, yytext);
	exit(1);
}

int id_search(char* newid){
  for(int i=0; i<=id_count; i++){
    //match, id already exist
    if(strcmp(newid, id_table[i].name)==0){
      id_table[i].count++;
      return i; 
    }
  }
  //is a whole new id
  strcpy(id_table[id_count].name, newid);
  id_table[id_count].count = 1;
  id_count++;
  return id_count;
}
