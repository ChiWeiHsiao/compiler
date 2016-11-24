/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

