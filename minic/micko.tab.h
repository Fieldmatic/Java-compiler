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
     _TYPE = 258,
     _IF = 259,
     _ELSE = 260,
     _RETURN = 261,
     _ID = 262,
     _INT_NUMBER = 263,
     _UINT_NUMBER = 264,
     _LPAREN = 265,
     _RPAREN = 266,
     _LBRACKET = 267,
     _RBRACKET = 268,
     _ASSIGN = 269,
     _SEMICOLON = 270,
     _AROP = 271,
     _RELOP = 272,
     _CLASS = 273,
     _INTERFACE = 274,
     _COMMA = 275,
     _IMPLEMENTS = 276,
     _NEW = 277,
     ONLY_IF = 278
   };
#endif
/* Tokens.  */
#define _TYPE 258
#define _IF 259
#define _ELSE 260
#define _RETURN 261
#define _ID 262
#define _INT_NUMBER 263
#define _UINT_NUMBER 264
#define _LPAREN 265
#define _RPAREN 266
#define _LBRACKET 267
#define _RBRACKET 268
#define _ASSIGN 269
#define _SEMICOLON 270
#define _AROP 271
#define _RELOP 272
#define _CLASS 273
#define _INTERFACE 274
#define _COMMA 275
#define _IMPLEMENTS 276
#define _NEW 277
#define ONLY_IF 278




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 36 "micko.y"
{
  int i;
  char *s;
}
/* Line 1529 of yacc.c.  */
#line 100 "micko.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

