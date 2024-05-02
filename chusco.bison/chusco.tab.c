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

extern FILE *yyin;
extern int yylex();

#define YYDEBUG 1



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
#line 292 "chusco.tab.c"

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
#define YYLAST   814

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  249
/* YYNRULES -- Number of states.  */
#define YYNSTATES  458

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
      29,    36,    38,    42,    47,    50,    54,    58,    60,    62,
      64,    72,    77,    84,    86,    88,    94,    99,   101,   103,
     105,   111,   115,   120,   123,   127,   129,   131,   133,   135,
     137,   139,   141,   147,   151,   160,   164,   168,   170,   172,
     174,   179,   186,   191,   198,   203,   207,   209,   216,   222,
     228,   233,   237,   240,   242,   244,   246,   248,   250,   252,
     255,   257,   259,   261,   263,   265,   267,   272,   276,   279,
     282,   284,   289,   296,   302,   307,   311,   313,   315,   318,
     323,   325,   327,   329,   331,   333,   335,   337,   339,   341,
     343,   348,   350,   352,   354,   356,   358,   360,   362,   364,
     366,   369,   373,   376,   381,   383,   387,   396,   403,   410,
     415,   418,   422,   424,   426,   433,   438,   445,   450,   458,
     463,   470,   476,   479,   483,   486,   492,   495,   500,   504,
     507,   511,   517,   520,   522,   524,   527,   533,   536,   539,
     541,   545,   547,   551,   553,   556,   558,   562,   564,   566,
     568,   570,   572,   574,   576,   580,   582,   584,   586,   590,
     592,   594,   596,   600,   602,   604,   606,   608,   612,   614,
     617,   619,   621,   623,   626,   628,   630,   632,   635,   637,
     639,   643,   645,   647,   649,   651,   653,   655,   657,   661,
     666,   671,   676,   680,   684,   688,   690,   697,   702,   706,
     710,   713,   714,   718,   720,   723,   725,   729,   731,   734,
     736,   740,   742,   745,   747,   751,   752,   756,   757,   760,
     761,   764,   766,   770,   771,   774,   776,   780,   781,   784,
     785,   789,   791,   795,   797,   801,   803,   807,   809,   812
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     113,     0,    -1,   114,    -1,   118,    -1,    -1,    43,    65,
      89,   115,    -1,   196,   149,    -1,    -1,    32,    35,   117,
      89,    -1,    32,    35,   117,     9,    65,    89,    -1,    14,
      35,   117,    32,   197,    89,    -1,    65,    -1,   117,    69,
      65,    -1,    35,    65,    89,   119,    -1,   196,   198,    -1,
     196,   120,   198,    -1,    26,   199,    89,    -1,   122,    -1,
     124,    -1,   143,    -1,   197,    90,    10,   123,    70,   173,
      89,    -1,   197,    90,   123,    89,    -1,   197,    90,   123,
      70,   173,    89,    -1,   117,    -1,   125,    -1,    91,    65,
      23,   125,    89,    -1,    59,    65,    23,   132,    -1,   126,
      -1,   130,    -1,   131,    -1,    54,   128,   127,    47,   129,
      -1,    54,   128,   127,    -1,    54,   128,    47,   129,    -1,
     128,   127,    -1,   128,    47,   129,    -1,   128,    -1,    12,
      -1,    33,    -1,     4,    -1,     6,    -1,    20,    -1,    48,
      -1,   173,    68,   173,    68,   173,    -1,   173,    68,   173,
      -1,    58,    92,   173,    68,   173,    93,    14,   123,    -1,
      36,    14,   123,    -1,    18,    14,   123,    -1,   133,    -1,
     135,    -1,   137,    -1,    50,   200,    28,    50,    -1,   197,
      90,   123,    70,   173,    89,    -1,   197,    90,   123,    89,
      -1,    22,    14,   126,   201,    28,    22,    -1,    22,   201,
      28,    22,    -1,    65,    70,   173,    -1,    65,    -1,     8,
      60,   138,   202,    28,     8,    -1,     8,   138,   202,    28,
       8,    -1,     8,    60,   202,    28,     8,    -1,     8,   202,
      28,     8,    -1,    92,   199,    94,    -1,   140,   141,    -1,
     141,    -1,    46,    -1,    44,    -1,    42,    -1,   124,    -1,
     122,    -1,   203,   143,    -1,    11,    -1,    16,    -1,    31,
      -1,     3,    -1,    24,    -1,    29,    -1,    57,   144,   149,
      57,    -1,    65,   145,   148,    -1,    65,   148,    -1,    65,
     145,    -1,    65,    -1,    92,   204,   146,    94,    -1,   197,
      95,   147,   123,    70,   173,    -1,   197,    95,   123,    70,
     173,    -1,   197,    95,   147,   123,    -1,   197,    95,   123,
      -1,    61,    -1,    49,    -1,    17,   123,    -1,   205,    41,
     206,    28,    -1,   151,    -1,   153,    -1,   154,    -1,   157,
      -1,   158,    -1,   162,    -1,   164,    -1,   166,    -1,   167,
      -1,    89,    -1,   191,   152,   173,    89,    -1,    70,    -1,
      81,    -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,
      86,    -1,    87,    -1,    88,    -1,    17,    89,    -1,    17,
     173,    89,    -1,   155,    89,    -1,   117,    92,   207,    94,
      -1,   173,    -1,    65,    70,   173,    -1,    53,   173,    21,
     206,    56,   206,    28,    53,    -1,    53,   173,    21,   206,
      28,    53,    -1,     7,   173,    23,   208,    28,     7,    -1,
      13,   160,    71,   206,    -1,   209,   161,    -1,   173,    68,
     173,    -1,   173,    -1,    39,    -1,    65,    90,   163,   206,
      28,     5,    -1,   163,   206,    28,     5,    -1,    40,    65,
      90,   123,    19,   173,    -1,    40,    65,    19,   173,    -1,
      51,    65,    90,   123,    19,   129,    15,    -1,    51,    65,
      19,   129,    -1,    51,    65,    90,   123,    19,   129,    -1,
      51,    65,    19,   129,    15,    -1,    37,   173,    -1,    55,
     165,    89,    -1,    55,    89,    -1,    52,    14,    65,   165,
      89,    -1,    52,    89,    -1,    52,    14,    65,    89,    -1,
      52,   165,    89,    -1,    13,   173,    -1,    34,   117,    89,
      -1,    45,   206,   168,    28,    45,    -1,   169,   172,    -1,
     169,    -1,   172,    -1,   210,   171,    -1,    25,    92,   117,
      94,   206,    -1,    25,   206,    -1,    30,   206,    -1,   174,
      -1,   174,    80,   175,    -1,   175,    -1,   175,    79,   176,
      -1,   176,    -1,    96,   177,    -1,   177,    -1,   179,   178,
     179,    -1,   179,    -1,    97,    -1,    98,    -1,    76,    -1,
      77,    -1,    99,    -1,    78,    -1,   181,   180,   181,    -1,
     181,    -1,    74,    -1,    75,    -1,   183,   182,   183,    -1,
     183,    -1,   100,    -1,   101,    -1,   185,   184,   185,    -1,
     185,    -1,   102,    -1,   103,    -1,   104,    -1,   186,   105,
     185,    -1,   186,    -1,   188,   187,    -1,   188,    -1,    72,
      -1,    73,    -1,   101,   189,    -1,   189,    -1,   190,    -1,
     191,    -1,    38,   155,    -1,   155,    -1,   192,    -1,    92,
     173,    94,    -1,    62,    -1,    27,    -1,    66,    -1,    67,
      -1,    63,    -1,    64,    -1,   117,    -1,   191,   106,    65,
      -1,   191,   107,   213,   108,    -1,   191,   109,   214,   110,
      -1,   107,   193,   215,   108,    -1,   107,   213,   108,    -1,
     109,   211,   110,    -1,   109,   212,   110,    -1,   173,    -1,
      53,   173,    21,   173,    56,   173,    -1,    53,   173,    21,
     173,    -1,    64,    71,   173,    -1,    65,    71,   173,    -1,
     196,   116,    -1,    -1,   197,   111,    65,    -1,    65,    -1,
     198,   121,    -1,   121,    -1,   199,   111,   117,    -1,   117,
      -1,   200,   134,    -1,   134,    -1,   201,   111,   136,    -1,
     136,    -1,   202,   139,    -1,   139,    -1,   203,   111,   142,
      -1,    -1,   204,   146,    89,    -1,    -1,   205,   121,    -1,
      -1,   206,   150,    -1,   150,    -1,   207,   111,   156,    -1,
      -1,   208,   159,    -1,   159,    -1,   209,   161,    90,    -1,
      -1,   210,   170,    -1,    -1,   211,   111,   194,    -1,   194,
      -1,   212,   111,   195,    -1,   195,    -1,   213,   111,   173,
      -1,   195,    -1,   214,   111,    64,    -1,    64,    -1,   215,
     163,    -1,   163,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    28,    31,    32,    35,    36,    39,    40,
      41,    44,    45,    48,    51,    52,    55,    58,    59,    60,
      67,    68,    69,    72,    72,    79,    80,    83,    83,    83,
      86,    87,    88,    89,    90,    91,    94,    94,    97,    97,
      97,    97,   100,   101,   104,   105,   108,   111,   111,   111,
     113,   116,   117,   120,   121,   124,   125,   133,   134,   135,
     136,   139,   142,   143,   146,   146,   146,   149,   150,   151,
     154,   154,   154,   154,   154,   154,   161,   164,   165,   166,
     167,   170,   173,   174,   175,   176,   179,   179,   182,   185,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     204,   207,   207,   208,   208,   208,   208,   209,   209,   209,
     212,   213,   216,   219,   222,   223,   226,   227,   230,   233,
     236,   239,   240,   241,   244,   245,   248,   249,   250,   251,
     252,   253,   254,   257,   258,   259,   260,   261,   262,   265,
     268,   271,   274,   275,   276,   279,   282,   285,   288,   296,
     299,   300,   303,   304,   307,   308,   311,   312,   315,   315,
     315,   315,   315,   315,   318,   319,   322,   322,   325,   326,
     329,   329,   332,   333,   336,   336,   336,   339,   340,   343,
     344,   347,   347,   350,   351,   354,   355,   356,   357,   358,
     359,   362,   362,   362,   362,   362,   362,   365,   366,   367,
     368,   371,   372,   373,   374,   377,   378,   379,   382,   385,
     393,   394,   397,   398,   401,   402,   405,   406,   409,   410,
     413,   414,   417,   418,   421,   422,   425,   426,   429,   430,
     433,   434,   437,   438,   441,   442,   445,   446,   449,   450,
     453,   454,   457,   458,   461,   462,   465,   466,   469,   470
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
  "declaracion_rep", "nombre_rep_comas", "campo_rep",
  "elemento_enumeracion_rep_comas", "declaracion_componente_rep",
  "modificador_ast_comas", "declaracion_parametros_ast_puntocoma",
  "declaracion_ast", "instruccion_rep", "definicion_parametro_ast_comas",
  "caso_rep", "entrada_rep_dospuntos",
  "clausulas_excepcion_especifica_ast", "clave_valor_rep_comas",
  "campo_valor_rep_comas", "expresion_rep_comas", "ctc_cadena_rep_comas",
  "clausula_iteracion_rep", 0
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
     116,   117,   117,   118,   119,   119,   120,   121,   121,   121,
     122,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   127,   127,   128,   128,
     128,   128,   129,   129,   130,   130,   131,   132,   132,   132,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     137,   138,   139,   139,   140,   140,   140,   141,   141,   141,
     142,   142,   142,   142,   142,   142,   143,   144,   144,   144,
     144,   145,   146,   146,   146,   146,   147,   147,   148,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     153,   153,   154,   155,   156,   156,   157,   157,   158,   159,
     160,   161,   161,   161,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   164,   164,   164,   164,   164,   164,   165,
     166,   167,   168,   168,   168,   169,   170,   171,   172,   173,
     174,   174,   175,   175,   176,   176,   177,   177,   178,   178,
     178,   178,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   184,   185,   185,   186,
     186,   187,   187,   188,   188,   189,   189,   189,   189,   189,
     189,   190,   190,   190,   190,   190,   190,   191,   191,   191,
     191,   192,   192,   192,   192,   193,   193,   193,   194,   195,
     196,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   213,   214,   214,   215,   215
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     4,     2,     0,     4,     6,
       6,     1,     3,     4,     2,     3,     3,     1,     1,     1,
       7,     4,     6,     1,     1,     5,     4,     1,     1,     1,
       5,     3,     4,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     5,     3,     8,     3,     3,     1,     1,     1,
       4,     6,     4,     6,     4,     3,     1,     6,     5,     5,
       4,     3,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     4,     3,     2,     2,
       1,     4,     6,     5,     4,     3,     1,     1,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     4,     1,     3,     8,     6,     6,     4,
       2,     3,     1,     1,     6,     4,     6,     4,     7,     4,
       6,     5,     2,     3,     2,     5,     2,     4,     3,     2,
       3,     5,     2,     1,     1,     2,     5,     2,     2,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       4,     4,     3,     3,     3,     1,     6,     4,     3,     3,
       2,     0,     3,     1,     2,     1,     3,     1,     2,     1,
       3,     1,     2,     1,     3,     0,     3,     0,     2,     0,
       2,     1,     3,     0,     2,     1,     3,     0,     2,     0,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     2,     3,     0,     0,     1,   211,
     211,    13,     0,     5,   229,     0,     0,     0,     0,     0,
     213,     0,   210,     0,   215,    17,    18,    19,     0,    14,
       6,     0,     0,    11,   217,     0,     0,    80,   229,     0,
       0,    15,     0,     0,   214,     0,   228,     0,     0,    16,
       0,     0,     0,   227,    79,    78,     0,     0,     0,    38,
      39,     0,     0,    40,     0,    41,     0,     0,    23,     0,
      24,    27,    35,    28,    29,   212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    99,   197,   231,
      90,    91,    92,     0,    93,    94,    95,     0,    96,    97,
      98,     0,     0,     0,    12,   216,     0,     8,    88,     0,
      77,    76,   225,     0,     0,    26,    47,    48,    49,     0,
       0,     0,     0,     0,     0,     0,    21,    36,    37,     0,
      33,   192,     0,   191,   195,   196,   193,   194,     0,     0,
       0,     0,     0,   188,     0,   149,   151,   153,   155,   157,
     165,   169,   173,   178,   180,   184,   185,   186,   189,   110,
       0,     0,   132,     0,   239,     0,     0,     0,   136,     0,
       0,   134,     0,     0,   233,   112,     0,   101,   102,   103,
     104,   105,   106,   107,   108,   109,     0,     0,     0,     0,
      89,   230,     0,     0,     0,     0,    66,    65,    64,   225,
       0,    68,    67,   225,   223,   225,    63,   225,     0,     0,
      56,   221,     0,   219,     0,     0,    25,     0,    46,    45,
       0,    31,     0,     0,    34,     0,     0,   187,     0,   154,
     183,     0,    11,   205,     0,   245,     0,     0,     0,   241,
     243,     0,     0,     0,     0,     0,   160,   161,   163,   158,
     159,   162,     0,   166,   167,     0,   170,   171,     0,   174,
     175,   176,     0,     0,   181,   182,   179,   111,   140,     0,
       0,     0,     0,   143,   144,     0,     0,     0,   139,     0,
     138,     0,   133,     0,     0,     0,   198,     0,   247,     0,
       0,    10,     9,   226,    81,     0,   225,   225,     0,   225,
      62,     0,   222,     0,    69,     0,     0,     0,     0,     0,
       0,   218,     0,    32,     0,     0,    22,     0,   190,     0,
       0,   249,     0,   202,     0,     0,   203,     0,   204,     0,
     237,   235,     0,   150,   152,   156,   164,   168,   172,   177,
     127,     0,   148,     0,   142,     0,   238,   145,   129,     0,
     137,     0,     0,     0,   113,     0,   125,   199,   200,     0,
     100,    87,    86,    85,     0,   225,     0,    61,     0,    60,
      73,    70,    71,    74,    75,    72,   224,     0,    55,    54,
     220,     0,    50,    20,    30,     0,    43,     0,   209,   201,
     248,   244,   208,   240,   242,     0,     0,     0,   234,     0,
     141,     0,   147,   131,     0,   135,     0,     0,     0,    11,
     232,   114,   246,     0,    84,     0,    59,    58,     0,     0,
      52,     0,     0,   207,     0,   123,   120,   122,   118,   126,
       0,   130,   117,     0,   124,     0,    83,     0,    57,    53,
       0,     0,    42,     0,   119,   236,     0,     0,   128,     0,
     115,    82,    51,    44,   206,   121,   146,   116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    22,    88,     5,    11,    23,    24,
     201,    69,   202,    70,    71,   130,    72,   224,    73,    74,
     115,   116,   213,   117,   211,   118,   203,   204,   205,   206,
     376,    27,    38,    54,   194,   364,    55,    30,    89,    90,
     189,    91,    92,   143,   410,    94,    95,   331,   395,   426,
      96,    97,    98,   169,    99,   100,   272,   273,   346,   347,
     274,   225,   145,   146,   147,   148,   252,   149,   255,   150,
     258,   151,   262,   152,   153,   266,   154,   155,   156,   157,
     158,   234,   239,   235,    12,    28,    29,    35,   215,   212,
     207,   208,   109,    31,   102,   284,   332,   396,   275,   241,
     242,   236,   289,   322
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -217
static const yytype_int16 yypact[] =
{
     251,   -14,    -9,    63,  -217,  -217,   -24,    41,  -217,  -217,
     134,  -217,   160,  -217,   140,   147,   144,   181,   157,   187,
    -217,   191,  -217,   -13,  -217,  -217,  -217,  -217,   -43,   -13,
    -217,    76,   144,  -217,   189,   -32,   144,    -2,  -217,   248,
     268,   -13,   707,   215,  -217,   663,  -217,     1,   230,  -217,
     144,    20,   706,  -217,   283,  -217,   245,   120,   726,  -217,
    -217,   706,   296,  -217,   302,  -217,    34,   239,   189,   113,
    -217,  -217,   119,  -217,  -217,  -217,   444,    84,   144,   444,
     271,   663,   276,    14,   444,    18,   243,  -217,   -21,  -217,
    -217,  -217,  -217,   260,  -217,  -217,  -217,   663,  -217,  -217,
    -217,   705,   497,   292,  -217,   189,   297,  -217,  -217,   292,
    -217,  -217,   246,    21,   292,  -217,  -217,  -217,  -217,   289,
     314,   706,   706,   167,   444,   444,  -217,  -217,  -217,   444,
    -217,  -217,   144,  -217,  -217,  -217,  -217,  -217,   444,   211,
     629,   377,    80,  -217,   370,   317,   320,  -217,  -217,   278,
     249,    58,   279,   305,   254,  -217,  -217,   190,  -217,  -217,
     312,    26,  -217,    22,   526,    23,   444,   340,  -217,   318,
     392,  -217,   327,   184,  -217,  -217,   548,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,   352,   354,   356,   444,
    -217,  -217,   107,   332,    25,   172,  -217,  -217,  -217,   476,
     144,  -217,  -217,   169,  -217,   110,  -217,   198,    -7,   123,
     353,  -217,   -15,  -217,    67,    45,  -217,   444,  -217,  -217,
     444,   379,   359,   342,  -217,   361,   -21,  -217,   338,  -217,
    -217,   444,   362,  -217,   184,  -217,   174,   364,   362,  -217,
    -217,   242,   257,   432,   444,   444,  -217,  -217,  -217,  -217,
    -217,  -217,   211,  -217,  -217,   211,  -217,  -217,   211,  -217,
    -217,  -217,   211,   211,  -217,  -217,  -217,  -217,  -217,   444,
     706,   663,   420,   416,  -217,   424,   444,   706,  -217,    19,
    -217,   663,  -217,   663,   101,   446,  -217,   214,  -217,   261,
     366,  -217,  -217,  -217,  -217,   418,   169,   222,   109,   300,
    -217,   445,  -217,   607,  -217,   391,   444,   437,   391,   706,
     410,  -217,   373,  -217,   444,   444,  -217,   444,  -217,   442,
     444,  -217,   -28,  -217,   444,   444,  -217,   400,  -217,   354,
    -217,  -217,    48,   320,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,   451,   663,   430,  -217,    32,  -217,  -217,   450,   462,
    -217,   398,   440,   577,  -217,   581,  -217,  -217,  -217,   425,
    -217,  -217,  -217,   427,   706,   301,   480,  -217,   482,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,   -10,  -217,  -217,
    -217,   117,  -217,  -217,  -217,   401,   431,   444,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,   429,    98,   491,  -217,   444,
    -217,   144,   663,  -217,   444,  -217,   448,   663,   498,   443,
    -217,  -217,  -217,   444,   447,   494,  -217,  -217,   490,   444,
    -217,   501,   444,   460,   663,  -217,   433,   453,  -217,  -217,
     -39,   504,  -217,   634,  -217,   444,  -217,   444,  -217,  -217,
     435,   706,  -217,   444,   663,  -217,   444,   663,  -217,   473,
    -217,  -217,  -217,  -217,  -217,  -217,   663,  -217
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,  -217,  -217,  -217,   -16,  -217,  -217,  -217,   200,
     224,   -47,   367,   469,   319,   407,   466,  -216,  -217,  -217,
    -217,  -217,   323,  -217,   231,  -217,   345,  -197,  -217,   341,
    -217,   339,  -217,  -217,  -217,  -217,   500,   519,   -83,  -217,
    -217,  -217,  -217,   -44,  -217,  -217,  -217,   226,  -217,  -217,
    -217,  -167,  -217,   -82,  -217,  -217,  -217,  -217,  -217,  -217,
     286,    15,  -217,   325,   316,   434,  -217,   322,  -217,   309,
    -217,   329,  -217,   125,  -217,  -217,  -217,   449,  -217,   -38,
    -217,  -217,   253,  -140,   560,   -92,   549,   375,  -217,   285,
    -178,  -217,  -217,  -217,   -73,  -217,  -217,  -217,  -217,  -217,
    -217,   396,  -217,  -217
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -8
static const yytype_int16 yytable[] =
{
      34,    93,   240,   172,   313,   108,   283,   101,   164,    79,
     302,   192,    80,   307,   120,    52,    47,   195,   418,   191,
      51,   297,   214,    82,   176,   299,    68,   166,   167,   106,
      48,   166,   166,   103,   105,   209,    68,    93,    59,    76,
      60,   269,   276,   101,    18,    68,    19,    42,    48,    77,
      18,     6,    20,    93,    63,   447,     7,    49,    93,   101,
     348,   330,   161,     8,   101,     9,    78,   321,    43,    79,
      48,   174,    80,   310,   218,   219,   397,    81,    21,    50,
     389,   191,    65,    82,    83,    84,   210,    85,   227,    48,
      53,   144,   160,   191,   162,    48,   308,    86,   384,   170,
     302,   308,   302,   168,   303,    68,    68,   171,   350,   107,
      20,   131,   270,   277,   293,   268,   226,    45,   365,   294,
      93,    87,   132,   214,   401,   131,   101,    59,   112,    60,
      10,   127,    93,    18,    -7,    19,   132,   425,   101,   222,
     223,    20,   113,    63,   237,   238,   133,   134,   135,    33,
     136,   137,   128,   228,    15,   390,   233,   309,   256,   257,
     133,   134,   135,    33,   136,   137,   129,    21,   302,    19,
     114,    65,    17,   159,    15,    20,   138,    66,    43,   127,
     139,   278,    32,   125,    34,   140,    16,   419,   431,   394,
     138,   141,    17,   142,   139,   354,   291,   351,   342,   140,
     128,    21,   126,   367,   290,   141,   420,   142,   352,    33,
     353,   196,   355,   197,   220,   198,    36,    18,    43,    19,
      50,    79,    37,   341,    80,    20,   301,    93,    19,    44,
     349,    46,   312,   101,    20,    82,    25,    93,   131,    93,
     196,    44,   197,   101,   198,   101,   319,    25,   363,   132,
     366,    21,    39,    25,    68,    25,    40,    19,    48,   191,
      21,    68,   381,    20,   196,    25,   197,   295,   198,   191,
     191,    57,   402,   133,   134,   135,    33,   136,   137,    68,
      75,    19,   323,    43,   340,   324,     1,    20,   196,    21,
     197,    58,   198,    68,     2,   104,   186,   187,    93,   188,
      52,    93,   111,   138,   101,    19,   199,   101,    93,    93,
     121,    20,   140,    21,   101,   101,   122,   414,   141,   191,
     142,   378,   357,   253,   254,   324,   264,   265,   368,   415,
     385,   124,   386,   173,   433,   388,   163,    21,   200,   391,
     392,   165,   196,   196,   197,   197,   198,   198,    68,   175,
     191,   444,   326,   327,   246,   247,   248,    20,    93,    19,
      19,   191,   193,    93,   101,    20,    20,   328,   329,   101,
     411,   358,   359,   191,   456,   249,   250,   251,   216,    26,
      93,   259,   260,   261,   217,   430,   101,   338,   339,    93,
      26,    21,    21,   243,   453,   101,    26,   244,    26,   245,
      93,   267,   423,    93,   131,   279,   101,   280,    26,   101,
     263,   427,    93,   281,   429,   132,   282,   286,   101,   238,
     288,   292,    59,   306,    60,    68,   314,   315,   436,   317,
     231,   316,   318,   320,   440,   325,    62,   442,    63,   133,
     134,   135,   232,   136,   137,   330,   271,    76,   343,   345,
     450,   356,   451,   369,    64,   360,   210,    77,   454,   379,
     382,   455,   383,   387,   237,   403,    65,   361,   406,   138,
     399,   131,    66,   139,    78,   400,    67,    79,   140,   362,
      80,   404,   132,    33,   141,    81,   142,   405,   416,   412,
     417,    82,    83,    84,   421,    85,   407,   413,   428,   422,
     424,   432,   438,   434,    76,    86,   133,   134,   135,    33,
     136,   137,   439,   435,    77,   441,   443,   437,   196,   448,
     197,   446,   198,   445,   452,   190,   457,   119,   305,    87,
     221,    78,   123,    76,    79,    19,   138,    80,   311,   380,
     139,    20,    81,    77,   296,   140,   300,   304,    82,    83,
      84,   141,    85,   142,   110,    76,   271,    56,   398,   344,
      78,   334,    86,    79,   336,    77,    80,    21,   200,   333,
      14,    81,    41,   229,   335,   298,   285,    82,    83,    84,
     393,    85,    78,   287,    76,    79,    87,   337,    80,   230,
     377,    86,     0,    81,    77,     0,     0,     0,     0,    82,
      83,    84,     0,    85,     0,   408,     0,     0,   131,     0,
     370,    78,     0,    86,    79,    87,     0,    80,   371,   132,
       0,     0,    81,   372,     0,     0,     0,     0,    82,    83,
      84,   373,    85,     0,     0,     0,   374,    87,   375,     0,
       0,    76,    86,   133,   134,   135,   409,   136,   137,     0,
       0,    77,     0,     0,     0,     0,   131,     0,     0,     0,
       0,     0,   449,     0,     0,     0,    87,   132,    78,     0,
      76,    79,     0,   138,    80,     0,     0,   139,     0,    81,
      77,     0,   140,     0,     0,    82,    83,    84,   141,    85,
     142,   133,   134,   135,    33,   136,   137,    78,     0,    86,
      79,     0,     0,    80,     0,     0,     0,     0,    81,     0,
      59,    59,    60,    60,    82,    83,    84,    61,    85,     0,
       0,   138,     0,    87,    62,    62,    63,    63,    86,     0,
      59,     0,    60,     0,     0,     0,   141,     0,   142,     0,
       0,     0,    64,    64,    62,     0,    63,     0,     0,     0,
       0,     0,    87,     0,    65,    65,     0,     0,     0,     0,
      66,    66,    64,     0,    67,    67,     0,     0,     0,     0,
       0,    33,    33,     0,    65,   177,     0,     0,     0,     0,
      66,     0,     0,     0,    67,     0,   178,   179,   180,   181,
     182,   183,   184,   185,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   186,   187,     0,   188
};

static const yytype_int16 yycheck[] =
{
      16,    45,   142,    85,   220,    52,   173,    45,    81,    37,
     207,   103,    40,    28,    61,    17,    32,   109,    28,   102,
      36,   199,   114,    51,    97,   203,    42,    13,    14,     9,
      69,    13,    13,    32,    50,    14,    52,    81,     4,     7,
       6,    19,    19,    81,    57,    61,    59,    90,    69,    17,
      57,    65,    65,    97,    20,    94,    65,    89,   102,    97,
     276,    13,    78,     0,   102,    89,    34,   234,   111,    37,
      69,    92,    40,    28,   121,   122,    28,    45,    91,   111,
     108,   164,    48,    51,    52,    53,    65,    55,   132,    69,
      92,    76,    77,   176,    79,    69,   111,    65,   314,    84,
     297,   111,   299,    89,   111,   121,   122,    89,    89,    89,
      65,    27,    90,    90,    89,    89,   132,    41,   296,    94,
     164,    89,    38,   215,    92,    27,   164,     4,     8,     6,
      89,    12,   176,    57,     0,    59,    38,    39,   176,   124,
     125,    65,    22,    20,    64,    65,    62,    63,    64,    65,
      66,    67,    33,   138,    14,   322,   141,    90,   100,   101,
      62,    63,    64,    65,    66,    67,    47,    91,   365,    59,
      50,    48,    32,    89,    14,    65,    92,    54,   111,    12,
      96,   166,    35,    70,   200,   101,    26,    70,   404,   329,
      92,   107,    32,   109,    96,    94,    89,   279,   271,   101,
      33,    91,    89,    94,   189,   107,    89,   109,   281,    65,
     283,    42,   111,    44,    47,    46,    35,    57,   111,    59,
     111,    37,    65,   270,    40,    65,    28,   271,    59,    29,
     277,    31,   217,   271,    65,    51,    12,   281,    27,   283,
      42,    41,    44,   281,    46,   283,   231,    23,   295,    38,
      28,    91,    65,    29,   270,    31,    65,    59,    69,   342,
      91,   277,   309,    65,    42,    41,    44,    95,    46,   352,
     353,    23,   345,    62,    63,    64,    65,    66,    67,   295,
      65,    59,   108,   111,   269,   111,    35,    65,    42,    91,
      44,    23,    46,   309,    43,    65,   106,   107,   342,   109,
      17,   345,    57,    92,   342,    59,    60,   345,   352,   353,
      14,    65,   101,    91,   352,   353,    14,   364,   107,   402,
     109,   306,   108,    74,    75,   111,    72,    73,    28,    28,
     315,    92,   317,    90,   407,   320,    65,    91,    92,   324,
     325,    65,    42,    42,    44,    44,    46,    46,   364,    89,
     433,   424,   110,   111,    76,    77,    78,    65,   402,    59,
      59,   444,    65,   407,   402,    65,    65,   110,   111,   407,
     355,   110,   111,   456,   447,    97,    98,    99,    89,    12,
     424,   102,   103,   104,    70,   401,   424,   262,   263,   433,
      23,    91,    91,    23,   441,   433,    29,    80,    31,    79,
     444,    89,   387,   447,    27,    65,   444,    89,    41,   447,
     105,   396,   456,    21,   399,    38,    89,    65,   456,    65,
      64,    89,     4,    70,     6,   441,    47,    68,   413,    68,
      53,    89,    94,    71,   419,    71,    18,   422,    20,    62,
      63,    64,    65,    66,    67,    13,    30,     7,    28,    25,
     435,     5,   437,     8,    36,    89,    65,    17,   443,    22,
      50,   446,    89,    21,    64,    15,    48,    49,    28,    92,
      19,    27,    54,    96,    34,    45,    58,    37,   101,    61,
      40,    19,    38,    65,   107,    45,   109,    89,     8,    64,
       8,    51,    52,    53,    93,    55,    56,    70,     7,    68,
      71,    53,     8,     5,     7,    65,    62,    63,    64,    65,
      66,    67,    22,    70,    17,    14,    56,    70,    42,    15,
      44,    68,    46,    90,    89,    28,    53,    58,   209,    89,
     123,    34,    66,     7,    37,    59,    92,    40,   215,   308,
      96,    65,    45,    17,   199,   101,   205,   208,    51,    52,
      53,   107,    55,   109,    54,     7,    30,    38,   332,   273,
      34,   245,    65,    37,   255,    17,    40,    91,    92,   244,
      10,    45,    23,   139,   252,   200,    28,    51,    52,    53,
     327,    55,    34,   187,     7,    37,    89,   258,    40,   140,
     305,    65,    -1,    45,    17,    -1,    -1,    -1,    -1,    51,
      52,    53,    -1,    55,    -1,    28,    -1,    -1,    27,    -1,
       3,    34,    -1,    65,    37,    89,    -1,    40,    11,    38,
      -1,    -1,    45,    16,    -1,    -1,    -1,    -1,    51,    52,
      53,    24,    55,    -1,    -1,    -1,    29,    89,    31,    -1,
      -1,     7,    65,    62,    63,    64,    65,    66,    67,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    89,    38,    34,    -1,
       7,    37,    -1,    92,    40,    -1,    -1,    96,    -1,    45,
      17,    -1,   101,    -1,    -1,    51,    52,    53,   107,    55,
     109,    62,    63,    64,    65,    66,    67,    34,    -1,    65,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
       4,     4,     6,     6,    51,    52,    53,    10,    55,    -1,
      -1,    92,    -1,    89,    18,    18,    20,    20,    65,    -1,
       4,    -1,     6,    -1,    -1,    -1,   107,    -1,   109,    -1,
      -1,    -1,    36,    36,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    48,    48,    -1,    -1,    -1,    -1,
      54,    54,    36,    -1,    58,    58,    -1,    -1,    -1,    -1,
      -1,    65,    65,    -1,    48,    70,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,   109
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   113,   114,   118,    65,    65,     0,    89,
      89,   119,   196,   115,   196,    14,    26,    32,    57,    59,
      65,    91,   116,   120,   121,   122,   124,   143,   197,   198,
     149,   205,    35,    65,   117,   199,    35,    65,   144,    65,
      65,   198,    90,   111,   121,    41,   121,   117,    69,    89,
     111,   117,    17,    92,   145,   148,   149,    23,    23,     4,
       6,    10,    18,    20,    36,    48,    54,    58,   117,   123,
     125,   126,   128,   130,   131,    65,     7,    17,    34,    37,
      40,    45,    51,    52,    53,    55,    65,    89,   117,   150,
     151,   153,   154,   155,   157,   158,   162,   163,   164,   166,
     167,   191,   206,    32,    65,   117,     9,    89,   123,   204,
     148,    57,     8,    22,    50,   132,   133,   135,   137,   125,
     123,    14,    14,   128,    92,    70,    89,    12,    33,    47,
     127,    27,    38,    62,    63,    64,    66,    67,    92,    96,
     101,   107,   109,   155,   173,   174,   175,   176,   177,   179,
     181,   183,   185,   186,   188,   189,   190,   191,   192,    89,
     173,   117,   173,    65,   206,    65,    13,    14,    89,   165,
     173,    89,   165,    90,    92,    89,   206,    70,    81,    82,
      83,    84,    85,    86,    87,    88,   106,   107,   109,   152,
      28,   150,   197,    65,   146,   197,    42,    44,    46,    60,
      92,   122,   124,   138,   139,   140,   141,   202,   203,    14,
      65,   136,   201,   134,   197,   200,    89,    70,   123,   123,
      47,   127,   173,   173,   129,   173,   117,   155,   173,   177,
     189,    53,    65,   173,   193,   195,   213,    64,    65,   194,
     195,   211,   212,    23,    80,    79,    76,    77,    78,    97,
      98,    99,   178,    74,    75,   180,   100,   101,   182,   102,
     103,   104,   184,   105,    72,    73,   187,    89,    89,    19,
      90,    30,   168,   169,   172,   210,    19,    90,   173,    65,
      89,    21,    89,   163,   207,    28,    65,   213,    64,   214,
     173,    89,    89,    89,    94,    95,   138,   202,   199,   202,
     141,    28,   139,   111,   143,   126,    70,    28,   111,    90,
      28,   134,   173,   129,    47,    68,    89,    68,    94,   173,
      71,   163,   215,   108,   111,    71,   110,   111,   110,   111,
      13,   159,   208,   175,   176,   179,   181,   183,   185,   185,
     173,   123,   206,    28,   172,    25,   170,   171,   129,   123,
      89,   165,   206,   206,    94,   111,     5,   108,   110,   111,
      89,    49,    61,   123,   147,   202,    28,    94,    28,     8,
       3,    11,    16,    24,    29,    31,   142,   201,   173,    22,
     136,   123,    50,    89,   129,   173,   173,    21,   173,   108,
     163,   173,   173,   194,   195,   160,   209,    28,   159,    19,
      45,    92,   206,    15,    19,    89,    28,    56,    28,    65,
     156,   173,    64,    70,   123,    28,     8,     8,    28,    70,
      89,    93,    68,   173,    71,    39,   161,   173,     7,   173,
     117,   129,    53,   206,     5,    70,   173,    70,     8,    22,
     173,    14,   173,    56,   206,    90,    68,    94,    15,    28,
     173,   173,    89,   123,   173,   173,   206,    53
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
#line 2032 "chusco.tab.c"
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


#line 474 "chusco.y"


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


