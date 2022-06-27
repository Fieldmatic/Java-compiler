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
     _DOT = 278,
     ONLY_IF = 279
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
#define _DOT 278
#define ONLY_IF 279




/* Copy the first part of user declarations.  */
#line 1 "micko.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include "defs.h"
  #include "symtab.h"
  #include "codegen.h"
  #include "string.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  int out_lin = 0;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;
  int lab_num = -1;
  FILE *output;

  int class_idx = -1;
  int defining_class = 0;
  int interface_idx = -1;
  int defining_interface = 0;
  int attr_idx = -1;
  int constructor_idx = -1;
  int defining_constructor = 0;
  int argument_counter = 0;
  int obj_idx = -1;


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
typedef union YYSTYPE
#line 36 "micko.y"
{
  int i;
  char *s;
}
/* Line 193 of yacc.c.  */
#line 184 "micko.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 197 "micko.tab.c"

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    17,
      24,    25,    28,    29,    36,    37,    46,    47,    50,    52,
      54,    56,    57,    58,    59,    68,    69,    71,    75,    78,
      79,    84,    86,    87,    95,    96,   104,   105,   107,   111,
     114,   115,   121,   122,   125,   129,   130,   133,   135,   137,
     139,   141,   143,   147,   148,   149,   150,   163,   168,   169,
     170,   171,   181,   183,   187,   189,   191,   193,   197,   201,
     203,   205,   206,   212,   213,   221,   222,   224,   228,   230,
     232,   234,   235,   237,   239,   243,   244,   245,   253,   257
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      26,     0,    -1,    27,    -1,    28,    -1,    27,    28,    -1,
      47,    -1,    32,    -1,    29,    -1,    -1,    19,     7,    30,
      12,    31,    13,    -1,    -1,    31,    45,    -1,    -1,    18,
       7,    33,    12,    35,    13,    -1,    -1,    18,     7,    21,
       7,    34,    12,    35,    13,    -1,    -1,    35,    36,    -1,
      47,    -1,    43,    -1,    37,    -1,    -1,    -1,    -1,     7,
      10,    38,    39,    41,    40,    11,    51,    -1,    -1,    42,
      -1,    41,    20,    42,    -1,     3,     7,    -1,    -1,     3,
       7,    44,    15,    -1,    58,    -1,    -1,     3,     7,    46,
      10,    49,    11,    15,    -1,    -1,     3,     7,    48,    10,
      49,    11,    51,    -1,    -1,    50,    -1,    49,    20,    50,
      -1,     3,     7,    -1,    -1,    12,    53,    52,    55,    13,
      -1,    -1,    53,    54,    -1,     3,     7,    15,    -1,    -1,
      55,    56,    -1,    57,    -1,    62,    -1,    75,    -1,    80,
      -1,    58,    -1,    12,    55,    13,    -1,    -1,    -1,    -1,
       7,     7,    59,    14,    22,     7,    60,    10,    72,    61,
      11,    15,    -1,     7,    14,    66,    15,    -1,    -1,    -1,
      -1,     7,    23,    63,     7,    64,    14,    66,    65,    15,
      -1,    67,    -1,    66,    16,    67,    -1,    68,    -1,     7,
      -1,    69,    -1,    10,    66,    11,    -1,     7,    23,     7,
      -1,     8,    -1,     9,    -1,    -1,     7,    70,    10,    74,
      11,    -1,    -1,     7,    23,     7,    71,    10,    72,    11,
      -1,    -1,    73,    -1,    72,    20,    73,    -1,     7,    -1,
       8,    -1,     9,    -1,    -1,    66,    -1,    76,    -1,    76,
       5,    56,    -1,    -1,    -1,     4,    10,    77,    79,    78,
      11,    56,    -1,    66,    17,    66,    -1,     6,    66,    15,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    80,    81,    85,    86,    87,    92,    91,
     104,   106,   112,   111,   123,   122,   162,   164,   168,   169,
     170,   174,   175,   182,   174,   191,   193,   194,   198,   212,
     212,   222,   228,   227,   247,   246,   278,   279,   281,   285,
     302,   301,   310,   312,   316,   339,   341,   345,   346,   347,
     348,   349,   353,   358,   383,   390,   357,   400,   428,   431,
     435,   427,   446,   448,   467,   469,   475,   481,   483,   494,
     497,   503,   502,   519,   518,   535,   537,   538,   542,   550,
     554,   562,   564,   576,   579,   585,   590,   584,   603,   613
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_TYPE", "_IF", "_ELSE", "_RETURN",
  "_ID", "_INT_NUMBER", "_UINT_NUMBER", "_LPAREN", "_RPAREN", "_LBRACKET",
  "_RBRACKET", "_ASSIGN", "_SEMICOLON", "_AROP", "_RELOP", "_CLASS",
  "_INTERFACE", "_COMMA", "_IMPLEMENTS", "_NEW", "_DOT", "ONLY_IF",
  "$accept", "program", "program_architecture", "structure_list",
  "interface", "@1", "interface_items", "class", "@2", "@3", "class_items",
  "class_item", "constructor", "@4", "@5", "@6",
  "constructor_parameter_list", "constructor_parameter", "class_attribute",
  "@7", "interface_function", "@8", "function", "@9", "parameter_list",
  "parameter", "body", "@10", "variable_list", "variable",
  "statement_list", "statement", "compound_statement",
  "object_assignment_statement", "@11", "@12", "@13",
  "assignment_statement", "@14", "@15", "@16", "num_exp", "exp", "literal",
  "function_call", "@17", "@18", "new_object_arguments",
  "new_object_argument", "argument", "if_statement", "if_part", "@19",
  "@20", "rel_exp", "return_statement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    25,    26,    27,    27,    28,    28,    28,    30,    29,
      31,    31,    33,    32,    34,    32,    35,    35,    36,    36,
      36,    38,    39,    40,    37,    41,    41,    41,    42,    44,
      43,    43,    46,    45,    48,    47,    49,    49,    49,    50,
      52,    51,    53,    53,    54,    55,    55,    56,    56,    56,
      56,    56,    57,    59,    60,    61,    58,    62,    63,    64,
      65,    62,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    70,    69,    71,    69,    72,    72,    72,    73,    73,
      73,    74,    74,    75,    75,    77,    78,    76,    79,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     0,     6,
       0,     2,     0,     6,     0,     8,     0,     2,     1,     1,
       1,     0,     0,     0,     8,     0,     1,     3,     2,     0,
       4,     1,     0,     7,     0,     7,     0,     1,     3,     2,
       0,     5,     0,     2,     3,     0,     2,     1,     1,     1,
       1,     1,     3,     0,     0,     0,    12,     4,     0,     0,
       0,     9,     1,     3,     1,     1,     1,     3,     3,     1,
       1,     0,     5,     0,     7,     0,     1,     3,     1,     1,
       1,     0,     1,     1,     3,     0,     0,     7,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     7,     6,     5,
      34,    12,     8,     1,     4,     0,     0,     0,     0,    36,
      14,    16,    10,     0,     0,    37,     0,     0,     0,    39,
       0,     0,    16,     0,     0,    13,    17,    20,    19,    18,
      31,     0,     9,    11,    42,    35,    38,     0,    29,    53,
      21,    32,    40,    15,     0,     0,    22,     0,     0,    45,
      43,    30,     0,    25,    36,     0,     0,     0,     0,    23,
      26,     0,    44,     0,     0,     0,    45,    41,    46,    47,
      51,    48,    49,    83,    50,    54,    28,     0,     0,     0,
      85,    65,    69,    70,     0,     0,    62,    64,    66,     0,
      58,     0,     0,     0,    27,     0,    33,     0,     0,     0,
       0,    89,     0,     0,     0,    52,    84,    75,    24,     0,
      86,    68,    81,    67,    63,    57,    59,    78,    79,    80,
      55,    76,     0,     0,     0,    82,     0,     0,     0,     0,
      88,     0,    75,    72,     0,    77,     0,    87,     0,    60,
      56,    74,     0,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    18,    28,     8,    17,    26,
      27,    36,    37,    56,    63,    88,    69,    70,    38,    54,
      43,    57,     9,    15,    24,    25,    45,    59,    52,    60,
      66,    78,    79,    80,    55,   103,   139,    81,   114,   137,
     152,    95,    96,    97,    98,   109,   134,   130,   131,   136,
      82,    83,   107,   133,   120,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int8 yypact[] =
{
       1,     3,     5,    46,    68,     1,  -102,  -102,  -102,  -102,
    -102,    51,  -102,  -102,  -102,    59,    63,    61,    62,    72,
    -102,  -102,  -102,    64,    -5,  -102,    65,     4,    23,  -102,
      66,    72,  -102,    69,    20,  -102,  -102,  -102,  -102,  -102,
    -102,    73,  -102,  -102,  -102,  -102,  -102,    11,    71,  -102,
    -102,  -102,    76,  -102,    67,    70,  -102,    75,    79,  -102,
    -102,  -102,    74,    80,    72,    77,    35,    81,    82,    78,
    -102,    24,  -102,    83,    53,     2,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,    85,  -102,  -102,  -102,    80,    84,    86,
    -102,    -2,  -102,  -102,    53,    18,  -102,  -102,  -102,    53,
    -102,    39,    25,    87,  -102,    66,  -102,    53,    92,    90,
      43,  -102,    53,    49,    95,  -102,  -102,    48,  -102,    50,
    -102,    93,    53,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
      88,  -102,    53,    94,    96,    91,    98,    97,    48,    99,
      91,    25,    48,  -102,    53,  -102,    89,  -102,    38,    91,
    -102,  -102,   100,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -102,  -102,  -102,   107,  -102,  -102,  -102,  -102,  -102,  -102,
      55,  -102,  -102,  -102,  -102,  -102,  -102,     7,  -102,  -102,
    -102,  -102,   -25,  -102,    27,   101,     8,  -102,  -102,  -102,
      40,  -101,  -102,   -24,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,   -94,     6,  -102,  -102,  -102,  -102,   -28,   -21,  -102,
    -102,  -102,  -102,  -102,  -102,  -102
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -74
static const yytype_int16 yytable[] =
{
     110,   116,    39,    40,     1,   113,    30,    33,   -71,    49,
      10,    34,    11,   119,    33,    31,    99,    35,    34,     2,
       3,   108,    39,    40,    53,   100,    41,    49,   135,    73,
      50,    74,    75,   111,   112,    89,    42,    76,   140,    73,
     147,    74,    75,    73,    31,    74,    75,    76,    77,   151,
     149,    76,   115,    12,   123,   127,   128,   129,   138,   112,
      91,    92,    93,    94,   125,   112,   112,   132,    13,    19,
      20,    29,    16,    21,    22,    23,    48,    32,    44,    58,
      51,   -34,    61,    68,    62,    64,    65,    47,    85,    86,
     102,    71,    72,    90,   104,   105,    67,   117,    87,   121,
     122,   106,   126,   -73,   150,   141,   142,   112,   138,   143,
     146,   144,    14,   118,   148,   153,   101,   145,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      94,   102,    27,    27,     3,    99,    11,     3,    10,     7,
       7,     7,     7,   107,     3,    20,    14,    13,     7,    18,
      19,    23,    47,    47,    13,    23,     3,     7,   122,     4,
      10,     6,     7,    15,    16,    11,    13,    12,   132,     4,
     141,     6,     7,     4,    20,     6,     7,    12,    13,    11,
     144,    12,    13,     7,    11,     7,     8,     9,    20,    16,
       7,     8,     9,    10,    15,    16,    16,    17,     0,    10,
       7,     7,    21,    12,    12,     3,     7,    12,    12,     3,
       7,    10,    15,     3,    14,    10,     7,    32,     7,     7,
       5,    64,    15,    10,    87,    11,    22,    10,    20,     7,
      10,    15,     7,    10,    15,    11,    10,    16,    20,    11,
      11,    14,     5,   105,   142,    15,    76,   138,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    18,    19,    26,    27,    28,    29,    32,    47,
       7,     7,     7,     0,    28,    48,    21,    33,    30,    10,
       7,    12,    12,     3,    49,    50,    34,    35,    31,     7,
      11,    20,    12,     3,     7,    13,    36,    37,    43,    47,
      58,     3,    13,    45,    12,    51,    50,    35,     7,     7,
      10,     7,    53,    13,    44,    59,    38,    46,     3,    52,
      54,    15,    14,    39,    10,     7,    55,    22,     3,    41,
      42,    49,    15,     4,     6,     7,    12,    13,    56,    57,
      58,    62,    75,    76,    80,     7,     7,    20,    40,    11,
      10,     7,     8,     9,    10,    66,    67,    68,    69,    14,
      23,    55,     5,    60,    42,    11,    15,    77,    23,    70,
      66,    15,    16,    66,    63,    13,    56,    10,    51,    66,
      79,     7,    10,    11,    67,    15,     7,     7,     8,     9,
      72,    73,    17,    78,    71,    66,    74,    64,    20,    61,
      66,    11,    10,    11,    14,    73,    11,    56,    72,    66,
      15,    11,    65,    15
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
        case 2:
#line 73 "micko.y"
    {  
      if(lookup_symbol("main", FUN) == NO_INDEX)
        err("undefined reference to 'main'");
    ;}
    break;

  case 8:
#line 92 "micko.y"
    {
    defining_interface = 1;
    if (lookup_symbol((yyvsp[(2) - (2)].s), INTR) == NO_INDEX) {
      interface_idx = insert_symbol((yyvsp[(2) - (2)].s), INTR, NO_TYPE, NO_ATR, NO_ATR, NO_ATR);
    }
    else err ("redefinition of interface '%s'", (yyvsp[(2) - (2)].s));

  ;}
    break;

  case 9:
#line 101 "micko.y"
    {defining_interface = 0;;}
    break;

  case 12:
#line 112 "micko.y"
    {
    defining_class = 1;
    if (lookup_symbol((yyvsp[(2) - (2)].s), CLASS) == NO_INDEX) {
      class_idx = insert_symbol((yyvsp[(2) - (2)].s), CLASS, NO_TYPE, NO_ATR, NO_ATR, NO_ATR);
    }
    else err ("redefinition of class '%s'", (yyvsp[(2) - (2)].s));

  ;}
    break;

  case 13:
#line 120 "micko.y"
    { defining_class = 0;;}
    break;

  case 14:
#line 123 "micko.y"
    {
    defining_class = 1;
    if (lookup_symbol((yyvsp[(2) - (4)].s), CLASS) == NO_INDEX) {
      class_idx = insert_symbol((yyvsp[(2) - (4)].s), CLASS, NO_TYPE, NO_ATR, NO_ATR, NO_ATR);
    }
    else err ("redefinition of class '%s'", (yyvsp[(2) - (4)].s));
    if (lookup_symbol((yyvsp[(4) - (4)].s), INTR) == NO_INDEX) {
      err ("definition for interface '%s' doesn't exist", (yyvsp[(4) - (4)].s));
    }

  ;}
    break;

  case 15:
#line 135 "micko.y"
    { 
      int interfaceId = lookup_symbol((yyvsp[(4) - (8)].s), INTR);
      int *interface_function_indexes;
      interface_function_indexes = lookup_interface_functions(interfaceId);
      for (int i = 0; i < get_atr2(interfaceId); i++) {
        int response = function_exists_in_class(interface_function_indexes[i], class_idx);
        switch(response)
        {
          case -1:
                  err("parameter count of function '%s' in class '%s' isn't valid!",get_name(interface_function_indexes[i]), get_name(class_idx));
                  break;
          case -2:
                  err("parameters of function '%s' aren't equal to parameters from implemented interface method in class '%s'!",get_name(interface_function_indexes[i]), get_name(class_idx));
                  break;
          case -3:
                  err("return type of function '%s' isnt equal to return type from implemented interface method in class '%s'!",get_name(interface_function_indexes[i]), get_name(class_idx));
                  break;
          case -4:
                  err("implementation of method '%s' not found in class '%s'!",get_name(interface_function_indexes[i]), get_name(class_idx));
                  break;
          default:
                  break;
        }
      }
      defining_class = 0;;}
    break;

  case 21:
#line 174 "micko.y"
    {defining_constructor = 1;;}
    break;

  case 22:
#line 175 "micko.y"
    {
    if (!defining_class) err("You cant define constructor outside of class!");
    char* className = get_name(class_idx);
    char* constructorName = (yyvsp[(1) - (3)].s);
    if (strcmp(className, constructorName) != 0) err("constructor name '%s' not valid for class '%s'",(yyvsp[(1) - (3)].s), get_name(class_idx));
    constructor_idx = insert_symbol((yyvsp[(1) - (3)].s), FUN, CONSTR, NO_ATR, NO_ATR, class_idx);
  ;}
    break;

  case 23:
#line 182 "micko.y"
    {
    if (constructor_exists_in_class(constructor_idx, class_idx) == 1) {
      err("constructor '%s' with same parameters already exists in class '%s' !",(yyvsp[(1) - (5)].s), get_name(class_idx));
    }
    
  ;}
    break;

  case 24:
#line 187 "micko.y"
    {
                     defining_constructor = 0;;}
    break;

  case 28:
#line 199 "micko.y"
    {
        int parameter_idx = lookup_symbol((yyvsp[(2) - (2)].s), PAR);
        if (parameter_idx == NO_INDEX) insert_symbol((yyvsp[(2) - (2)].s), PAR, (yyvsp[(1) - (2)].i), 1, NO_ATR, constructor_idx);
        else {
          if (get_parent_index(parameter_idx) != constructor_idx) insert_symbol((yyvsp[(2) - (2)].s), PAR, (yyvsp[(1) - (2)].i), 1, NO_ATR, constructor_idx);
          else err("Redefinition of parameter '%s' in constructor '%s'", (yyvsp[(2) - (2)].s), get_name(constructor_idx));
        }
        set_atr1(constructor_idx, get_atr1(constructor_idx) + 1);
        set_atr2(constructor_idx, (yyvsp[(1) - (2)].i));
    ;}
    break;

  case 29:
#line 212 "micko.y"
    {
    attr_idx = lookup_symbol((yyvsp[(2) - (2)].s), ATTR);
    if (attr_idx == NO_INDEX){
      attr_idx = insert_symbol((yyvsp[(2) - (2)].s),ATTR,(yyvsp[(1) - (2)].i),NO_ATR,NO_ATR,class_idx);
    }
    else {
       if (get_parent_index(attr_idx) == class_idx) err ("duplicate attribute '%s' in class '%s'", (yyvsp[(2) - (2)].s),get_name(class_idx));
       else attr_idx = insert_symbol((yyvsp[(2) - (2)].s),ATTR,(yyvsp[(1) - (2)].i),NO_ATR,NO_ATR,class_idx);
    }
  ;}
    break;

  case 32:
#line 228 "micko.y"
    {     
        fun_idx = lookup_symbol((yyvsp[(2) - (2)].s), FUN);
        if(fun_idx == NO_INDEX){
          fun_idx = insert_symbol((yyvsp[(2) - (2)].s), FUN, (yyvsp[(1) - (2)].i), NO_ATR, NO_ATR, interface_idx);
          set_atr2(interface_idx, get_atr2(interface_idx) + 1);
        }
        else {
          if (get_parent_index(fun_idx) == interface_idx) err ("redefinition of function '%s' in interface '%s'", (yyvsp[(2) - (2)].s),get_name(interface_idx));
          else {
            fun_idx = insert_symbol((yyvsp[(2) - (2)].s), FUN, (yyvsp[(1) - (2)].i), NO_ATR, NO_ATR, interface_idx);
            set_atr2(interface_idx, get_atr2(interface_idx) + 1);
          }
        }
  ;}
    break;

  case 34:
#line 247 "micko.y"
    {
        if (defining_class == 1) 
        {
          fun_idx = lookup_symbol((yyvsp[(2) - (2)].s), FUN);
          if(fun_idx == NO_INDEX)
            fun_idx = insert_symbol((yyvsp[(2) - (2)].s), FUN, (yyvsp[(1) - (2)].i), NO_ATR, NO_ATR, class_idx);
          else {
            if (get_parent_index(fun_idx) == class_idx) {err ("redefinition of function '%s' in class '%s'", (yyvsp[(2) - (2)].s), get_name(class_idx));}
            else {fun_idx = insert_symbol((yyvsp[(2) - (2)].s), FUN, (yyvsp[(1) - (2)].i), NO_ATR, NO_ATR, class_idx);}
          }
        }
        else {
          fun_idx = lookup_symbol((yyvsp[(2) - (2)].s), FUN);
          if(fun_idx == NO_INDEX)
            fun_idx = insert_symbol((yyvsp[(2) - (2)].s), FUN, (yyvsp[(1) - (2)].i), NO_ATR, NO_ATR, NO_ATR);
          else 
            err("redefinition of function '%s'", (yyvsp[(2) - (2)].s));
        }

        code("\n%s:", (yyvsp[(2) - (2)].s));
        code("\n\t\tPUSH\t%%14");
        code("\n\t\tMOV \t%%15,%%14");
      ;}
    break;

  case 35:
#line 271 "micko.y"
    {
        var_num = 0;
      ;}
    break;

  case 36:
#line 278 "micko.y"
    { set_atr1(fun_idx, 0); ;}
    break;

  case 39:
#line 286 "micko.y"
    {
        int parameter_idx = lookup_symbol((yyvsp[(2) - (2)].s), PAR);
        if (parameter_idx == NO_INDEX) {
          insert_symbol((yyvsp[(2) - (2)].s), PAR, (yyvsp[(1) - (2)].i), 1, NO_ATR, fun_idx);
        }
        else {
          if (get_parent_index(parameter_idx) != fun_idx) insert_symbol((yyvsp[(2) - (2)].s), PAR, (yyvsp[(1) - (2)].i), 1, NO_ATR, fun_idx);
          else err("Redefinition of parameter '%s' in function '%s'", (yyvsp[(2) - (2)].s), get_name(fun_idx));
        }
        set_atr1(fun_idx, get_atr1(fun_idx) + 1);
        set_atr2(fun_idx, (yyvsp[(1) - (2)].i));
      ;}
    break;

  case 40:
#line 302 "micko.y"
    {
        if(var_num)
          code("\n\t\tSUBS\t%%15,$%d,%%15", 4*var_num);
        code("\n@%s_body:", get_name(fun_idx));
      ;}
    break;

  case 44:
#line 317 "micko.y"
    {
        if (defining_constructor == 1) {
          int var_idx = lookup_symbol((yyvsp[(2) - (3)].s), VAR|PAR|OBJ);
          if(var_idx == NO_INDEX)
            insert_symbol((yyvsp[(2) - (3)].s), VAR, (yyvsp[(1) - (3)].i), ++var_num, NO_ATR, constructor_idx);
          else {
            if (get_parent_index(var_idx) != constructor_idx) insert_symbol((yyvsp[(2) - (3)].s), VAR, (yyvsp[(1) - (3)].i), ++var_num, NO_ATR, constructor_idx);
            else err("redefinition of '%s' in constructor '%s'", (yyvsp[(2) - (3)].s), get_name(constructor_idx));
          }
        }
        else{
          int var_idx = lookup_symbol((yyvsp[(2) - (3)].s), VAR|PAR|OBJ);
          if(var_idx == NO_INDEX)
            insert_symbol((yyvsp[(2) - (3)].s), VAR, (yyvsp[(1) - (3)].i), ++var_num, NO_ATR, fun_idx);
          else {
            if (get_parent_index(var_idx) != fun_idx) insert_symbol((yyvsp[(2) - (3)].s), VAR, (yyvsp[(1) - (3)].i), ++var_num, NO_ATR, fun_idx);
            else err("redefinition of '%s' in function '%s'", (yyvsp[(2) - (3)].s), get_name(fun_idx));
          }
        }
      ;}
    break;

  case 53:
#line 358 "micko.y"
    {
    argument_counter = 0;
    int desired_class_idx = lookup_symbol((yyvsp[(1) - (2)].s), CLASS);
    if (desired_class_idx == NO_INDEX) err ("Class with name '%s' isnt defined!", (yyvsp[(1) - (2)].s));
    else{
      int obj_idx = lookup_symbol((yyvsp[(2) - (2)].s), VAR|PAR|OBJ);
      if (defining_class == 1) {
        if(obj_idx == NO_INDEX)
          insert_symbol((yyvsp[(2) - (2)].s), OBJ, NO_TYPE, desired_class_idx, NO_ATR, class_idx);
        else {
          if (get_parent_index(obj_idx) != class_idx) insert_symbol((yyvsp[(2) - (2)].s), OBJ, NO_TYPE, desired_class_idx, NO_ATR, class_idx);
          else err("redefinition of '%s' in class '%s'", (yyvsp[(2) - (2)].s), get_name(class_idx));
        }
     }
      else{
        if(obj_idx == NO_INDEX)
            insert_symbol((yyvsp[(2) - (2)].s), OBJ, NO_TYPE, desired_class_idx, NO_ATR, fun_idx);
        else {
            if (get_parent_index(obj_idx) != fun_idx) insert_symbol((yyvsp[(2) - (2)].s), OBJ, NO_TYPE, desired_class_idx, NO_ATR, fun_idx);
            else err("redefinition of '%s' in function '%s'", (yyvsp[(2) - (2)].s), get_name(fun_idx));
        }
      }
    }
  ;}
    break;

  case 54:
#line 383 "micko.y"
    {
    int new_class_idx = lookup_symbol((yyvsp[(6) - (6)].s),CLASS);
    if (new_class_idx == NO_INDEX) err("Definition for class '%s' not found! ", (yyvsp[(6) - (6)].s));
    else if (get_name(new_class_idx) != get_name(lookup_symbol((yyvsp[(1) - (6)].s),CLASS))) err("You cant define object of type '%s' with class of type '%s'",get_name(lookup_symbol((yyvsp[(1) - (6)].s),CLASS)), get_name(new_class_idx));

   ;}
    break;

  case 55:
#line 390 "micko.y"
    {
    int new_class_idx = lookup_symbol((yyvsp[(6) - (9)].s),CLASS);
    if (find_valid_constructor(argument_counter,new_class_idx) == -1) err("No valid constructors found with same parameters!");
    else clear_symbols(get_last_element()-argument_counter+1);
   ;}
    break;

  case 56:
#line 395 "micko.y"
    {argument_counter = 0;;}
    break;

  case 57:
#line 401 "micko.y"
    {
        if (defining_constructor == 1) {
          int idx = lookup_symbol((yyvsp[(1) - (4)].s), VAR|PAR|OBJ|ATTR);
          if (get_kind(idx) == ATTR && get_parent_index(idx) != class_idx) err("You cant assign value to a non member attribute '%s'! from class '%s'", get_name(idx), get_name(get_parent_index(idx)));
          if (idx == NO_INDEX)
            err("invalid lvalue '%s' in assignment", (yyvsp[(1) - (4)].s));
          else
            if(get_type(idx) != get_type((yyvsp[(3) - (4)].i)))
              err("incompatible types in assignment");
          gen_mov((yyvsp[(3) - (4)].i), idx);
        }
        else {
          int idx = lookup_symbol((yyvsp[(1) - (4)].s), VAR|PAR|OBJ);
          if(idx == NO_INDEX)
            err("invalid lvalue '%s' in assignment", (yyvsp[(1) - (4)].s));
          else
            if (get_kind(idx) == OBJ) {
              if (get_atr1(idx) != get_atr1((yyvsp[(3) - (4)].i))) err("invalid assignment, '%s' and '%s' are not of same object type", get_name((yyvsp[(3) - (4)].i)), get_name(idx));
            }
            else{
              if(get_type(idx) != get_type((yyvsp[(3) - (4)].i)))
                err("incompatible types in assignment");
            }
          gen_mov((yyvsp[(3) - (4)].i), idx);
        }
      ;}
    break;

  case 58:
#line 428 "micko.y"
    {
    obj_idx = lookup_symbol_parent((yyvsp[(1) - (2)].s), OBJ,fun_idx);
    if (obj_idx == NO_INDEX) err ("Object with name '%s' doesnt exist!", (yyvsp[(1) - (2)].s));
  ;}
    break;

  case 59:
#line 431 "micko.y"
    {
    attr_idx = lookup_symbol_parent((yyvsp[(4) - (4)].s), ATTR|OBJ, get_atr1(obj_idx));
    if (attr_idx == NO_INDEX) err ("Object of class '%s' doesn't have an attribute member '%s' ",get_name(get_atr1(obj_idx)), (yyvsp[(4) - (4)].s));
  ;}
    break;

  case 60:
#line 435 "micko.y"
    {
    if (get_kind(attr_idx) == OBJ) {
      if (get_atr1((yyvsp[(7) - (7)].i)) != get_atr1(attr_idx)) err("invalid assignment, '%s' and '%s' are not of same object type", get_name((yyvsp[(7) - (7)].i)), get_name(attr_idx));
    }
    else{
      if (get_type((yyvsp[(7) - (7)].i)) != get_type(attr_idx)) err("invalid operands, '%s' and '%s' are not of same type", get_name((yyvsp[(7) - (7)].i)), get_name(attr_idx));
    }
  ;}
    break;

  case 63:
#line 449 "micko.y"
    {
        if(get_type((yyvsp[(1) - (3)].i)) != get_type((yyvsp[(3) - (3)].i)))
          err("invalid operands: arithmetic operation");
        int t1 = get_type((yyvsp[(1) - (3)].i));    
        code("\n\t\t%s\t", ar_instructions[(yyvsp[(2) - (3)].i) + (t1 - 1) * AROP_NUMBER]);
        gen_sym_name((yyvsp[(1) - (3)].i));
        code(",");
        gen_sym_name((yyvsp[(3) - (3)].i));
        code(",");
        free_if_reg((yyvsp[(3) - (3)].i));
        free_if_reg((yyvsp[(1) - (3)].i));
        (yyval.i) = take_reg();
        gen_sym_name((yyval.i));
        set_type((yyval.i), t1);
      ;}
    break;

  case 65:
#line 470 "micko.y"
    {
        (yyval.i) = lookup_symbol((yyvsp[(1) - (1)].s), VAR|PAR|OBJ);
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[(1) - (1)].s));
      ;}
    break;

  case 66:
#line 476 "micko.y"
    {
        (yyval.i) = take_reg();
        gen_mov(FUN_REG, (yyval.i));
      ;}
    break;

  case 67:
#line 482 "micko.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); ;}
    break;

  case 68:
#line 484 "micko.y"
    {
    int object_idx = lookup_symbol_parent((yyvsp[(1) - (3)].s), OBJ,fun_idx);
    if (object_idx == NO_INDEX) err ("Object with name '%s' doesnt exist!", (yyvsp[(1) - (3)].s));
    (yyval.i) = lookup_symbol_parent((yyvsp[(3) - (3)].s), ATTR|OBJ, get_atr1(object_idx));
    if ((yyval.i) == NO_INDEX) err ("Object of class '%s' doesn't have an attribute member '%s' ",get_name(get_atr1(object_idx)), (yyvsp[(3) - (3)].s));

    ;}
    break;

  case 69:
#line 495 "micko.y"
    { (yyval.i) = insert_literal((yyvsp[(1) - (1)].s), INT); ;}
    break;

  case 70:
#line 498 "micko.y"
    { (yyval.i) = insert_literal((yyvsp[(1) - (1)].s), UINT); ;}
    break;

  case 71:
#line 503 "micko.y"
    {
        fcall_idx = lookup_symbol((yyvsp[(1) - (1)].s), FUN);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", (yyvsp[(1) - (1)].s));
      ;}
    break;

  case 72:
#line 509 "micko.y"
    {
        if(get_atr1(fcall_idx) != (yyvsp[(4) - (5)].i))
          err("wrong number of arguments");
        code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
        if((yyvsp[(4) - (5)].i) > 0)
          code("\n\t\t\tADDS\t%%15,$%d,%%15", (yyvsp[(4) - (5)].i) * 4);
        set_type(FUN_REG, get_type(fcall_idx));
        (yyval.i) = FUN_REG;
      ;}
    break;

  case 73:
#line 519 "micko.y"
    {
    obj_idx = lookup_symbol_parent((yyvsp[(1) - (3)].s), OBJ,fun_idx);
    if (obj_idx == NO_INDEX) err ("Object with name '%s' doesnt exist!", (yyvsp[(1) - (3)].s));
    fcall_idx = lookup_symbol_parent((yyvsp[(3) - (3)].s), FUN, get_atr1(obj_idx));
    if (fcall_idx == NO_INDEX) err ("Object of class '%s' doesn't have an method with name '%s' ",get_name(get_atr1(obj_idx)), (yyvsp[(3) - (3)].s));
  ;}
    break;

  case 74:
#line 526 "micko.y"
    {
    if (call_valid(argument_counter,fcall_idx) == -1) err("Invalid arguments for function call '%s'!", get_name(fcall_idx));
    else clear_symbols(get_last_element()-argument_counter+1);
    set_type(FUN_REG, get_type(fcall_idx));
    (yyval.i) = FUN_REG;
    print_symtab();
  ;}
    break;

  case 78:
#line 542 "micko.y"
    {
    int var_idx = lookup_symbol_parent((yyvsp[(1) - (1)].s), VAR|PAR, fun_idx);
    if (var_idx == NO_INDEX) err("Argument '%s' not declared.", (yyvsp[(1) - (1)].s));
    else {
      insert_symbol((yyvsp[(1) - (1)].s), get_kind(var_idx), get_type(var_idx), NO_ATR, NO_ATR, fun_idx);
      argument_counter++;
    }
  ;}
    break;

  case 79:
#line 551 "micko.y"
    { insert_symbol((yyvsp[(1) - (1)].s), LIT, INT, NO_ATR, NO_ATR, fun_idx); 
      argument_counter++;;}
    break;

  case 80:
#line 555 "micko.y"
    { insert_symbol((yyvsp[(1) - (1)].s), LIT, UINT, NO_ATR, NO_ATR, fun_idx); 
      argument_counter++;;}
    break;

  case 81:
#line 562 "micko.y"
    { (yyval.i) = 0; ;}
    break;

  case 82:
#line 565 "micko.y"
    { 
      if(get_atr2(fcall_idx) != get_type((yyvsp[(1) - (1)].i)))
        err("incompatible type for argument");
      free_if_reg((yyvsp[(1) - (1)].i));
      code("\n\t\t\tPUSH\t");
      gen_sym_name((yyvsp[(1) - (1)].i));
      (yyval.i) = 1;
    ;}
    break;

  case 83:
#line 577 "micko.y"
    { code("\n@exit%d:", (yyvsp[(1) - (1)].i)); ;}
    break;

  case 84:
#line 580 "micko.y"
    { code("\n@exit%d:", (yyvsp[(1) - (3)].i)); ;}
    break;

  case 85:
#line 585 "micko.y"
    {
        (yyval.i) = ++lab_num;
        code("\n@if%d:", lab_num);
      ;}
    break;

  case 86:
#line 590 "micko.y"
    {
        code("\n\t\t%s\t@false%d", opp_jumps[(yyvsp[(4) - (4)].i)], (yyvsp[(3) - (4)].i));
        code("\n@true%d:", (yyvsp[(3) - (4)].i));
      ;}
    break;

  case 87:
#line 595 "micko.y"
    {
        code("\n\t\tJMP \t@exit%d", (yyvsp[(3) - (7)].i));
        code("\n@false%d:", (yyvsp[(3) - (7)].i));
        (yyval.i) = (yyvsp[(3) - (7)].i);
      ;}
    break;

  case 88:
#line 604 "micko.y"
    {
        if(get_type((yyvsp[(1) - (3)].i)) != get_type((yyvsp[(3) - (3)].i)))
          err("invalid operands: relational operator");
        (yyval.i) = (yyvsp[(2) - (3)].i) + ((get_type((yyvsp[(1) - (3)].i)) - 1) * RELOP_NUMBER);
        gen_cmp((yyvsp[(1) - (3)].i), (yyvsp[(3) - (3)].i));
      ;}
    break;

  case 89:
#line 614 "micko.y"
    {
        if(get_type(fun_idx) != get_type((yyvsp[(2) - (3)].i)))
          err("incompatible types in return");
        gen_mov((yyvsp[(2) - (3)].i), FUN_REG);
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));        
      ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2096 "micko.tab.c"
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


#line 622 "micko.y"


int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {
  int synerr;
  init_symtab();
  output = fopen("output.asm", "w+");

  synerr = yyparse();

  clear_symtab();
  fclose(output);
  
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count) {
    remove("output.asm");
    printf("\n%d error(s).\n", error_count);
  }

  if(synerr)
    return -1;  //syntax error
  else if(error_count)
    return error_count & 127; //semantic errors
  else if(warning_count)
    return (warning_count & 127) + 127; //warnings
  else
    return 0; //OK
}


