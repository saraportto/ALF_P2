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
     ABSTRACTO = 258,
     BOOLEANO = 259,
     BUCLE = 260,
     CARACTER = 261,
     CASOS = 262,
     CLASE = 263,
     COMO = 264,
     CONSTANTE = 265,
     CONSTRUCTOR = 266,
     CORTO = 267,
     CUANDO = 268,
     DE = 269,
     DESCENDENTE = 270,
     DESTRUCTOR = 271,
     DEVOLVER = 272,
     DICCIONARIO = 273,
     EN = 274,
     ENTERO = 275,
     ENTONCES = 276,
     ENUMERACION = 277,
     ES = 278,
     ESPECIFICO = 279,
     EXCEPCION = 280,
     EXPORTAR = 281,
     FALSO = 282,
     FIN = 283,
     FINAL = 284,
     FINALMENTE = 285,
     GENERICO = 286,
     IMPORTAR = 287,
     LARGO = 288,
     LANZA = 289,
     LIBRERIA = 290,
     LISTA = 291,
     MIENTRAS = 292,
     OBJETO = 293,
     OTRO = 294,
     PARA = 295,
     PRINCIPIO = 296,
     PRIVADO = 297,
     PROGRAMA = 298,
     PROTEGIDO = 299,
     PRUEBA = 300,
     PUBLICO = 301,
     RANGO = 302,
     REAL = 303,
     REFERENCIA = 304,
     REGISTRO = 305,
     REPETIR = 306,
     SALIR = 307,
     SI = 308,
     SIGNO = 309,
     SIGUIENTE = 310,
     SINO = 311,
     SUBPROGRAMA = 312,
     TABLA = 313,
     TIPO = 314,
     ULTIMA = 315,
     VALOR = 316,
     VERDADERO = 317,
     CTC_CARACTER = 318,
     CTC_CADENA = 319,
     IDENTIFICADOR = 320,
     CTC_ENTERA = 321,
     CTC_REAL = 322,
     DOS_PUNTOS = 323,
     CUATRO_PUNTOS = 324,
     ASIGNACION = 325,
     FLECHA = 326,
     INC = 327,
     DEC = 328,
     DESPI = 329,
     DESPD = 330,
     LEQ = 331,
     GEQ = 332,
     NEQ = 333,
     AND = 334,
     OR = 335,
     ASIG_SUMA = 336,
     ASIG_RESTA = 337,
     ASIG_MULT = 338,
     ASIG_DIV = 339,
     ASIG_RESTO = 340,
     ASIG_POT = 341,
     ASIG_DESPI = 342,
     ASIG_DESPD = 343
   };
#endif
/* Tokens.  */
#define ABSTRACTO 258
#define BOOLEANO 259
#define BUCLE 260
#define CARACTER 261
#define CASOS 262
#define CLASE 263
#define COMO 264
#define CONSTANTE 265
#define CONSTRUCTOR 266
#define CORTO 267
#define CUANDO 268
#define DE 269
#define DESCENDENTE 270
#define DESTRUCTOR 271
#define DEVOLVER 272
#define DICCIONARIO 273
#define EN 274
#define ENTERO 275
#define ENTONCES 276
#define ENUMERACION 277
#define ES 278
#define ESPECIFICO 279
#define EXCEPCION 280
#define EXPORTAR 281
#define FALSO 282
#define FIN 283
#define FINAL 284
#define FINALMENTE 285
#define GENERICO 286
#define IMPORTAR 287
#define LARGO 288
#define LANZA 289
#define LIBRERIA 290
#define LISTA 291
#define MIENTRAS 292
#define OBJETO 293
#define OTRO 294
#define PARA 295
#define PRINCIPIO 296
#define PRIVADO 297
#define PROGRAMA 298
#define PROTEGIDO 299
#define PRUEBA 300
#define PUBLICO 301
#define RANGO 302
#define REAL 303
#define REFERENCIA 304
#define REGISTRO 305
#define REPETIR 306
#define SALIR 307
#define SI 308
#define SIGNO 309
#define SIGUIENTE 310
#define SINO 311
#define SUBPROGRAMA 312
#define TABLA 313
#define TIPO 314
#define ULTIMA 315
#define VALOR 316
#define VERDADERO 317
#define CTC_CARACTER 318
#define CTC_CADENA 319
#define IDENTIFICADOR 320
#define CTC_ENTERA 321
#define CTC_REAL 322
#define DOS_PUNTOS 323
#define CUATRO_PUNTOS 324
#define ASIGNACION 325
#define FLECHA 326
#define INC 327
#define DEC 328
#define DESPI 329
#define DESPD 330
#define LEQ 331
#define GEQ 332
#define NEQ 333
#define AND 334
#define OR 335
#define ASIG_SUMA 336
#define ASIG_RESTA 337
#define ASIG_MULT 338
#define ASIG_DIV 339
#define ASIG_RESTO 340
#define ASIG_POT 341
#define ASIG_DESPI 342
#define ASIG_DESPD 343




/* Copy the first part of user declarations.  */
#line 1 "chusco.y"

#include <stdio.h>
#define YYDEBUG 1

extern FILE *yyin;
extern int yylex();



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
#line 291 "chusco.tab.c"

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   821

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNRULES -- Number of states.  */
#define YYNSTATES  455

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   346

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      92,    94,   102,   100,   111,   101,   106,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,    89,
      97,    99,    98,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   107,   104,   108,   105,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   109,     2,   110,    96,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    91,    93,    95
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     8,    13,    16,    17,    22,
      29,    36,    39,    44,    47,    51,    55,    57,    59,    61,
      69,    74,    81,    83,    85,    91,    96,    98,   100,   102,
     108,   112,   117,   120,   124,   126,   128,   130,   132,   134,
     136,   138,   144,   148,   157,   161,   165,   167,   169,   171,
     176,   183,   188,   195,   200,   204,   206,   213,   219,   225,
     230,   234,   237,   239,   241,   243,   245,   247,   249,   252,
     254,   256,   258,   260,   262,   264,   269,   273,   276,   279,
     281,   286,   293,   299,   304,   308,   310,   312,   315,   320,
     322,   324,   326,   328,   330,   332,   334,   336,   338,   340,
     345,   347,   349,   351,   353,   355,   357,   359,   361,   363,
     366,   370,   373,   378,   380,   384,   393,   400,   407,   412,
     415,   419,   421,   423,   430,   435,   442,   447,   455,   460,
     467,   473,   476,   480,   483,   489,   492,   497,   501,   504,
     508,   514,   517,   519,   521,   524,   530,   533,   536,   538,
     542,   544,   548,   550,   553,   555,   558,   560,   562,   564,
     566,   568,   570,   572,   576,   578,   580,   582,   586,   588,
     590,   592,   596,   598,   600,   602,   604,   608,   610,   613,
     615,   617,   619,   622,   624,   626,   628,   631,   633,   635,
     639,   641,   643,   645,   647,   649,   651,   653,   657,   662,
     667,   672,   676,   680,   684,   686,   693,   698,   702,   706,
     709,   710,   714,   716,   720,   721,   724,   726,   730,   732,
     735,   737,   741,   743,   746,   748,   752,   753,   757,   758,
     761,   762,   765,   767,   771,   772,   775,   777,   781,   782,
     785,   786,   789,   790,   794,   796,   800,   802,   806,   808,
     812,   814,   817
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     113,     0,    -1,   114,    -1,   118,    -1,    -1,    43,    65,
      89,   115,    -1,   196,   149,    -1,    -1,    32,    35,   117,
      89,    -1,    32,    35,   117,     9,    65,    89,    -1,    14,
      35,   117,    32,   197,    89,    -1,   198,    65,    -1,    35,
      65,    89,   119,    -1,   196,   199,    -1,   212,   120,   199,
      -1,    26,   200,    89,    -1,   122,    -1,   124,    -1,   143,
      -1,   197,    90,    10,   123,    70,   173,    89,    -1,   197,
      90,   123,    89,    -1,   197,    90,   123,    70,   173,    89,
      -1,   117,    -1,   125,    -1,    91,    65,    23,   125,    89,
      -1,    91,    65,    23,   132,    -1,   126,    -1,   130,    -1,
     131,    -1,    54,   128,   127,    47,   129,    -1,    54,   128,
     127,    -1,    54,   128,    47,   129,    -1,   128,   127,    -1,
     128,    47,   129,    -1,   128,    -1,    12,    -1,    33,    -1,
       4,    -1,     6,    -1,    20,    -1,    48,    -1,   173,    68,
     173,    68,   173,    -1,   173,    68,   173,    -1,    58,    92,
     173,    68,   173,    93,    14,   123,    -1,    36,    14,   123,
      -1,    18,    14,   123,    -1,   133,    -1,   135,    -1,   137,
      -1,    50,   201,    28,    50,    -1,   197,    90,   123,    70,
     173,    89,    -1,   197,    90,   123,    89,    -1,    22,    14,
     126,   202,    28,    22,    -1,    22,   202,    28,    22,    -1,
      65,    70,   173,    -1,    65,    -1,     8,    60,   138,   203,
      28,     8,    -1,     8,   138,   203,    28,     8,    -1,     8,
      60,   203,    28,     8,    -1,     8,   203,    28,     8,    -1,
      92,   200,    94,    -1,   140,   141,    -1,   141,    -1,    46,
      -1,    44,    -1,    42,    -1,   124,    -1,   122,    -1,   204,
     143,    -1,    11,    -1,    16,    -1,    31,    -1,     3,    -1,
      24,    -1,    29,    -1,    57,   144,   149,    57,    -1,    65,
     145,   148,    -1,    65,   148,    -1,    65,   145,    -1,    65,
      -1,    92,   205,   146,    94,    -1,   197,    95,   147,   123,
      70,   173,    -1,   197,    95,   123,    70,   173,    -1,   197,
      95,   147,   123,    -1,   197,    95,   123,    -1,    61,    -1,
      49,    -1,    17,   123,    -1,   206,    41,   207,    28,    -1,
     151,    -1,   153,    -1,   154,    -1,   157,    -1,   158,    -1,
     162,    -1,   164,    -1,   166,    -1,   167,    -1,    89,    -1,
     191,   152,   173,    89,    -1,    70,    -1,    81,    -1,    82,
      -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,
      -1,    88,    -1,    17,    89,    -1,    17,   173,    89,    -1,
     155,    89,    -1,   117,    92,   208,    94,    -1,   173,    -1,
      65,    70,   173,    -1,    53,   173,    21,   207,    56,   207,
      28,    53,    -1,    53,   173,    21,   207,    28,    53,    -1,
       7,   173,    23,   209,    28,     7,    -1,    13,   160,    71,
     207,    -1,   210,   161,    -1,   173,    68,   173,    -1,   173,
      -1,    39,    -1,    65,    90,   163,   207,    28,     5,    -1,
     163,   207,    28,     5,    -1,    40,    65,    90,   123,    19,
     173,    -1,    40,    65,    19,   173,    -1,    51,    65,    90,
     123,    19,   129,    15,    -1,    51,    65,    19,   129,    -1,
      51,    65,    90,   123,    19,   129,    -1,    51,    65,    19,
     129,    15,    -1,    37,   173,    -1,    55,   165,    89,    -1,
      55,    89,    -1,    52,    14,    65,   165,    89,    -1,    52,
      89,    -1,    52,    14,    65,    89,    -1,    52,   165,    89,
      -1,    13,   173,    -1,    34,   117,    89,    -1,    45,   207,
     168,    28,    45,    -1,   169,   172,    -1,   169,    -1,   172,
      -1,   211,   171,    -1,    25,    92,   117,    94,   207,    -1,
      25,   207,    -1,    30,   207,    -1,   174,    -1,   174,    80,
     175,    -1,   175,    -1,   175,    79,   176,    -1,   176,    -1,
      96,   177,    -1,   177,    -1,   178,   179,    -1,   179,    -1,
      97,    -1,    98,    -1,    76,    -1,    77,    -1,    99,    -1,
      78,    -1,   179,   180,   181,    -1,   181,    -1,    74,    -1,
      75,    -1,   181,   182,   183,    -1,   183,    -1,   100,    -1,
     101,    -1,   183,   184,   185,    -1,   185,    -1,   102,    -1,
     103,    -1,   104,    -1,   186,   105,   185,    -1,   186,    -1,
     188,   187,    -1,   188,    -1,    72,    -1,    73,    -1,   101,
     189,    -1,   189,    -1,   190,    -1,   191,    -1,   191,   155,
      -1,   155,    -1,   192,    -1,    92,   173,    94,    -1,    62,
      -1,    27,    -1,    66,    -1,    67,    -1,    63,    -1,    64,
      -1,   117,    -1,   191,   106,    65,    -1,   191,   107,   215,
     108,    -1,   191,   109,   216,   110,    -1,   107,   193,   217,
     108,    -1,   107,   215,   108,    -1,   109,   213,   110,    -1,
     109,   214,   110,    -1,   173,    -1,    53,   173,    21,   173,
      56,   173,    -1,    53,   173,    21,   173,    -1,    64,    71,
     173,    -1,    65,    71,   173,    -1,   196,   116,    -1,    -1,
     197,   111,    65,    -1,    65,    -1,   198,    65,    69,    -1,
      -1,   199,   121,    -1,   121,    -1,   200,   111,   117,    -1,
     117,    -1,   201,   134,    -1,   134,    -1,   202,   111,   136,
      -1,   136,    -1,   203,   139,    -1,   139,    -1,   204,   111,
     142,    -1,    -1,   205,   146,    89,    -1,    -1,   206,   121,
      -1,    -1,   207,   150,    -1,   150,    -1,   208,   111,   156,
      -1,    -1,   209,   159,    -1,   159,    -1,   210,   161,    90,
      -1,    -1,   211,   170,    -1,    -1,   212,   116,    -1,    -1,
     213,   111,   194,    -1,   194,    -1,   214,   111,   195,    -1,
     195,    -1,   215,   111,   173,    -1,   195,    -1,   216,   111,
      64,    -1,    64,    -1,   217,   163,    -1,   163,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    27,    30,    31,    34,    35,    38,    39,
      40,    43,    46,    49,    50,    53,    56,    57,    58,    65,
      66,    67,    70,    70,    77,    78,    81,    81,    81,    84,
      85,    86,    87,    88,    89,    92,    92,    95,    95,    95,
      95,    98,    99,   102,   103,   106,   109,   109,   109,   111,
     114,   115,   118,   119,   122,   123,   131,   132,   133,   134,
     137,   140,   141,   144,   144,   144,   147,   148,   149,   152,
     152,   152,   152,   152,   152,   159,   162,   163,   164,   165,
     168,   171,   172,   173,   174,   177,   177,   180,   183,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   202,
     205,   205,   206,   206,   206,   206,   207,   207,   207,   210,
     211,   214,   217,   220,   221,   224,   225,   228,   231,   234,
     237,   238,   239,   242,   243,   246,   247,   248,   249,   250,
     251,   252,   255,   256,   257,   258,   259,   260,   263,   266,
     269,   272,   273,   274,   277,   280,   283,   286,   294,   297,
     298,   301,   302,   305,   306,   309,   310,   313,   313,   313,
     313,   313,   313,   316,   317,   320,   320,   323,   324,   327,
     327,   330,   331,   334,   334,   334,   337,   338,   341,   342,
     345,   345,   348,   349,   352,   353,   354,   355,   356,   357,
     360,   360,   360,   360,   360,   360,   363,   364,   365,   366,
     369,   370,   371,   372,   375,   376,   377,   380,   383,   391,
     392,   395,   396,   399,   400,   403,   404,   407,   408,   411,
     412,   415,   416,   419,   420,   423,   424,   427,   428,   431,
     432,   435,   436,   439,   440,   443,   444,   447,   448,   451,
     452,   455,   456,   459,   460,   463,   464,   467,   468,   471,
     472,   475,   476
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACTO", "BOOLEANO", "BUCLE",
  "CARACTER", "CASOS", "CLASE", "COMO", "CONSTANTE", "CONSTRUCTOR",
  "CORTO", "CUANDO", "DE", "DESCENDENTE", "DESTRUCTOR", "DEVOLVER",
  "DICCIONARIO", "EN", "ENTERO", "ENTONCES", "ENUMERACION", "ES",
  "ESPECIFICO", "EXCEPCION", "EXPORTAR", "FALSO", "FIN", "FINAL",
  "FINALMENTE", "GENERICO", "IMPORTAR", "LARGO", "LANZA", "LIBRERIA",
  "LISTA", "MIENTRAS", "OBJETO", "OTRO", "PARA", "PRINCIPIO", "PRIVADO",
  "PROGRAMA", "PROTEGIDO", "PRUEBA", "PUBLICO", "RANGO", "REAL",
  "REFERENCIA", "REGISTRO", "REPETIR", "SALIR", "SI", "SIGNO", "SIGUIENTE",
  "SINO", "SUBPROGRAMA", "TABLA", "TIPO", "ULTIMA", "VALOR", "VERDADERO",
  "CTC_CARACTER", "CTC_CADENA", "IDENTIFICADOR", "CTC_ENTERA", "CTC_REAL",
  "DOS_PUNTOS", "CUATRO_PUNTOS", "ASIGNACION", "FLECHA", "INC", "DEC",
  "DESPI", "DESPD", "LEQ", "GEQ", "NEQ", "AND", "OR", "ASIG_SUMA",
  "ASIG_RESTA", "ASIG_MULT", "ASIG_DIV", "ASIG_RESTO", "ASIG_POT",
  "ASIG_DESPI", "ASIG_DESPD", "';'", "':'", "\"tipo\"", "'('", "\")\"",
  "')'", "\":\"", "'~'", "'<'", "'>'", "'='", "'+'", "'-'", "'*'", "'/'",
  "'\\\\'", "'^'", "'.'", "'['", "']'", "'{'", "'}'", "','", "$accept",
  "programa", "definicion_programa", "codigo_programa", "libreria",
  "nombre", "definicion_libreria", "codigo_libreria", "exportaciones",
  "declaracion", "declaracion_objeto", "especificacion_tipo",
  "declaracion_tipo", "tipo_no_estructurado", "tipo_escalar", "longitud",
  "tipo_basico", "rango", "tipo_tabla", "tipo_diccionario",
  "tipo_estructurado", "tipo_registro", "campo", "tipo_enumerado",
  "elemento_enumeracion", "clase", "superclases", "declaracion_componente",
  "visibilidad", "componente", "modificador", "declaracion_subprograma",
  "cabecera_subprograma", "parametrizacion", "declaracion_parametros",
  "modo", "tipo_resultado", "cuerpo_subprograma", "instruccion",
  "instruccion_asignacion", "op_asignacion", "instruccion_devolver",
  "instruccion_llamada", "llamada_subprograma", "definicion_parametro",
  "instruccion_si", "instruccion_casos", "caso", "entradas", "entrada",
  "instruccion_bucle", "clausula_iteracion", "instruccion_interrupcion",
  "cuando", "instruccion_lanzamiento_excepcion",
  "instruccion_captura_excepcion", "clausulas", "clausulas_excepcion",
  "clausula_excepcion_especifica", "clausula_excepcion_general",
  "clausula_finalmente", "expresion", "expresion_or", "expresion_and",
  "expresion_neg", "expresion_comparacion", "operador_comparacion",
  "expresion_desp", "operador_desp", "expresion_add", "operador_add",
  "expresion_mult_div", "operador_mult_div", "expresion_potencia",
  "expresion_posfija", "operador_posfijo", "expresion_unaria", "primario",
  "literal", "objeto", "enumeraciones", "expresion_condicional",
  "clave_valor", "campo_valor", "libreria_ast", "identificador_rep_comas",
  "identificador_cuatropuntos_ast", "declaracion_rep", "nombre_rep_comas",
  "campo_rep", "elemento_enumeracion_rep_comas",
  "declaracion_componente_rep", "modificador_ast_comas",
  "declaracion_parametros_ast_puntocoma", "declaracion_ast",
  "instruccion_rep", "definicion_parametro_ast_comas", "caso_rep",
  "entrada_rep_dospuntos", "clausulas_excepcion_especifica_ast",
  "codigo_libreria_ast", "clave_valor_rep_comas", "campo_valor_rep_comas",
  "expresion_rep_comas", "ctc_cadena_comas", "clausula_iteracion_rep", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    59,
      58,   344,    40,   345,    41,   346,   126,    60,    62,    61,
      43,    45,    42,    47,    92,    94,    46,    91,    93,   123,
     125,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   117,   118,   119,   119,   120,   121,   121,   121,   122,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   126,
     126,   126,   126,   126,   126,   127,   127,   128,   128,   128,
     128,   129,   129,   130,   130,   131,   132,   132,   132,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   137,   137,
     138,   139,   139,   140,   140,   140,   141,   141,   141,   142,
     142,   142,   142,   142,   142,   143,   144,   144,   144,   144,
     145,   146,   146,   146,   146,   147,   147,   148,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   151,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   153,
     153,   154,   155,   156,   156,   157,   157,   158,   159,   160,
     161,   161,   161,   162,   162,   163,   163,   163,   163,   163,
     163,   163,   164,   164,   164,   164,   164,   164,   165,   166,
     167,   168,   168,   168,   169,   170,   171,   172,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   178,
     178,   178,   178,   179,   179,   180,   180,   181,   181,   182,
     182,   183,   183,   184,   184,   184,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   189,   189,   189,   189,   189,
     190,   190,   190,   190,   190,   190,   191,   191,   191,   191,
     192,   192,   192,   192,   193,   193,   193,   194,   195,   196,
     196,   197,   197,   198,   198,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203,   204,   204,   205,   205,   206,
     206,   207,   207,   208,   208,   209,   209,   210,   210,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     4,     2,     0,     4,     6,
       6,     2,     4,     2,     3,     3,     1,     1,     1,     7,
       4,     6,     1,     1,     5,     4,     1,     1,     1,     5,
       3,     4,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     5,     3,     8,     3,     3,     1,     1,     1,     4,
       6,     4,     6,     4,     3,     1,     6,     5,     5,     4,
       3,     2,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     3,     2,     2,     1,
       4,     6,     5,     4,     3,     1,     1,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     4,     1,     3,     8,     6,     6,     4,     2,
       3,     1,     1,     6,     4,     6,     4,     7,     4,     6,
       5,     2,     3,     2,     5,     2,     4,     3,     2,     3,
       5,     2,     1,     1,     2,     5,     2,     2,     1,     3,
       1,     3,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     4,
       4,     3,     3,     3,     1,     6,     4,     3,     3,     2,
       0,     3,     1,     3,     0,     2,     1,     3,     1,     2,
       1,     3,     1,     2,     1,     3,     0,     3,     0,     2,
       0,     2,     1,     3,     0,     2,     1,     3,     0,     2,
       0,     2,     0,     3,     1,     3,     1,     3,     1,     3,
       1,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     2,     3,     0,     0,     1,   210,
     210,    12,     0,     0,     5,   230,     0,     0,     0,   212,
       0,   209,   216,    16,    17,    18,     0,    13,   214,   241,
       0,     6,     0,   214,   214,    79,   230,     0,   214,     0,
     215,   218,     0,     0,    14,     0,   229,     0,     0,   214,
     228,    78,    77,     0,     0,    37,    38,   214,     0,    39,
       0,    40,     0,     0,    22,     0,    23,    26,    34,    27,
      28,   211,    11,    15,   214,   214,   214,   214,   214,     0,
       0,     0,     0,   214,     0,     0,    98,   196,   232,    89,
      90,    91,     0,    92,    93,    94,     0,    95,    96,    97,
       0,     0,     0,     0,     8,    87,     0,    76,    75,   226,
       0,     0,     0,    25,    46,    47,    48,     0,   214,   214,
       0,   214,   214,    20,    35,    36,   214,    32,   213,   217,
     191,   190,   194,   195,   192,   193,   159,   160,   162,   214,
     214,   157,   158,   161,   214,     0,     0,   187,     0,   148,
     150,   152,   154,   214,   156,   164,   168,   172,   177,   179,
     183,   184,   185,   188,   109,     0,     0,   131,     0,   240,
       0,   214,     0,   135,     0,     0,   133,     0,     0,   234,
     111,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,     0,     0,   214,    88,   231,     0,     0,     0,
       0,    65,    64,    63,   226,   214,    67,    66,   226,   224,
     226,    62,   226,     0,     0,    55,   222,     0,   220,     0,
       0,    24,   214,    45,    44,   214,    30,     0,     0,    33,
       0,     0,   153,   182,   214,     0,   204,     0,   248,     0,
       0,   244,   246,     0,     0,     0,   214,   214,   155,   165,
     166,   214,   169,   170,   214,   173,   174,   175,   214,   214,
     180,   181,   178,     0,   186,   110,   139,   214,   214,     0,
       0,   142,   143,     0,   214,   214,   138,     0,   137,     0,
     132,     0,     0,     0,   197,     0,   250,     0,     0,    10,
       9,   227,    80,   214,   226,   226,     0,   226,    61,     0,
     223,     0,    68,     0,   214,     0,     0,   214,     0,   219,
       0,    31,   214,   214,    21,   214,   189,     0,   214,   252,
       0,   201,   214,   214,   202,     0,   203,     0,   238,   236,
       0,   149,   151,   163,   167,   171,   176,   126,     0,   147,
       0,   141,     0,   239,   144,   128,     0,   136,     0,     0,
       0,   112,     0,   124,   198,   199,     0,    99,    86,    85,
      84,   214,   226,     0,    60,     0,    59,    72,    69,    70,
      73,    74,    71,   225,     0,    54,    53,   221,     0,    49,
      19,    29,     0,    42,   214,   208,   200,   251,   247,   207,
     243,   245,     0,   214,     0,   235,   214,   140,   214,   146,
     130,   214,   134,     0,     0,     0,     0,   233,   113,   249,
     214,    83,     0,    58,    57,     0,   214,    51,     0,   214,
     206,     0,   122,   119,   121,   117,   125,     0,   129,   116,
       0,   123,   214,    82,   214,    56,    52,     0,   214,    41,
     214,   118,   237,   214,     0,   127,     0,   114,    81,    50,
      43,   205,   120,   145,   115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    14,    21,    87,     5,    11,    30,    22,
     206,    65,   207,    66,    67,   127,    68,   229,    69,    70,
     113,   114,   218,   115,   216,   116,   208,   209,   210,   211,
     373,    25,    36,    51,   199,   361,    52,    31,    88,    89,
     194,    90,    91,   147,   407,    93,    94,   329,   392,   423,
      95,    96,    97,   174,    98,    99,   270,   271,   343,   344,
     272,   230,   149,   150,   151,   152,   153,   154,   251,   155,
     254,   156,   258,   157,   158,   262,   159,   160,   161,   162,
     163,   237,   241,   238,    12,    26,    42,    27,    43,   220,
     217,   212,   213,   106,    32,   101,   282,   330,   393,   273,
      13,   243,   244,   239,   287,   320
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -213
static const yytype_int16 yypact[] =
{
      95,   -43,    14,    53,  -213,  -213,    26,    40,  -213,   153,
     140,  -213,   103,   131,  -213,   107,   119,   148,   134,  -213,
     138,  -213,  -213,  -213,  -213,  -213,   -34,   -10,  -213,  -213,
     -10,  -213,    23,  -213,  -213,    16,  -213,   188,   438,   152,
    -213,  -213,   167,   -39,   -10,   701,  -213,   181,     8,   727,
    -213,   204,  -213,   169,   502,  -213,  -213,   727,   231,  -213,
     241,  -213,   254,   183,  -213,    -4,  -213,  -213,   114,  -213,
    -213,  -213,   190,  -213,  -213,   477,    89,  -213,   477,   203,
     701,   216,     6,   477,    12,   197,  -213,   205,  -213,  -213,
    -213,  -213,   210,  -213,  -213,  -213,   701,  -213,  -213,  -213,
     712,   599,   244,   250,  -213,  -213,   244,  -213,  -213,   303,
      37,   244,   228,  -213,  -213,  -213,  -213,   251,   727,   727,
     115,   477,   477,  -213,  -213,  -213,   477,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   477,
     504,  -213,  -213,  -213,   109,   354,   128,  -213,   304,   263,
     255,  -213,  -213,   222,   176,   177,   309,  -213,   225,   267,
    -213,  -213,   213,  -213,  -213,   257,   259,  -213,    15,   273,
      20,   477,   294,  -213,   276,   348,  -213,   283,   182,  -213,
    -213,   621,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,   311,   313,   310,   477,  -213,  -213,    33,   290,    80,
      69,  -213,  -213,  -213,   549,  -213,  -213,  -213,   162,  -213,
      42,  -213,   163,   -22,    55,   320,  -213,   -13,  -213,    38,
      13,  -213,   477,  -213,  -213,   477,   351,   331,   312,  -213,
     334,   329,  -213,  -213,   477,   333,  -213,   182,  -213,   156,
     353,  -213,  -213,   226,   240,   392,   477,   477,   176,  -213,
    -213,   222,  -213,  -213,   222,  -213,  -213,  -213,   222,   222,
    -213,  -213,  -213,   205,  -213,  -213,  -213,   477,   727,   701,
     386,   395,  -213,   401,   477,   727,  -213,    17,  -213,   701,
    -213,   701,    47,   422,  -213,   161,  -213,   243,   339,  -213,
    -213,  -213,  -213,   722,   162,   192,   135,   343,  -213,   425,
    -213,   459,  -213,   370,   477,   415,   370,   727,   389,  -213,
     352,  -213,   477,   477,  -213,   477,  -213,   424,   477,  -213,
       3,  -213,   477,   477,  -213,   379,  -213,   313,  -213,  -213,
      32,   255,  -213,   177,   309,  -213,  -213,  -213,   428,   701,
     404,  -213,    31,  -213,  -213,   439,   441,  -213,   368,   570,
     650,  -213,   402,  -213,  -213,  -213,   407,  -213,  -213,  -213,
     403,   727,   394,   464,  -213,   468,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,   -12,  -213,  -213,  -213,    43,  -213,
    -213,  -213,   388,   414,   477,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,   413,   450,   480,  -213,   477,  -213,  -213,   701,
    -213,   477,  -213,   440,   701,   486,   427,  -213,  -213,  -213,
     477,   432,   487,  -213,  -213,   483,   477,  -213,   493,   477,
     462,   701,  -213,   429,   447,  -213,  -213,   431,   506,  -213,
     672,  -213,   477,  -213,   477,  -213,  -213,   434,   727,  -213,
     477,   701,  -213,   477,   701,  -213,   476,  -213,  -213,  -213,
    -213,  -213,  -213,   701,  -213
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,  -213,   517,   -28,  -213,  -213,  -213,   170,
     212,   -45,   264,   478,   319,   416,   472,  -212,  -213,  -213,
    -213,  -213,   315,  -213,   239,  -213,   357,  -203,  -213,   327,
    -213,   345,  -213,  -213,  -213,  -213,   511,   527,   -57,  -213,
    -213,  -213,  -213,   -44,  -213,  -213,  -213,   234,  -213,  -213,
    -213,  -170,  -213,   -82,  -213,  -213,  -213,  -213,  -213,  -213,
     301,   -52,  -213,   337,   318,   445,  -213,   426,  -213,   338,
    -213,   336,  -213,    98,  -213,  -213,  -213,   444,  -213,   -38,
    -213,  -213,   269,  -143,   582,   -74,  -213,   567,   412,  -213,
     296,  -190,  -213,  -213,  -213,   -69,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,   408,  -213,  -213
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -243
static const yytype_int16 yytable[] =
{
      41,    92,   177,   242,   105,    47,    48,   100,   281,   300,
      64,   169,   117,   311,   295,   305,   415,   103,   297,   171,
     172,    64,     6,   148,   165,   171,   167,   181,   197,    64,
     171,   175,   200,    49,   267,    18,    92,   219,    75,   274,
      78,   308,   100,    79,   196,   328,   129,    18,    76,   166,
      73,   214,    92,     8,    81,    19,    38,    92,   100,    55,
     394,    56,   345,   100,    45,    77,   122,   319,    78,   227,
     228,    79,    74,   223,   224,    59,    80,    39,    19,     7,
      18,    20,    81,    82,    83,   123,    84,   231,    19,   301,
      64,    64,   300,   236,   300,   173,    85,   104,   306,   306,
     381,   176,   215,    61,   362,   268,   347,    19,    50,    62,
     275,   386,   196,   416,    20,     9,   130,    16,   264,   276,
      86,    16,   289,   398,   196,    92,   124,   124,   307,    10,
       1,   100,   417,    20,   263,    17,   130,    92,     2,    17,
      -7,   351,   288,   100,    39,    16,   219,   125,   125,    39,
     387,   131,   132,   133,    33,   134,   135,    28,   352,   300,
      18,   126,   225,    17,   293,   136,   137,   138,    19,   291,
     310,   131,   132,   133,   292,   134,   135,    41,   164,  -242,
      39,   139,   317,    34,   391,   140,   141,   142,   143,   428,
     144,   299,   240,   235,    20,   348,   145,    40,   146,    35,
     339,   139,    46,    37,   201,   201,   202,   202,   203,   203,
     349,    54,   350,   102,    40,   337,   145,    71,   146,    78,
     363,    49,    79,   338,    23,    92,   108,    19,    19,   364,
     346,   100,    72,    81,   201,    92,   202,    92,   203,    23,
      64,   100,    23,   100,    23,   118,    74,    64,   360,   130,
     249,   250,   375,    20,    20,   119,    23,    19,    55,   128,
      56,   382,   378,   383,   321,    64,   385,   322,   168,   354,
     388,   389,   322,   399,    59,   121,    24,   252,   253,    64,
      75,   170,   196,    20,   131,   132,   133,   178,   134,   135,
      76,    24,   196,   196,    24,    92,    24,   179,    92,   180,
     408,   100,    61,   269,   100,    92,    92,    77,    24,    19,
      78,   100,   100,    79,   139,   198,   411,   221,    80,   191,
     192,   222,   193,   144,    81,    82,    83,   245,    84,   145,
     259,   146,   420,    64,   247,   430,   324,   325,    85,   260,
     261,   424,   196,   246,   426,   201,   265,   202,   266,   203,
     326,   327,   441,   355,   356,    92,   335,   336,   433,   277,
      92,   100,    86,   204,   437,   278,   100,   439,    19,   279,
     427,   365,   280,   196,   286,   453,   284,    92,   235,   290,
     447,   130,   448,   100,   196,   201,    92,   202,   451,   203,
     304,   452,   100,   450,    20,   205,   196,    92,   312,   313,
      92,   314,   315,   100,   318,   328,   100,   234,    19,    92,
      64,   255,   256,   257,   340,   100,   131,   132,   133,   235,
     134,   135,   412,   316,   323,   269,   342,   353,   357,   130,
     136,   137,   138,   366,    20,   215,   201,   376,   202,   379,
     203,   380,    55,   240,    56,   384,   139,   396,    57,   397,
     140,   141,   142,   143,   400,   144,    58,   402,    59,    19,
     401,   145,   367,   146,   131,   132,   133,   406,   134,   135,
     368,   409,   413,   410,    60,   369,   414,   130,   136,   137,
     138,   418,   419,   370,   421,    20,    61,   425,   371,   422,
     372,   431,    62,   429,   139,   435,    63,   432,   140,   141,
     142,   143,   434,   144,   130,   436,    55,   438,    56,   145,
     109,   146,   131,   132,   133,   443,   134,   135,   440,   442,
      58,   445,    59,   449,   110,   444,   136,   137,   138,   454,
      29,   130,   112,   303,   120,   309,   226,   298,    60,   131,
     132,   133,   139,   134,   135,   377,   140,   141,   142,   143,
      61,   144,   111,   136,   137,   138,    62,   145,   302,   146,
      63,   294,   107,    53,   395,   332,   131,   132,   133,   139,
     134,   135,   341,   140,   141,   142,   143,    75,   144,   248,
     136,   137,   138,   331,   145,   232,   146,    76,   233,   333,
     334,   201,    15,   202,   390,   203,   139,    44,   403,   374,
     285,   141,   142,   143,    77,   144,    75,    78,     0,     0,
      79,   145,     0,   146,    19,    80,    76,   296,     0,     0,
       0,    81,    82,    83,     0,    84,   404,   195,    75,     0,
       0,     0,     0,    77,     0,    85,    78,     0,    76,    79,
      20,   205,     0,     0,    80,     0,     0,     0,     0,   283,
      81,    82,    83,     0,    84,    77,     0,    75,    78,    86,
       0,    79,     0,     0,    85,     0,    80,    76,     0,     0,
       0,     0,    81,    82,    83,     0,    84,     0,   405,    75,
       0,     0,     0,     0,    77,     0,    85,    78,    86,    76,
      79,     0,     0,     0,     0,    80,     0,     0,     0,     0,
     446,    81,    82,    83,     0,    84,    77,     0,    75,    78,
      86,     0,    79,     0,     0,    85,     0,    80,    76,     0,
       0,     0,     0,    81,    82,    83,    55,    84,    56,     0,
       0,    55,     0,    56,     0,    77,     0,    85,    78,    86,
      58,    79,    59,     0,     0,    58,    80,    59,     0,     0,
       0,     0,    81,    82,    83,     0,    84,     0,    60,     0,
       0,    86,     0,    60,     0,     0,    85,     0,     0,     0,
      61,   358,     0,     0,     0,    61,    62,     0,     0,     0,
      63,    62,   182,   359,     0,    63,     0,     0,     0,     0,
      86,     0,     0,   183,   184,   185,   186,   187,   188,   189,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,   192,
       0,   193
};

static const yytype_int16 yycheck[] =
{
      28,    45,    84,   146,    49,    33,    34,    45,   178,   212,
      38,    80,    57,   225,   204,    28,    28,     9,   208,    13,
      14,    49,    65,    75,    76,    13,    78,    96,   102,    57,
      13,    83,   106,    17,    19,    57,    80,   111,     7,    19,
      37,    28,    80,    40,   101,    13,    74,    57,    17,    77,
      89,    14,    96,     0,    51,    65,    90,   101,    96,     4,
      28,     6,   274,   101,    41,    34,    70,   237,    37,   121,
     122,    40,   111,   118,   119,    20,    45,   111,    65,    65,
      57,    91,    51,    52,    53,    89,    55,   139,    65,   111,
     118,   119,   295,   145,   297,    89,    65,    89,   111,   111,
     312,    89,    65,    48,   294,    90,    89,    65,    92,    54,
      90,   108,   169,    70,    91,    89,    27,    14,   162,   171,
      89,    14,    89,    92,   181,   169,    12,    12,    90,    89,
      35,   169,    89,    91,   162,    32,    27,   181,    43,    32,
       0,    94,   194,   181,   111,    14,   220,    33,    33,   111,
     320,    62,    63,    64,    35,    66,    67,    26,   111,   362,
      57,    47,    47,    32,    95,    76,    77,    78,    65,    89,
     222,    62,    63,    64,    94,    66,    67,   205,    89,    26,
     111,    92,   234,    35,   327,    96,    97,    98,    99,   401,
     101,    28,    64,    65,    91,   277,   107,    27,   109,    65,
     269,    92,    32,    65,    42,    42,    44,    44,    46,    46,
     279,    23,   281,    32,    44,   267,   107,    65,   109,    37,
      28,    17,    40,   268,    12,   269,    57,    65,    65,    94,
     275,   269,    65,    51,    42,   279,    44,   281,    46,    27,
     268,   279,    30,   281,    32,    14,   111,   275,   293,    27,
      74,    75,   304,    91,    91,    14,    44,    65,     4,    69,
       6,   313,   307,   315,   108,   293,   318,   111,    65,   108,
     322,   323,   111,   342,    20,    92,    12,   100,   101,   307,
       7,    65,   339,    91,    62,    63,    64,    90,    66,    67,
      17,    27,   349,   350,    30,   339,    32,    92,   342,    89,
     352,   339,    48,    30,   342,   349,   350,    34,    44,    65,
      37,   349,   350,    40,    92,    65,   361,    89,    45,   106,
     107,    70,   109,   101,    51,    52,    53,    23,    55,   107,
     105,   109,   384,   361,    79,   404,   110,   111,    65,    72,
      73,   393,   399,    80,   396,    42,    89,    44,    89,    46,
     110,   111,   421,   110,   111,   399,   258,   259,   410,    65,
     404,   399,    89,    60,   416,    89,   404,   419,    65,    21,
     398,    28,    89,   430,    64,   444,    65,   421,    65,    89,
     432,    27,   434,   421,   441,    42,   430,    44,   440,    46,
      70,   443,   430,   438,    91,    92,   453,   441,    47,    68,
     444,    89,    68,   441,    71,    13,   444,    53,    65,   453,
     438,   102,   103,   104,    28,   453,    62,    63,    64,    65,
      66,    67,    28,    94,    71,    30,    25,     5,    89,    27,
      76,    77,    78,     8,    91,    65,    42,    22,    44,    50,
      46,    89,     4,    64,     6,    21,    92,    19,    10,    45,
      96,    97,    98,    99,    15,   101,    18,    89,    20,    65,
      19,   107,     3,   109,    62,    63,    64,    65,    66,    67,
      11,    64,     8,    70,    36,    16,     8,    27,    76,    77,
      78,    93,    68,    24,    71,    91,    48,     7,    29,    39,
      31,     5,    54,    53,    92,     8,    58,    70,    96,    97,
      98,    99,    70,   101,    27,    22,     4,    14,     6,   107,
       8,   109,    62,    63,    64,    68,    66,    67,    56,    90,
      18,    15,    20,    89,    22,    94,    76,    77,    78,    53,
      13,    27,    54,   214,    62,   220,   120,   210,    36,    62,
      63,    64,    92,    66,    67,   306,    96,    97,    98,    99,
      48,   101,    50,    76,    77,    78,    54,   107,   213,   109,
      58,   204,    51,    36,   330,   247,    62,    63,    64,    92,
      66,    67,   271,    96,    97,    98,    99,     7,   101,   153,
      76,    77,    78,   246,   107,   140,   109,    17,   144,   251,
     254,    42,    10,    44,   325,    46,    92,    30,    28,   303,
     192,    97,    98,    99,    34,   101,     7,    37,    -1,    -1,
      40,   107,    -1,   109,    65,    45,    17,   205,    -1,    -1,
      -1,    51,    52,    53,    -1,    55,    56,    28,     7,    -1,
      -1,    -1,    -1,    34,    -1,    65,    37,    -1,    17,    40,
      91,    92,    -1,    -1,    45,    -1,    -1,    -1,    -1,    28,
      51,    52,    53,    -1,    55,    34,    -1,     7,    37,    89,
      -1,    40,    -1,    -1,    65,    -1,    45,    17,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    55,    -1,    28,     7,
      -1,    -1,    -1,    -1,    34,    -1,    65,    37,    89,    17,
      40,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      28,    51,    52,    53,    -1,    55,    34,    -1,     7,    37,
      89,    -1,    40,    -1,    -1,    65,    -1,    45,    17,    -1,
      -1,    -1,    -1,    51,    52,    53,     4,    55,     6,    -1,
      -1,     4,    -1,     6,    -1,    34,    -1,    65,    37,    89,
      18,    40,    20,    -1,    -1,    18,    45,    20,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    55,    -1,    36,    -1,
      -1,    89,    -1,    36,    -1,    -1,    65,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    48,    54,    -1,    -1,    -1,
      58,    54,    70,    61,    -1,    58,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,
      -1,   109
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   113,   114,   118,    65,    65,     0,    89,
      89,   119,   196,   212,   115,   196,    14,    32,    57,    65,
      91,   116,   121,   122,   124,   143,   197,   199,    26,   116,
     120,   149,   206,    35,    35,    65,   144,    65,    90,   111,
     121,   117,   198,   200,   199,    41,   121,   117,   117,    17,
      92,   145,   148,   149,    23,     4,     6,    10,    18,    20,
      36,    48,    54,    58,   117,   123,   125,   126,   128,   130,
     131,    65,    65,    89,   111,     7,    17,    34,    37,    40,
      45,    51,    52,    53,    55,    65,    89,   117,   150,   151,
     153,   154,   155,   157,   158,   162,   163,   164,   166,   167,
     191,   207,    32,     9,    89,   123,   205,   148,    57,     8,
      22,    50,   125,   132,   133,   135,   137,   123,    14,    14,
     128,    92,    70,    89,    12,    33,    47,   127,    69,   117,
      27,    62,    63,    64,    66,    67,    76,    77,    78,    92,
      96,    97,    98,    99,   101,   107,   109,   155,   173,   174,
     175,   176,   177,   178,   179,   181,   183,   185,   186,   188,
     189,   190,   191,   192,    89,   173,   117,   173,    65,   207,
      65,    13,    14,    89,   165,   173,    89,   165,    90,    92,
      89,   207,    70,    81,    82,    83,    84,    85,    86,    87,
      88,   106,   107,   109,   152,    28,   150,   197,    65,   146,
     197,    42,    44,    46,    60,    92,   122,   124,   138,   139,
     140,   141,   203,   204,    14,    65,   136,   202,   134,   197,
     201,    89,    70,   123,   123,    47,   127,   173,   173,   129,
     173,   173,   177,   189,    53,    65,   173,   193,   195,   215,
      64,   194,   195,   213,   214,    23,    80,    79,   179,    74,
      75,   180,   100,   101,   182,   102,   103,   104,   184,   105,
      72,    73,   187,   117,   155,    89,    89,    19,    90,    30,
     168,   169,   172,   211,    19,    90,   173,    65,    89,    21,
      89,   163,   208,    28,    65,   215,    64,   216,   173,    89,
      89,    89,    94,    95,   138,   203,   200,   203,   141,    28,
     139,   111,   143,   126,    70,    28,   111,    90,    28,   134,
     173,   129,    47,    68,    89,    68,    94,   173,    71,   163,
     217,   108,   111,    71,   110,   111,   110,   111,    13,   159,
     209,   175,   176,   181,   183,   185,   185,   173,   123,   207,
      28,   172,    25,   170,   171,   129,   123,    89,   165,   207,
     207,    94,   111,     5,   108,   110,   111,    89,    49,    61,
     123,   147,   203,    28,    94,    28,     8,     3,    11,    16,
      24,    29,    31,   142,   202,   173,    22,   136,   123,    50,
      89,   129,   173,   173,    21,   173,   108,   163,   173,   173,
     194,   195,   160,   210,    28,   159,    19,    45,    92,   207,
      15,    19,    89,    28,    56,    28,    65,   156,   173,    64,
      70,   123,    28,     8,     8,    28,    70,    89,    93,    68,
     173,    71,    39,   161,   173,     7,   173,   117,   129,    53,
     207,     5,    70,   173,    70,     8,    22,   173,    14,   173,
      56,   207,    90,    68,    94,    15,    28,   173,   173,    89,
     123,   173,   173,   207,    53
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
      
/* Line 1267 of yacc.c.  */
#line 2037 "chusco.tab.c"
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


#line 480 "chusco.y"


int yyerror(char *s) {
    fflush(stdout);
    printf("***************** %s\n",s);
}

int yywrap() {
    return(1);
}

int main(int argc, char *argv[]) {

    yydebug = 1;

    if (argc < 2) {
        printf("Uso: ./chusco NombreArchivo\n");
    }
    
    else {
        yyin = fopen(argv[1],"r");
        yyparse();
    }
}

