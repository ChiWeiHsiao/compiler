/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VOID = 258,
     CONST = 259,
     STRING = 260,
     DOUBLE = 261,
     FLOAT = 262,
     BOOL = 263,
     INT = 264,
     BOOLEAN = 265,
     L_PAREN = 266,
     R_PAREN = 267,
     L_BRACKET = 268,
     R_BRACKET = 269,
     L_BRACE = 270,
     R_BRACE = 271,
     OR = 272,
     AND = 273,
     NOT = 274,
     NOT_EQ = 275,
     GREAT = 276,
     GREAT_EQ = 277,
     EQUAL = 278,
     LESS_EQ = 279,
     LESS = 280,
     MINUS = 281,
     PLUS = 282,
     MOD = 283,
     DIVIDE = 284,
     MULTIPLY = 285,
     ASSIGN = 286,
     WHILE = 287,
     DO = 288,
     IF = 289,
     ELSE = 290,
     FOR = 291,
     PRINT = 292,
     READ = 293,
     CONTINUE = 294,
     BREAK = 295,
     RETURN = 296,
     ID = 297,
     SEMICOLON = 298,
     COMMA = 299,
     CONS_INTEGER = 300,
     CONS_FLOAT = 301,
     CONS_SCIENTIFIC = 302,
     CONS_STRING = 303,
     CONS_BOOL = 304
   };
#endif
/* Tokens.  */
#define VOID 258
#define CONST 259
#define STRING 260
#define DOUBLE 261
#define FLOAT 262
#define BOOL 263
#define INT 264
#define BOOLEAN 265
#define L_PAREN 266
#define R_PAREN 267
#define L_BRACKET 268
#define R_BRACKET 269
#define L_BRACE 270
#define R_BRACE 271
#define OR 272
#define AND 273
#define NOT 274
#define NOT_EQ 275
#define GREAT 276
#define GREAT_EQ 277
#define EQUAL 278
#define LESS_EQ 279
#define LESS 280
#define MINUS 281
#define PLUS 282
#define MOD 283
#define DIVIDE 284
#define MULTIPLY 285
#define ASSIGN 286
#define WHILE 287
#define DO 288
#define IF 289
#define ELSE 290
#define FOR 291
#define PRINT 292
#define READ 293
#define CONTINUE 294
#define BREAK 295
#define RETURN 296
#define ID 297
#define SEMICOLON 298
#define COMMA 299
#define CONS_INTEGER 300
#define CONS_FLOAT 301
#define CONS_SCIENTIFIC 302
#define CONS_STRING 303
#define CONS_BOOL 304




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>

extern int linenum;             /* declared in lex.l */
extern FILE *yyin;              /* declared by lex */
extern char *yytext;            /* declared by lex */
extern char buf[256];           /* declared in lex.l */

int yylex();
int yyerror(char *s);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 218 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  258

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    13,    16,    19,    22,
      25,    28,    30,    32,    34,    36,    40,    42,    44,    46,
      48,    50,    52,    54,    57,    59,    64,    68,    72,    74,
      76,    80,    85,    88,    91,    93,    97,    99,   104,   108,
     110,   114,   116,   118,   120,   122,   124,   130,   136,   143,
     150,   156,   162,   165,   167,   171,   173,   176,   179,   182,
     184,   187,   190,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   218,   222,   226,   230,   232,   235,
     238,   240,   244,   250,   258,   260,   266,   274,   278,   281,
     284,   288,   292,   296,   299,   303,   307,   311,   315,   319,
     323,   327,   331,   335,   339,   343,   346,   348,   350,   352,
     359,   362,   364,   368,   370,   373,   375,   379,   381,   384,
     386,   390,   392,   394,   398,   403,   407,   412,   414,   418,
     422,   427,   429,   432,   436
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    52,    -1,    52,    53,    -1,    53,    52,
      -1,    70,    -1,    70,    52,    -1,    53,    64,    -1,    53,
      54,    -1,    53,    68,    -1,    53,    69,    -1,    64,    -1,
      54,    -1,    68,    -1,    69,    -1,    55,    59,    43,    -1,
       9,    -1,     6,    -1,     7,    -1,     5,    -1,     8,    -1,
      10,    -1,    57,    -1,    57,    58,    -1,    42,    -1,    58,
      13,    45,    14,    -1,    13,    45,    14,    -1,    59,    44,
      60,    -1,    60,    -1,    56,    -1,    57,    31,    86,    -1,
      57,    58,    31,    61,    -1,    62,    16,    -1,    15,    63,
      -1,    15,    -1,    63,    44,    86,    -1,    86,    -1,     4,
      55,    65,    43,    -1,    66,    44,    65,    -1,    66,    -1,
      57,    31,    67,    -1,    45,    -1,    46,    -1,    47,    -1,
      48,    -1,    49,    -1,    55,    57,    71,    12,    43,    -1,
       3,    57,    71,    12,    43,    -1,    55,    57,    71,    12,
      74,    70,    -1,     3,    57,    71,    12,    74,    70,    -1,
      55,    57,    71,    12,    74,    -1,     3,    57,    71,    12,
      74,    -1,    11,    72,    -1,    11,    -1,    73,    44,    72,
      -1,    73,    -1,    55,    56,    -1,    75,    16,    -1,    15,
      76,    -1,    15,    -1,    54,    76,    -1,    64,    76,    -1,
      77,    76,    -1,    54,    -1,    64,    -1,    77,    -1,    74,
      -1,    78,    -1,    82,    -1,    84,    -1,    87,    -1,    85,
      -1,    97,    -1,    79,    31,    86,    43,    -1,    37,    79,
      43,    -1,    37,    86,    43,    -1,    38,    79,    43,    -1,
      57,    -1,    57,    80,    -1,    81,    80,    -1,    81,    -1,
      13,    86,    14,    -1,    34,    11,    83,    12,    74,    -1,
      34,    11,    83,    12,    74,    35,    74,    -1,    86,    -1,
      32,    11,    83,    12,    74,    -1,    33,    74,    32,    11,
      83,    12,    43,    -1,    41,    86,    43,    -1,    40,    43,
      -1,    39,    43,    -1,    11,    86,    12,    -1,    86,    17,
      86,    -1,    86,    18,    86,    -1,    19,    86,    -1,    86,
      25,    86,    -1,    86,    24,    86,    -1,    86,    23,    86,
      -1,    86,    22,    86,    -1,    86,    21,    86,    -1,    86,
      20,    86,    -1,    86,    27,    86,    -1,    86,    26,    86,
      -1,    86,    30,    86,    -1,    86,    29,    86,    -1,    86,
      28,    86,    -1,    26,    86,    -1,    67,    -1,    79,    -1,
      96,    -1,    36,    88,    92,    90,    12,    74,    -1,    11,
      89,    -1,    11,    -1,    89,    44,    95,    -1,    95,    -1,
      43,    91,    -1,    43,    -1,    91,    44,    95,    -1,    95,
      -1,    43,    93,    -1,    43,    -1,    93,    44,    94,    -1,
      94,    -1,    86,    -1,    57,    31,    86,    -1,    57,    58,
      31,    61,    -1,    57,    31,    86,    -1,    57,    58,    31,
      61,    -1,    86,    -1,    57,    98,    12,    -1,    57,    98,
      12,    -1,    57,    98,    12,    43,    -1,    11,    -1,    11,
      99,    -1,    99,    44,    86,    -1,    86,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    70,    71,    72,    73,    77,    78,    79,
      80,    81,    82,    83,    84,    88,    92,    93,    94,    95,
      96,    97,   100,   101,   104,   107,   108,   112,   113,   116,
     117,   118,   121,   125,   126,   129,   130,   134,   137,   138,
     141,   144,   145,   146,   147,   148,   152,   155,   159,   160,
     161,   162,   169,   170,   173,   174,   177,   182,   185,   186,
     188,   189,   190,   191,   192,   193,   199,   200,   201,   202,
     203,   204,   205,   210,   211,   212,   213,   216,   217,   220,
     221,   224,   229,   230,   233,   237,   238,   242,   243,   244,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   272,
     276,   277,   279,   280,   283,   284,   287,   288,   292,   293,
     296,   297,   300,   301,   302,   318,   319,   320,   321,   328,
     331,   334,   335,   338,   339
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "CONST", "STRING", "DOUBLE",
  "FLOAT", "BOOL", "INT", "BOOLEAN", "L_PAREN", "R_PAREN", "L_BRACKET",
  "R_BRACKET", "L_BRACE", "R_BRACE", "OR", "AND", "NOT", "NOT_EQ", "GREAT",
  "GREAT_EQ", "EQUAL", "LESS_EQ", "LESS", "MINUS", "PLUS", "MOD", "DIVIDE",
  "MULTIPLY", "ASSIGN", "WHILE", "DO", "IF", "ELSE", "FOR", "PRINT",
  "READ", "CONTINUE", "BREAK", "RETURN", "ID", "SEMICOLON", "COMMA",
  "CONS_INTEGER", "CONS_FLOAT", "CONS_SCIENTIFIC", "CONS_STRING",
  "CONS_BOOL", "$accept", "program", "decl_and_def_list",
  "declaration_list", "var_decl", "type", "identifier", "symbol_id",
  "array_indice", "var_list", "var_single", "init_array", "init_arr_list",
  "nonEmpty_init_arr_list", "const_decl", "const_list", "const_init",
  "literal_constant", "funct_decl", "proc_decl", "definition_list",
  "arg_list", "nonEmpty_arg_list", "arg", "compound_st", "compound_list",
  "nonEmpty_compound_list", "statement", "simple_st", "var_ref",
  "arr_ref_indice", "arr_ref_index", "condition_st", "bool_expr",
  "while_st", "jump_st", "expr", "for_st", "for_init", "nonEmpty_for_init",
  "for_incre", "nonEmpty_for_incre", "for_control", "nonEmpty_for_control",
  "for_control_entry", "for_single_entry", "funct_invoc_ref",
  "funct_invoc_st", "funct_invoc_list", "nonEmpty_funct_invoc_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    52,    52,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    58,    58,    59,    59,    60,
      60,    60,    61,    62,    62,    63,    63,    64,    65,    65,
      66,    67,    67,    67,    67,    67,    68,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    78,    78,    79,    79,    80,
      80,    81,    82,    82,    83,    84,    84,    85,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    95,    95,    95,    95,    96,
      97,    98,    98,    99,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     3,     3,     1,     1,
       3,     4,     2,     2,     1,     3,     1,     4,     3,     1,
       3,     1,     1,     1,     1,     1,     5,     5,     6,     6,
       5,     5,     2,     1,     3,     1,     2,     2,     2,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     3,     3,     1,     2,     2,
       1,     3,     5,     7,     1,     5,     7,     3,     2,     2,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     6,
       2,     1,     3,     1,     2,     1,     3,     1,     2,     1,
       3,     1,     1,     3,     4,     3,     4,     1,     3,     3,
       4,     1,     2,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    19,    17,    18,    20,    16,    21,     0,
       2,     0,    12,     0,    11,    13,    14,     5,    24,     0,
       0,     1,     0,     3,     0,     4,     8,     7,     9,    10,
      29,    22,     0,    28,     6,    53,     0,     0,     0,    39,
       0,     8,     7,     9,    10,    22,     0,     0,    23,     0,
      15,     0,     0,    52,    55,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,    41,    42,    43,    44,    45,
      77,   106,   107,    30,   108,     0,     0,     0,    22,    27,
      56,    22,     0,    59,    47,    51,     0,    40,    38,     0,
       0,    26,     0,    93,   105,   131,     0,    78,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    31,     0,    46,    50,    23,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,    77,    64,    66,    58,    65,    67,     0,    68,
      69,    71,    70,    72,     0,     0,    49,    57,    90,   134,
     132,     0,    79,   129,    91,    92,    99,    98,    97,    96,
      95,    94,   101,   100,   104,   103,   102,    25,    33,    36,
      32,    48,     0,     0,     0,   111,     0,   107,     0,    77,
       0,    89,    88,     0,    60,     0,    61,    62,     0,     0,
       0,     0,    81,     0,     0,    84,     0,     0,    77,   127,
     110,   113,   119,     0,    74,    75,    76,    87,     0,     0,
       0,     0,   133,    35,     0,     0,     0,     0,     0,     0,
       0,     0,    77,   122,   118,   121,   115,     0,   130,    73,
       0,     0,    85,     0,    82,    41,   125,     0,   129,   112,
       0,     0,     0,   114,   117,     0,     0,     0,   126,   123,
       0,   120,     0,   109,    86,    83,   124,   116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    24,    30,    70,    48,    32,
      33,   115,   116,   168,    14,    38,    39,    71,    15,    16,
      17,    36,    53,    54,   134,    86,   135,   136,   137,    72,
      97,    98,   139,   194,   140,   141,   199,   142,   176,   200,
     227,   243,   203,   224,   225,   201,    74,   143,    99,   150
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -218
static const yytype_int16 yypact[] =
{
     106,    12,   274,  -218,  -218,  -218,  -218,  -218,  -218,    47,
     189,   106,  -218,    12,  -218,  -218,  -218,   106,  -218,    80,
      12,  -218,    12,   189,    12,   189,  -218,  -218,  -218,  -218,
    -218,    50,   -35,  -218,   189,   274,   105,    61,    76,    78,
      80,  -218,  -218,  -218,  -218,    50,    81,   165,     3,   111,
    -218,    12,    12,  -218,    84,    -8,   258,  -218,    12,   119,
     121,   120,   165,   165,   165,  -218,  -218,  -218,  -218,  -218,
      94,  -218,  -218,   351,  -218,    92,   124,    10,    11,  -218,
    -218,   127,   274,   222,  -218,  -218,   125,  -218,  -218,   102,
     103,  -218,   320,   351,  -218,   165,   165,  -218,   134,   137,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   144,   165,  -218,   143,  -218,  -218,   147,
    -218,   150,   149,   154,   161,   165,    12,   130,   132,   165,
     222,    12,    94,   222,  -218,  -218,   222,  -218,   146,  -218,
    -218,  -218,  -218,  -218,    12,    12,  -218,  -218,  -218,   351,
     136,   337,  -218,  -218,   364,   375,   282,   282,   282,   282,
     282,   282,    70,    70,  -218,  -218,  -218,  -218,   139,   351,
    -218,  -218,   165,   155,   165,   165,   135,   145,   248,   134,
     162,  -218,  -218,   272,  -218,   177,  -218,  -218,   165,    80,
      80,   165,  -218,   165,   178,   351,   198,   205,    73,   351,
     175,  -218,   165,   179,  -218,  -218,  -218,  -218,   181,   296,
     221,   223,   351,   351,   149,   165,   149,   197,   165,    27,
     224,   165,    77,   351,   190,  -218,   165,   226,  -218,  -218,
     149,   149,  -218,   228,   212,   120,   351,   124,    -6,  -218,
     165,    66,   165,   204,  -218,   149,   206,   149,  -218,   351,
     124,  -218,   165,  -218,  -218,  -218,  -218,  -218
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -218,  -218,    45,     5,    18,    85,   200,    -1,   -80,  -218,
     199,  -217,  -218,  -218,    20,   195,  -218,   201,    72,    83,
     -82,   -27,   185,  -218,   -45,  -218,    -9,  -218,  -218,   -81,
     187,  -218,  -218,  -169,  -218,  -218,   -36,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,    44,  -204,  -218,  -218,  -118,  -218
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -129
static const yytype_int16 yytable[] =
{
      19,   119,   138,   146,    49,   197,  -128,    83,    50,    51,
      85,    73,    31,    59,   185,    23,    75,   239,    60,    37,
     248,    40,   244,    45,    46,    83,    92,    93,    94,    26,
      23,    27,   118,   256,    76,    84,   171,  -128,  -128,    23,
      75,    41,    47,    42,   177,   180,   233,    21,   257,   138,
      78,    81,   138,   117,    18,   138,    25,    37,   237,   149,
     151,    35,    34,    46,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   173,   169,    75,
     220,    47,   132,    28,    95,    13,   217,    20,    95,   178,
     217,    35,    56,   183,    29,    43,    13,   250,   110,   111,
     112,   130,    13,   133,   218,    95,    44,    96,   240,     1,
       2,     3,     4,     5,     6,     7,     8,    55,   219,    57,
      52,   184,    58,    77,   186,   179,    61,   187,    82,   132,
      78,    89,   132,    90,    91,   132,   195,   113,   195,   114,
      46,   147,   241,   189,   190,    84,   117,    96,   130,   153,
     133,   130,   209,   133,   130,   212,   133,   213,   167,   170,
      75,   172,   210,   211,    83,   174,   223,    52,   131,   232,
     145,   234,   175,   181,   198,   182,    62,   188,   202,   195,
     191,   151,   236,   193,    63,    85,   118,   196,   204,   208,
     214,    64,    22,     2,     3,     4,     5,     6,     7,     8,
     253,   222,   255,   145,   249,   206,   223,    18,    62,   215,
      65,    66,    67,    68,    69,   131,    63,   216,   131,   221,
     198,   131,   226,    64,   228,   198,     2,     3,     4,     5,
       6,     7,     8,   230,   242,   231,   238,    83,   245,    18,
     246,   222,   235,    66,    67,    68,    69,   247,   252,   254,
      79,   198,    80,    88,   121,   122,   123,    87,   124,   125,
     126,   127,   128,   129,    18,   100,   101,   120,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     3,
       4,     5,     6,     7,     8,   152,   251,     0,     0,   100,
     101,   205,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    65,    66,    67,    68,    69,   108,   109,
     110,   111,   112,   100,   101,   207,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
       0,     0,   148,     0,     0,     0,     0,   100,   101,   229,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   192,     0,     0,   100,   101,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   100,   101,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   101,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
       1,    81,    83,    85,    31,   174,    12,    15,    43,    44,
      55,    47,    13,    40,   132,    10,    13,   221,    45,    20,
     237,    22,   226,    24,    13,    15,    62,    63,    64,    11,
      25,    11,    77,   250,    31,    43,   118,    43,    44,    34,
      13,    23,    31,    23,   125,   126,   215,     0,   252,   130,
      51,    52,   133,    43,    42,   136,    11,    58,    31,    95,
      96,    11,    17,    13,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   122,   114,    13,
     198,    31,    83,    11,    11,     0,    13,     2,    11,   125,
      13,    11,    31,   129,    11,    23,    11,    31,    28,    29,
      30,    83,    17,    83,    31,    11,    23,    13,    31,     3,
       4,     5,     6,     7,     8,     9,    10,    12,   198,    43,
      35,   130,    44,    12,   133,   126,    45,   136,    44,   130,
     131,    12,   133,    12,    14,   136,   172,    45,   174,    15,
      13,    16,   222,   144,   145,    43,    43,    13,   130,    12,
     130,   133,   188,   133,   136,   191,   136,   193,    14,    16,
      13,    11,   189,   190,    15,    11,   202,    82,    83,   214,
      85,   216,    11,    43,   175,    43,    11,    31,    43,   215,
      44,   217,   218,    44,    19,   230,   231,    32,    43,    12,
      12,    26,     3,     4,     5,     6,     7,     8,     9,    10,
     245,   202,   247,   118,   240,    43,   242,    42,    11,    11,
      45,    46,    47,    48,    49,   130,    19,    12,   133,    44,
     221,   136,    43,    26,    43,   226,     4,     5,     6,     7,
       8,     9,    10,    12,    44,    12,    12,    15,    12,    42,
      12,   242,    45,    46,    47,    48,    49,    35,    44,    43,
      51,   252,    52,    58,    32,    33,    34,    56,    36,    37,
      38,    39,    40,    41,    42,    17,    18,    82,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     5,
       6,     7,     8,     9,    10,    98,   242,    -1,    -1,    17,
      18,    43,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    45,    46,    47,    48,    49,    26,    27,
      28,    29,    30,    17,    18,    43,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    17,    18,    43,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    14,    -1,    -1,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    17,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    51,
      52,    53,    54,    55,    64,    68,    69,    70,    42,    57,
      55,     0,     3,    53,    55,    52,    54,    64,    68,    69,
      56,    57,    59,    60,    52,    11,    71,    57,    65,    66,
      57,    54,    64,    68,    69,    57,    13,    31,    58,    71,
      43,    44,    55,    72,    73,    12,    31,    43,    44,    71,
      71,    45,    11,    19,    26,    45,    46,    47,    48,    49,
      57,    67,    79,    86,    96,    13,    31,    12,    57,    60,
      56,    57,    44,    15,    43,    74,    75,    67,    65,    12,
      12,    14,    86,    86,    86,    11,    13,    80,    81,    98,
      17,    18,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    45,    15,    61,    62,    43,    74,    58,
      72,    32,    33,    34,    36,    37,    38,    39,    40,    41,
      54,    55,    57,    64,    74,    76,    77,    78,    79,    82,
      84,    85,    87,    97,     3,    55,    70,    16,    12,    86,
      99,    86,    80,    12,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    14,    63,    86,
      16,    70,    11,    74,    11,    11,    88,    79,    86,    57,
      79,    43,    43,    86,    76,    98,    76,    76,    31,    57,
      57,    44,    14,    44,    83,    86,    32,    83,    57,    86,
      89,    95,    43,    92,    43,    43,    43,    43,    12,    86,
      71,    71,    86,    86,    12,    11,    12,    13,    31,    58,
      98,    44,    57,    86,    93,    94,    43,    90,    43,    43,
      12,    12,    74,    83,    74,    45,    86,    31,    12,    95,
      31,    58,    44,    91,    95,    12,    12,    35,    61,    86,
      31,    94,    44,    74,    43,    74,    61,    95
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 15:
#line 88 "parser.y"
    {printf("# %d: var declare\n",linenum);}
    break;

  case 37:
#line 134 "parser.y"
    {printf("# %d: const declare\n",linenum);}
    break;

  case 46:
#line 152 "parser.y"
    {printf("# %d: func declare\n",linenum);}
    break;

  case 47:
#line 155 "parser.y"
    {printf("# %d: proc declare\n",linenum);}
    break;

  case 67:
#line 200 "parser.y"
    {printf("# %d: simple st\n",linenum);}
    break;

  case 71:
#line 204 "parser.y"
    {printf("# %d: jump mst\n",linenum);}
    break;

  case 86:
#line 238 "parser.y"
    {printf("# %d: do-while mast\n",linenum);}
    break;


/* Line 1267 of yacc.c.  */
#line 1716 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 343 "parser.y"


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


