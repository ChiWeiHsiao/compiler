%{
#include <string.h>

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

struct id_entity{
  char name[MAX_ID_LENGTH+1];
  int count;
} id_table[MAX_ID_COUNT];

int id_count = 0; //the number of existing identifier

int id_search(char* newid){
  for(int i=0; i<=id_count; i++){
    //match, id already exist
    if(strcmp(newid, id_table[i].name)==0){
      id_table[i].count++;
      return i; 
    }
  }
  //is a whole new id
  id_count++;
  strcpy(id_table[id_count].name, newid);
  id_table[id_count].count = 1;
  return id_count;
}

%}

whitespace  [ \t]+
letter  [A-Za-z]
digit [0-9]
integer 0|[1-9][0-9]*
integral [0-9]+
fraction  [0-9]+
float {integral}"."{fraction}
scientific  ({integer}|{float})[Ee][+-]?({integer})
string {letter}"???"
identifier  ({letter})({letter}|{digit})*
%%
","   { tokenString("delim", ","); }
";"   { tokenString("delim", ";"); }
"("   { tokenString("delim", "("); }
")"   { tokenString("delim", ")"); }
"["   { tokenString("delim", "["); }
"]"   { tokenString("delim", "]"); }
"{"   { tokenString("delim", "{"); }
"}"   { tokenString("delim", "}"); }

"+"   { token("+"); }
"-"   { token("-"); }
"*"   { token("*"); }
"/"   { token("/"); }
"%"   { token("%"); }
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

{identifier}    { tokenString("id",yytext); 
                  id_search(yytext); 
                }
{integer}       { tokenString("integer",yytext);  }
{float}         { tokenString("float",yytext);  }
{scientific}    { tokenString("scientific",yytext);  }
{string}        { tokenString("string",yytext);  }




\n    {
        LIST;
        if (Opt_Source) printf("%d:%s\n", linenum, buf);
        ++linenum;
        buf[0] = '\0';
      }

.     { // Unrecognized character
        fprintf(stderr, "Error at line %d: %s\n", linenum, yytext);
        exit(1);
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
    }

    exit(0);
}
