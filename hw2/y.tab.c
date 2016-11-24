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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   534

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNRULES -- Number of states.  */
#define YYNSTATES  272

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
      25,    28,    30,    32,    34,    36,    37,    38,    44,    46,
      48,    50,    52,    54,    56,    58,    61,    63,    68,    72,
      76,    78,    80,    84,    89,    92,    95,    97,   101,   103,
     108,   112,   114,   118,   120,   122,   124,   126,   128,   135,
     142,   145,   147,   148,   155,   156,   163,   166,   168,   172,
     174,   177,   180,   184,   188,   190,   193,   196,   198,   200,
     203,   205,   207,   209,   211,   213,   215,   217,   219,   224,
     228,   232,   236,   238,   241,   244,   246,   250,   256,   264,
     266,   272,   280,   284,   287,   290,   294,   298,   302,   306,
     310,   314,   318,   322,   326,   330,   334,   338,   342,   346,
     350,   353,   355,   357,   359,   366,   369,   371,   375,   377,
     380,   382,   386,   388,   391,   393,   397,   399,   403,   407,
     411,   415,   419,   423,   427,   431,   435,   439,   444,   448,
     453,   455,   457,   462,   464,   469,   473
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    52,    -1,    52,    53,    -1,    53,    52,
      -1,    72,    -1,    72,    52,    -1,    53,    66,    -1,    53,
      54,    -1,    53,    70,    -1,    53,    71,    -1,    66,    -1,
      54,    -1,    70,    -1,    71,    -1,    -1,    -1,    57,    55,
      61,    56,    43,    -1,     9,    -1,     6,    -1,     7,    -1,
       5,    -1,     8,    -1,    10,    -1,    59,    -1,    59,    60,
      -1,    42,    -1,    60,    13,    45,    14,    -1,    13,    45,
      14,    -1,    61,    44,    62,    -1,    62,    -1,    58,    -1,
      59,    31,    92,    -1,    59,    60,    31,    63,    -1,    64,
      16,    -1,    15,    65,    -1,    15,    -1,    65,    44,    92,
      -1,    92,    -1,     4,    57,    67,    43,    -1,    68,    44,
      67,    -1,    68,    -1,    59,    31,    69,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,    49,    -1,    57,    59,
      11,    76,    12,    43,    -1,     3,    59,    11,    76,    12,
      43,    -1,    73,    72,    -1,    73,    -1,    -1,    74,    57,
      59,    76,    12,    79,    -1,    -1,    75,     3,    59,    76,
      12,    79,    -1,    11,    77,    -1,    11,    -1,    78,    44,
      77,    -1,    78,    -1,    57,    58,    -1,    80,    16,    -1,
      15,    80,    81,    -1,    15,    80,    82,    -1,    15,    -1,
      81,    54,    -1,    81,    66,    -1,    54,    -1,    66,    -1,
      82,    83,    -1,    83,    -1,    79,    -1,    84,    -1,    88,
      -1,    90,    -1,    93,    -1,    91,    -1,   102,    -1,    85,
      31,    92,    43,    -1,    37,    85,    43,    -1,    37,    92,
      43,    -1,    38,    85,    43,    -1,    59,    -1,    59,    86,
      -1,    87,    86,    -1,    87,    -1,    13,    92,    14,    -1,
      34,    11,    89,    12,    79,    -1,    34,    11,    89,    12,
      79,    35,    79,    -1,    92,    -1,    32,    11,    89,    12,
      79,    -1,    33,    79,    32,    11,    89,    12,    43,    -1,
      41,    92,    43,    -1,    40,    43,    -1,    39,    43,    -1,
      11,    92,    12,    -1,    92,    17,    92,    -1,    92,    18,
      92,    -1,    92,    19,    92,    -1,    92,    25,    92,    -1,
      92,    24,    92,    -1,    92,    23,    92,    -1,    92,    22,
      92,    -1,    92,    21,    92,    -1,    92,    20,    92,    -1,
      92,    27,    92,    -1,    92,    26,    92,    -1,    92,    30,
      92,    -1,    92,    29,    92,    -1,    92,    28,    92,    -1,
      26,    92,    -1,    69,    -1,    85,    -1,   102,    -1,    36,
      94,    98,    96,    12,    79,    -1,    11,    95,    -1,    11,
      -1,    95,    44,   101,    -1,   101,    -1,    43,    97,    -1,
      43,    -1,    97,    44,   101,    -1,   101,    -1,    43,    99,
      -1,    43,    -1,    99,    44,   100,    -1,   100,    -1,    92,
      17,    92,    -1,    92,    18,    92,    -1,    92,    19,    92,
      -1,    92,    25,    92,    -1,    92,    24,    92,    -1,    92,
      23,    92,    -1,    92,    22,    92,    -1,    92,    21,    92,
      -1,    92,    20,    92,    -1,    59,    31,    92,    -1,    59,
      60,    31,    63,    -1,    59,    31,    92,    -1,    59,    60,
      31,    63,    -1,   102,    -1,    92,    -1,    59,   103,    12,
      43,    -1,    11,    -1,    11,   104,    44,    92,    -1,   104,
      44,    92,    -1,    92,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    68,    69,    70,    71,    75,    76,    77,
      78,    79,    80,    81,    82,    86,    86,    86,    90,    91,
      92,    93,    94,    95,    98,    99,   102,   105,   106,   110,
     111,   114,   115,   116,   119,   123,   124,   127,   128,   132,
     135,   136,   139,   142,   143,   144,   145,   146,   150,   153,
     159,   160,   163,   163,   164,   164,   170,   171,   174,   175,
     178,   182,   185,   186,   187,   191,   192,   193,   194,   197,
     198,   203,   204,   205,   206,   207,   208,   209,   214,   215,
     216,   217,   220,   221,   224,   225,   228,   233,   234,   237,
     241,   242,   246,   247,   248,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   276,   281,   282,   284,   285,   288,
     289,   292,   293,   297,   298,   301,   302,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   331,   332,
     333,   334,   340,   343,   344,   347,   348
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
  "declaration_list", "var_decl", "@1", "@2", "type", "identifier",
  "symbol_id", "array_indice", "var_list", "var_single", "init_array",
  "expr_list", "nonEmpty_expr_list", "const_decl", "const_list",
  "const_init", "literal_constant", "funct_decl", "proc_decl",
  "definition_list", "definition", "@3", "@4", "arg_list",
  "nonEmpty_arg_list", "arg", "compound_st", "compound_list",
  "var_const_decl_list", "stat_list", "statement", "simple_st", "var_ref",
  "arr_ref_indice", "arr_ref_index", "condition_st", "bool_expr",
  "while_st", "jump_st", "expr", "for_st", "for_init", "nonEmpty_for_init",
  "for_incre", "nonEmpty_for_incre", "for_control", "nonEmpty_for_control",
  "for_control_entry", "for_single_entry", "funct_invoc",
  "funct_invoc_list", "nonEmpty_funct_invoc_list", 0
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
      53,    53,    53,    53,    53,    55,    56,    54,    57,    57,
      57,    57,    57,    57,    58,    58,    59,    60,    60,    61,
      61,    62,    62,    62,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    69,    69,    69,    69,    69,    70,    71,
      72,    72,    74,    73,    75,    73,    76,    76,    77,    77,
      78,    79,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    86,    86,    87,    88,    88,    89,
      90,    90,    91,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   102,   103,   103,   104,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     0,     0,     5,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     4,     3,     3,
       1,     1,     3,     4,     2,     2,     1,     3,     1,     4,
       3,     1,     3,     1,     1,     1,     1,     1,     6,     6,
       2,     1,     0,     6,     0,     6,     2,     1,     3,     1,
       2,     2,     3,     3,     1,     2,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     3,     1,     2,     2,     1,     3,     5,     7,     1,
       5,     7,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     1,     1,     6,     2,     1,     3,     1,     2,
       1,     3,     1,     2,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     4,
       1,     1,     4,     1,     4,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    21,    19,    20,    22,    18,    23,     0,
       2,     0,    12,     0,    11,    13,    14,     5,    51,     0,
       0,    26,     0,     0,     1,     3,     4,     8,     7,     9,
      10,     0,     0,     6,    50,     0,     0,     0,     0,     0,
      41,     8,     7,     9,    10,    31,    24,    16,    30,     0,
       0,     0,    57,     0,     0,    39,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,    56,    59,     0,    43,
      44,    45,    46,    47,    42,    40,     0,     0,     0,    82,
     111,   112,    32,   113,     0,     0,    29,    17,     0,     0,
       0,    60,    24,     0,    49,    28,     0,   110,   143,     0,
      83,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    33,
       0,    48,    64,    53,     0,    55,    25,    58,    95,   146,
       0,     0,    84,     0,    96,    97,    98,   104,   103,   102,
     101,   100,    99,   106,   105,   109,   108,   107,    27,    35,
      38,    34,     0,    61,     0,    86,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    15,    68,
      71,    62,    63,    70,    72,     0,    73,    74,    76,    75,
      77,   144,    37,     0,     0,     0,   116,     0,   112,     0,
      82,     0,    94,    93,     0,    65,    66,    69,     0,     0,
      89,     0,     0,    82,   141,   115,   118,   113,   124,     0,
      79,    80,    81,    92,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,   123,   126,   120,     0,    78,    90,
       0,    87,    43,   138,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   122,
       0,     0,     0,   139,   136,     0,   127,    97,   129,   104,
     103,   102,   101,   100,    99,   125,     0,   114,    91,    88,
     137,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    31,    61,    13,    45,    79,
      59,    47,    48,   119,   120,   149,    14,    39,    40,    80,
      15,    16,    17,    18,    19,    20,    53,    66,    67,   170,
     124,   171,   172,   173,   174,    81,   100,   101,   176,   199,
     177,   178,   204,   179,   187,   205,   227,   248,   209,   224,
     225,   206,    83,   102,   130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -224
static const yytype_int16 yypact[] =
{
     263,   -33,   311,  -224,  -224,  -224,  -224,  -224,  -224,    13,
     263,   263,  -224,   -33,  -224,  -224,  -224,   263,  -224,   311,
      11,  -224,     7,   -33,  -224,   263,   263,  -224,  -224,  -224,
    -224,   -33,    18,   263,  -224,   -33,   -33,    30,    39,    23,
      17,  -224,  -224,  -224,  -224,  -224,    -6,    45,  -224,    30,
      30,    30,   311,    82,   111,  -224,   -33,    51,    61,    20,
     -33,    62,    92,    99,   113,   -33,  -224,    87,    83,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,   109,    61,    61,    43,
    -224,  -224,   476,  -224,    88,   120,  -224,  -224,    95,   126,
     126,  -224,   130,   311,  -224,  -224,   445,   145,    61,    61,
    -224,   132,   135,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,   151,    61,  -224,
     150,  -224,   152,  -224,   153,  -224,   159,  -224,  -224,   476,
     136,   462,  -224,   139,   215,   270,   476,    72,    72,    72,
      72,    72,    72,   121,   121,   145,   145,   145,  -224,   140,
     476,  -224,   190,  -224,    61,  -224,  -224,    61,   168,   126,
     176,   179,    61,   -33,   148,   149,    61,  -224,  -224,  -224,
    -224,  -224,    80,  -224,  -224,   162,  -224,  -224,  -224,  -224,
    -224,   230,   476,    61,   169,    61,    61,   160,   161,   258,
     132,   175,  -224,  -224,   285,  -224,  -224,  -224,    61,   207,
     476,   191,   209,    27,   476,   217,  -224,  -224,    61,   219,
    -224,  -224,  -224,  -224,   312,   126,    61,   126,   128,    61,
      32,    61,    31,   490,   220,  -224,    61,   251,  -224,  -224,
     310,   288,   109,   476,   120,  -224,    61,    36,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,   280,  -224,
     126,   282,   126,  -224,   476,   120,   504,   324,   476,   343,
     355,   374,   386,   405,   417,  -224,    61,  -224,  -224,  -224,
    -224,  -224
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -224,  -224,    54,    -2,   -10,  -224,  -224,     0,   261,    -1,
     -88,  -224,   267,  -223,  -224,  -224,    -8,   300,  -224,   303,
      28,    35,   340,  -224,  -224,  -224,    79,   266,  -224,   -69,
     238,  -224,  -224,   189,  -224,  -136,   262,  -224,  -224,  -179,
    -224,  -224,   -30,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
     117,  -216,  -129,  -224,  -224
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -146
static const yytype_int16 yytable[] =
{
      22,    27,    23,    28,   126,   235,   202,    57,    25,    21,
     249,   253,    32,    24,    36,    41,   175,    42,    37,    35,
     123,   125,    38,   180,    25,    58,   188,   191,    82,    49,
      46,    25,   270,    84,    50,    51,   175,   230,    98,    29,
     218,    52,    98,   180,   218,    84,    30,    96,    97,    84,
     271,    85,    65,    43,    98,    38,    99,   207,   219,    46,
      44,    56,   236,   234,    92,    26,    55,   255,   129,   131,
      54,    33,    77,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    78,   150,    60,
     184,   105,   207,    65,    68,  -146,    76,   207,   112,   113,
     114,   115,   116,    21,    88,    87,    69,    70,    71,    72,
      73,    89,   158,   159,   160,   220,   161,   162,   163,   164,
     165,   166,    21,    95,   181,    90,    94,   182,    62,    63,
      64,    93,   189,   117,   237,   118,   194,   207,   121,    77,
     105,   122,   167,    57,   169,    99,   229,   133,   231,   114,
     115,   116,   168,   200,    78,   200,    69,    70,    71,    72,
      73,   195,   190,   196,   105,   148,   151,  -146,   214,   153,
      21,   168,    84,   232,    70,    71,    72,    73,   223,   183,
     154,   267,   156,   269,   157,   203,   200,   185,   131,   233,
     186,   192,   193,   198,     2,     3,     4,     5,     6,     7,
       8,   201,   216,   208,   210,   122,   254,   222,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   223,   212,   215,
     203,   217,   158,   159,   160,   203,   161,   162,   163,   164,
     165,   166,    21,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   222,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   221,   226,   250,   247,   203,     1,     2,     3,     4,
       5,     6,     7,     8,  -145,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   211,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     3,     4,     5,     6,
       7,     8,   251,   252,   266,   268,    91,    86,   213,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   228,    75,    74,    34,   127,
     152,   197,   105,   132,   265,     0,     0,  -128,  -128,   112,
     113,   114,   115,   116,   105,     0,     0,     0,     0,     0,
       0,   112,   113,   114,   115,   116,  -135,  -135,     0,     0,
       0,     0,     0,   105,     0,     0,     0,     0,  -134,  -134,
     112,   113,   114,   115,   116,   105,     0,     0,     0,     0,
       0,     0,   112,   113,   114,   115,   116,  -133,  -133,     0,
       0,     0,     0,     0,   105,     0,     0,     0,     0,  -132,
    -132,   112,   113,   114,   115,   116,   105,     0,     0,     0,
       0,     0,     0,   112,   113,   114,   115,   116,  -131,  -131,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
    -130,  -130,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   155,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   112,   113,   114,   115,
     116,   -96,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116
};

static const yytype_int16 yycheck[] =
{
       1,    11,     2,    11,    92,   221,   185,    13,    10,    42,
     226,   234,    13,     0,     3,    25,   152,    25,    11,    19,
      89,    90,    23,   152,    26,    31,   162,   163,    58,    11,
      31,    33,   255,    13,    35,    36,   172,   216,    11,    11,
      13,    11,    11,   172,    13,    13,    11,    77,    78,    13,
     266,    31,    52,    25,    11,    56,    13,   186,    31,    60,
      25,    44,    31,    31,    65,    11,    43,    31,    98,    99,
      31,    17,    11,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    26,   118,    44,
     159,    19,   221,    93,    12,    15,    45,   226,    26,    27,
      28,    29,    30,    42,    12,    43,    45,    46,    47,    48,
      49,    12,    32,    33,    34,   203,    36,    37,    38,    39,
      40,    41,    42,    14,   154,    12,    43,   157,    49,    50,
      51,    44,   162,    45,   222,    15,   166,   266,    43,    11,
      19,    15,   152,    13,   152,    13,   215,    12,   217,    28,
      29,    30,   152,   183,    26,   185,    45,    46,    47,    48,
      49,   171,   163,   171,    19,    14,    16,    15,   198,    16,
      42,   171,    13,    45,    46,    47,    48,    49,   208,    11,
      44,   250,    43,   252,    44,   186,   216,    11,   218,   219,
      11,    43,    43,    31,     4,     5,     6,     7,     8,     9,
      10,    32,    11,    43,    43,    15,   236,   208,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,    43,    12,
     221,    12,    32,    33,    34,   226,    36,    37,    38,    39,
      40,    41,    42,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   247,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    44,    43,    12,    44,   266,     3,     4,     5,     6,
       7,     8,     9,    10,    44,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    43,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     5,     6,     7,     8,
       9,    10,    12,    35,    44,    43,    65,    60,    43,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    43,    56,    54,    18,    93,
     122,   172,    19,   101,   247,    -1,    -1,    43,    44,    26,
      27,    28,    29,    30,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    43,    44,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    43,    44,
      26,    27,    28,    29,    30,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    43,    44,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    43,
      44,    26,    27,    28,    29,    30,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      43,    44,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    14,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    51,
      52,    53,    54,    57,    66,    70,    71,    72,    73,    74,
      75,    42,    59,    57,     0,    53,    52,    54,    66,    70,
      71,    55,    59,    52,    72,    57,     3,    11,    59,    67,
      68,    54,    66,    70,    71,    58,    59,    61,    62,    11,
      59,    59,    11,    76,    31,    43,    44,    13,    31,    60,
      44,    56,    76,    76,    76,    57,    77,    78,    12,    45,
      46,    47,    48,    49,    69,    67,    45,    11,    26,    59,
      69,    85,    92,   102,    13,    31,    62,    43,    12,    12,
      12,    58,    59,    44,    43,    14,    92,    92,    11,    13,
      86,    87,   103,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    45,    15,    63,
      64,    43,    15,    79,    80,    79,    60,    77,    12,    92,
     104,    92,    86,    12,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    14,    65,
      92,    16,    80,    16,    44,    14,    43,    44,    32,    33,
      34,    36,    37,    38,    39,    40,    41,    54,    57,    66,
      79,    81,    82,    83,    84,    85,    88,    90,    91,    93,
     102,    92,    92,    11,    79,    11,    11,    94,    85,    92,
      59,    85,    43,    43,    92,    54,    66,    83,    31,    89,
      92,    32,    89,    59,    92,    95,   101,   102,    43,    98,
      43,    43,    43,    43,    92,    12,    11,    12,    13,    31,
      60,    44,    59,    92,    99,   100,    43,    96,    43,    79,
      89,    79,    45,    92,    31,   101,    31,    60,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    44,    97,   101,
      12,    12,    35,    63,    92,    31,    92,    92,    92,    92,
      92,    92,    92,    92,    92,   100,    44,    79,    43,    79,
      63,   101
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
        case 3:
#line 68 "parser.y"
    {printf("DECLARE\n");}
    break;

  case 7:
#line 75 "parser.y"
    {printf("C: const decl\n");}
    break;

  case 8:
#line 76 "parser.y"
    {printf("D: var decl\n");}
    break;

  case 9:
#line 77 "parser.y"
    {printf("D: func decl\n");}
    break;

  case 10:
#line 78 "parser.y"
    {printf("D: proc decl\n");}
    break;

  case 11:
#line 79 "parser.y"
    {printf("C: const decl\n");}
    break;

  case 12:
#line 80 "parser.y"
    {printf("D: funct decl\n");}
    break;

  case 13:
#line 81 "parser.y"
    {printf("D: func decl\n");}
    break;

  case 14:
#line 82 "parser.y"
    {printf("D: proc decl\n");}
    break;

  case 15:
#line 86 "parser.y"
    {printf("wait assign\n");}
    break;

  case 16:
#line 86 "parser.y"
    {printf("var_dec: want ;\n");}
    break;

  case 17:
#line 86 "parser.y"
    {printf("var declare\n");}
    break;

  case 26:
#line 102 "parser.y"
    {printf("ID\n");}
    break;

  case 48:
#line 150 "parser.y"
    {printf("Reduce: funct decl\n");}
    break;

  case 49:
#line 153 "parser.y"
    {printf("Reduce: proc decl\n");}
    break;

  case 52:
#line 163 "parser.y"
    {printf("Reduce: func define \n");}
    break;

  case 54:
#line 164 "parser.y"
    {printf("Reduce: proc define \n");}
    break;

  case 110:
#line 268 "parser.y"
    {fprintf(stderr, "- as negation operator\n");}
    break;

  case 142:
#line 340 "parser.y"
    {printf("call func\n");}
    break;


/* Line 1267 of yacc.c.  */
#line 1819 "y.tab.c"
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


#line 352 "parser.y"


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


