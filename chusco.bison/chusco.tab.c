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
#define YYLAST   771

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNRULES -- Number of states.  */
#define YYNSTATES  425

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      93,    96,   107,   105,    90,   106,   111,   108,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    89,
     102,   104,   103,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   112,   109,   113,   110,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,     2,   115,   101,     2,     2,     2,
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
      85,    86,    87,    88,    92,    94,    95,    97,    98,    99,
     100
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     8,    13,    16,    17,    20,
      21,    26,    33,    40,    44,    46,    49,    53,    54,    59,
      62,    66,    69,    70,    73,    75,    79,    83,    85,    87,
      89,    91,    99,   104,   111,   115,   117,   119,   121,   127,
     132,   134,   136,   138,   144,   149,   154,   158,   160,   162,
     164,   166,   168,   170,   172,   178,   182,   191,   195,   199,
     204,   207,   209,   216,   221,   224,   226,   228,   230,   232,
     239,   244,   247,   249,   253,   255,   262,   268,   274,   279,
     282,   284,   288,   291,   293,   296,   298,   300,   302,   304,
     306,   308,   311,   314,   315,   317,   319,   321,   323,   325,
     327,   332,   336,   339,   342,   344,   349,   353,   354,   361,
     367,   372,   376,   380,   382,   384,   386,   389,   394,   397,
     398,   400,   402,   404,   406,   408,   410,   412,   414,   416,
     418,   423,   425,   427,   429,   431,   433,   435,   437,   439,
     441,   444,   448,   451,   456,   460,   464,   466,   468,   472,
     475,   477,   486,   494,   497,   499,   506,   511,   515,   516,
     519,   523,   525,   527,   534,   539,   546,   551,   559,   564,
     571,   577,   580,   584,   587,   593,   596,   601,   605,   608,
     612,   618,   620,   623,   625,   629,   631,   635,   637,   640,
     642,   645,   647,   649,   651,   653,   655,   657,   659,   663,
     665,   667,   669,   673,   675,   677,   679,   683,   685,   687,
     689,   691,   695,   697,   700,   702,   704,   706,   709,   711,
     713,   715,   719,   724,   729,   734,   738,   740,   742,   744,
     746,   748,   750,   752,   756,   761,   766
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     117,     0,    -1,   118,    -1,   125,    -1,    -1,    43,    65,
      89,   119,    -1,   120,   168,    -1,    -1,   120,   121,    -1,
      -1,    32,    35,   123,    89,    -1,    32,    35,   123,     9,
      65,    89,    -1,    14,    35,   123,    32,   122,    89,    -1,
     122,    90,    65,    -1,    65,    -1,   124,    65,    -1,   124,
      65,    69,    -1,    -1,    35,    65,    89,   126,    -1,   127,
     128,    -1,   127,   129,   128,    -1,   127,   121,    -1,    -1,
     128,   131,    -1,   131,    -1,    26,   130,    89,    -1,   130,
      90,   123,    -1,   123,    -1,   132,    -1,   135,    -1,   160,
      -1,   133,    91,    10,   134,    70,   194,    89,    -1,   133,
      91,   134,    89,    -1,   133,    91,   134,    70,   194,    89,
      -1,   133,    90,    65,    -1,    65,    -1,   123,    -1,   136,
      -1,    92,    65,    23,   136,    89,    -1,    92,    65,    23,
     147,    -1,   137,    -1,   141,    -1,   142,    -1,    54,   139,
     138,    47,   140,    -1,   139,   138,    47,   140,    -1,    54,
     139,    47,   140,    -1,    54,   139,   138,    -1,   139,    -1,
      12,    -1,    33,    -1,     4,    -1,     6,    -1,    20,    -1,
      48,    -1,   194,    68,   194,    68,   194,    -1,   194,    68,
     194,    -1,    58,    93,   194,    68,   194,    94,    14,   134,
      -1,    36,    14,   134,    -1,    18,    14,   134,    -1,    50,
     144,    28,    50,    -1,   144,   145,    -1,   145,    -1,   146,
      91,   134,    70,   194,    89,    -1,   146,    91,   134,    89,
      -1,   146,    65,    -1,    65,    -1,   143,    -1,   148,    -1,
     151,    -1,    22,    14,   137,   149,    95,    22,    -1,    22,
     149,    95,    22,    -1,   149,   150,    -1,   150,    -1,    65,
      70,   194,    -1,    65,    -1,     8,    60,   153,   152,    28,
       8,    -1,     8,   153,   152,    28,     8,    -1,     8,    60,
     152,    28,     8,    -1,     8,   152,    28,     8,    -1,   152,
     155,    -1,   155,    -1,    93,   154,    96,    -1,   154,   123,
      -1,   123,    -1,   156,   157,    -1,   157,    -1,    46,    -1,
      44,    -1,    42,    -1,   135,    -1,   132,    -1,   158,   160,
      -1,   158,   159,    -1,    -1,    11,    -1,    16,    -1,    31,
      -1,     3,    -1,    24,    -1,    29,    -1,    57,   161,   168,
      57,    -1,    65,   162,   167,    -1,    65,   167,    -1,    65,
     162,    -1,    65,    -1,    97,   163,   164,    94,    -1,   163,
     164,    98,    -1,    -1,   165,    99,   166,   134,    70,   194,
      -1,   165,    99,   134,    70,   194,    -1,   165,    99,   166,
     134,    -1,   165,    99,   134,    -1,   165,    90,    65,    -1,
      65,    -1,    61,    -1,    49,    -1,    17,   134,    -1,   169,
      41,   178,    95,    -1,   169,   131,    -1,    -1,   171,    -1,
     173,    -1,   174,    -1,   179,    -1,   181,    -1,   186,    -1,
     188,    -1,   190,    -1,   191,    -1,    98,    -1,   212,   172,
     194,    98,    -1,    70,    -1,    81,    -1,    82,    -1,    83,
      -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    17,    98,    -1,    17,   194,    98,    -1,   175,    98,
      -1,   123,    93,   176,    96,    -1,   123,    93,    96,    -1,
     176,    90,   177,    -1,   177,    -1,   194,    -1,    65,    70,
     194,    -1,   178,   170,    -1,   170,    -1,    53,   194,    21,
     178,    56,   178,    28,    53,    -1,    53,   194,    21,   178,
      56,    28,    53,    -1,   180,   182,    -1,   182,    -1,     7,
     194,    23,   180,    28,     7,    -1,    13,   184,    71,   178,
      -1,   183,   185,    99,    -1,    -1,   183,   185,    -1,   194,
      68,   194,    -1,   194,    -1,    39,    -1,    65,    99,   187,
     178,    28,     5,    -1,   187,   178,    28,     5,    -1,    40,
      65,    99,   134,    19,   194,    -1,    40,    65,    19,   194,
      -1,    51,    65,    99,   134,    19,   140,    15,    -1,    51,
      65,    19,   140,    -1,    51,    65,    99,   134,    19,   140,
      -1,    51,    65,    19,   140,    15,    -1,    37,   194,    -1,
      55,   189,    98,    -1,    55,    98,    -1,    52,    14,    65,
     189,    98,    -1,    52,    98,    -1,    52,    14,    65,    98,
      -1,    52,   189,    98,    -1,    13,   194,    -1,    34,   123,
      98,    -1,    45,   178,   192,    95,   100,    -1,   193,    -1,
      30,   178,    -1,   195,    -1,   195,    80,   196,    -1,   196,
      -1,   196,    79,   197,    -1,   197,    -1,   101,   198,    -1,
     198,    -1,   199,   200,    -1,   200,    -1,   102,    -1,   103,
      -1,    76,    -1,    77,    -1,   104,    -1,    78,    -1,   200,
     201,   202,    -1,   202,    -1,    74,    -1,    75,    -1,   202,
     203,   204,    -1,   204,    -1,   105,    -1,   106,    -1,   204,
     205,   206,    -1,   206,    -1,   107,    -1,   108,    -1,   109,
      -1,   207,   110,   206,    -1,   207,    -1,   209,   208,    -1,
     209,    -1,    72,    -1,    73,    -1,   106,   210,    -1,   210,
      -1,   211,    -1,   212,    -1,   212,   111,    65,    -1,   212,
     112,   194,   113,    -1,   212,   114,    64,   115,    -1,   212,
     114,   213,   115,    -1,    93,   194,    96,    -1,    62,    -1,
      27,    -1,    66,    -1,    67,    -1,    63,    -1,    64,    -1,
     123,    -1,   212,   111,    65,    -1,   212,   112,   194,   113,
      -1,   212,   114,    64,   115,    -1,    65,    71,   194,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    27,    30,    31,    34,    35,    38,    39,
      42,    43,    44,    47,    48,    51,    54,    55,    59,    62,
      63,    66,    67,    70,    71,    74,    77,    78,    81,    82,
      83,    90,    91,    92,    95,    96,    99,    99,   106,   107,
     110,   110,   110,   113,   114,   115,   116,   117,   120,   120,
     123,   123,   123,   123,   126,   127,   130,   131,   134,   137,
     140,   141,   144,   145,   148,   149,   152,   152,   152,   154,
     155,   158,   159,   162,   163,   170,   171,   172,   173,   176,
     177,   180,   183,   184,   187,   187,   190,   190,   190,   193,
     194,   195,   198,   199,   202,   202,   202,   202,   202,   202,
     209,   212,   213,   214,   215,   218,   221,   222,   225,   226,
     227,   228,   231,   232,   235,   235,   238,   241,   244,   245,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     264,   267,   267,   268,   268,   268,   268,   269,   269,   269,
     272,   273,   276,   279,   280,   283,   284,   287,   288,   291,
     292,   295,   296,   299,   300,   303,   306,   309,   310,   313,
     316,   317,   318,   321,   322,   325,   326,   327,   328,   329,
     330,   331,   334,   335,   336,   337,   338,   339,   342,   345,
     348,   353,   367,   376,   379,   380,   383,   384,   387,   388,
     391,   392,   395,   395,   395,   395,   395,   395,   398,   399,
     402,   402,   405,   406,   409,   409,   412,   413,   416,   416,
     416,   419,   420,   423,   424,   427,   427,   430,   431,   434,
     435,   436,   437,   438,   439,   440,   443,   443,   443,   443,
     443,   443,   446,   447,   448,   449,   466
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
  "ASIG_DESPI", "ASIG_DESPD", "';'", "','", "':'", "\"tipo\"", "'('",
  "\")\"", "\"fin\"", "')'", "\"(\"", "\";\"", "\":\"", "\"prueba\"",
  "'~'", "'<'", "'>'", "'='", "'+'", "'-'", "'*'", "'/'", "'\\\\'", "'^'",
  "'.'", "'['", "']'", "'{'", "'}'", "$accept", "programa",
  "definicion_programa", "codigo_programa", "codigo_programa_ast",
  "libreria", "libreria_rep_comas", "nombre", "nombre_ast",
  "definicion_libreria", "codigo_libreria", "codigo_libreria_ast",
  "codigo_libreria_rep", "exportaciones", "exportaciones_rep_comas",
  "declaracion", "declaracion_objeto", "declaracion_objeto_rep_comas",
  "especificacion_tipo", "declaracion_tipo", "tipo_no_estructurado",
  "tipo_escalar", "longitud", "tipo_basico", "rango", "tipo_tabla",
  "tipo_diccionario", "tipo_registro", "campo_rep", "campo",
  "identificador_rep", "tipo_estructurado", "tipo_enumerado",
  "elemento_enumeracion_rep", "elemento_enumeracion", "clase",
  "declaracion_componente_rep", "superclases", "nombre_rep",
  "declaracion_componente", "visibilidad", "componente",
  "modificador_asterisco", "modificador", "declaracion_subprograma",
  "cabecera_subprograma", "parametrizacion", "parametrizacion_rep_ast",
  "declaracion_parametros", "declaracion_parametros_rep_comas", "modo",
  "tipo_resultado", "cuerpo_subprograma", "cuerpo_subprograma_ast",
  "instruccion", "instruccion_asignacion", "op_asignacion",
  "instruccion_devolver", "instruccion_llamada", "llamada_subprograma",
  "mi_llamada_subprograma", "definicion_parametro", "instruccion_rep",
  "instruccion_si", "caso_rep", "instruccion_casos", "caso", "entrada_rep",
  "entradas", "entrada", "instruccion_bucle", "clausula_iteracion",
  "instruccion_interrupcion", "cuando",
  "instruccion_lanzamiento_excepcion", "instruccion_captura_excepcion",
  "clausulas", "clausula_finalmente", "expresion", "expresion_or",
  "expresion_and", "expresion_neg", "expresion_comparacion",
  "operador_comparacion", "expresion_desp", "operador_desp",
  "expresion_add", "operador_add", "expresion_mult_div",
  "operador_mult_div", "expresion_potencia", "expresion_posfija",
  "operador_posfijo", "expresion_unaria", "primario", "literal", "objeto",
  "campo_valor", 0
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
      44,    58,   344,    40,   345,   346,    41,   347,   348,   349,
     350,   126,    60,    62,    61,    43,    45,    42,    47,    92,
      94,    46,    91,    93,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   121,   122,   122,   123,   124,   124,   125,   126,
     126,   127,   127,   128,   128,   129,   130,   130,   131,   131,
     131,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   137,   137,   137,   137,   137,   138,   138,
     139,   139,   139,   139,   140,   140,   141,   141,   142,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   151,   151,   152,
     152,   153,   154,   154,   155,   155,   156,   156,   156,   157,
     157,   157,   158,   158,   159,   159,   159,   159,   159,   159,
     160,   161,   161,   161,   161,   162,   163,   163,   164,   164,
     164,   164,   165,   165,   166,   166,   167,   168,   169,   169,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     171,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     173,   173,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   182,   183,   183,   184,
     185,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   188,   188,   188,   188,   188,   188,   189,   190,
     191,   192,   193,   194,   195,   195,   196,   196,   197,   197,
     198,   198,   199,   199,   199,   199,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   210,   210,   210,   210,   210,   211,   211,   211,   211,
     211,   211,   212,   212,   212,   212,   213
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     4,     2,     0,     2,     0,
       4,     6,     6,     3,     1,     2,     3,     0,     4,     2,
       3,     2,     0,     2,     1,     3,     3,     1,     1,     1,
       1,     7,     4,     6,     3,     1,     1,     1,     5,     4,
       1,     1,     1,     5,     4,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     5,     3,     8,     3,     3,     4,
       2,     1,     6,     4,     2,     1,     1,     1,     1,     6,
       4,     2,     1,     3,     1,     6,     5,     5,     4,     2,
       1,     3,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       4,     3,     2,     2,     1,     4,     3,     0,     6,     5,
       4,     3,     3,     1,     1,     1,     2,     4,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     4,     3,     3,     1,     1,     3,     2,
       1,     8,     7,     2,     1,     6,     4,     3,     0,     2,
       3,     1,     1,     6,     4,     6,     4,     7,     4,     6,
       5,     2,     3,     2,     5,     2,     4,     3,     2,     3,
       5,     1,     2,     1,     3,     1,     3,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     3,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     3,     4,     4,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     2,     3,     0,     0,     1,    22,
       9,    18,     0,     5,   119,     0,    17,     0,     0,    35,
       0,    21,    19,     0,    24,    28,     0,    29,    30,     8,
       6,     0,    17,    27,     0,     0,    17,   104,   119,     0,
      23,    20,     0,    17,     0,   118,     0,    15,    25,    17,
       0,    17,   107,   103,   102,     0,     0,    34,    50,    51,
      17,     0,    52,     0,    53,     0,     0,    36,     0,    37,
      40,    47,    41,    42,    17,    17,    17,    17,     0,     0,
       0,     0,    17,     0,     0,   129,   232,   150,   120,   121,
     122,     0,     0,   123,   124,   125,     0,   126,   127,   128,
       0,     0,    16,    26,     0,    10,   116,     0,   101,   100,
      93,     0,     0,     0,    66,    39,    67,    68,     0,    17,
      17,     0,    17,    17,    32,    48,    49,     0,   227,   226,
     230,   231,   228,   229,   194,   195,   197,    17,    17,   192,
     193,   196,    17,   232,     0,   183,   185,   187,   189,    17,
     191,   199,   203,   207,   212,   214,   218,   219,   220,   140,
       0,     0,   171,     0,     0,     0,    17,     0,   175,     0,
       0,   173,     0,     0,     0,   142,   117,   149,     0,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,    17,
       0,    17,    14,     0,     0,   113,     0,     0,    88,    87,
      86,    93,    17,    90,    89,    93,    93,    80,    93,    85,
       0,     0,    74,     0,    72,    65,     0,    61,     0,    38,
      17,    58,    57,    17,    46,     0,     0,    17,     0,   188,
     217,     0,    17,    17,   190,   200,   201,    17,   204,   205,
      17,   208,   209,   210,    17,    17,   215,   216,   213,     0,
      17,     0,   141,   179,    17,    17,     0,     0,   181,    17,
      17,   178,     0,   177,     0,   172,     0,     0,   144,     0,
     146,   147,     0,   233,     0,     0,     0,    12,     0,    11,
     105,   106,     0,    17,    93,    93,    83,    17,     0,    79,
      93,    84,    97,    94,    95,    98,    99,    96,    92,    91,
       0,    17,     0,    71,     0,    60,    64,    17,     0,    45,
       0,    17,    17,    33,    44,   225,   158,     0,   154,   184,
     186,   198,   202,   206,   211,   221,     0,     0,     0,     0,
     166,     0,   182,     0,   168,     0,   176,     0,     0,     0,
      17,     0,   143,   164,   234,   235,   130,    13,   112,   115,
     114,   111,    17,     0,    93,    81,    82,    78,     0,     0,
      73,    70,    59,     0,    31,    17,    43,     0,    17,     0,
       0,   153,   222,   223,    17,   224,    17,   180,   170,    17,
     174,     0,     0,   148,   145,    17,   110,    77,     0,    76,
       0,    17,    63,    55,     0,   162,   159,   161,     0,   155,
     236,   165,   169,     0,     0,   163,   109,    17,    75,    69,
       0,    17,    17,   157,    17,   156,   167,   152,     0,   108,
      62,    54,    56,   160,   151
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    13,    14,    21,   193,   143,    34,     5,
      11,    12,    22,    23,    35,    24,   203,    26,    68,   204,
      69,    70,   127,    71,   309,    72,    73,   114,   216,   217,
     218,   115,   116,   213,   214,   117,   205,   206,   287,   207,
     208,   209,   210,   298,    28,    38,    53,   107,   196,   197,
     352,    54,    30,    31,    87,    88,   191,    89,    90,    91,
     269,   270,    92,    93,   317,    94,   318,   368,   369,   396,
      95,    96,    97,   169,    98,    99,   257,   258,   310,   145,
     146,   147,   148,   149,   150,   237,   151,   240,   152,   244,
     153,   154,   248,   155,   156,   157,   158,   329
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -219
static const yytype_int16 yypact[] =
{
     134,   -18,    -8,    34,  -219,  -219,    41,    50,  -219,  -219,
     144,  -219,    24,  -219,    29,    65,  -219,   154,   102,  -219,
     130,  -219,   -28,   -28,  -219,  -219,   118,  -219,  -219,  -219,
    -219,    33,  -219,  -219,   137,   115,  -219,   -10,  -219,   224,
    -219,   -28,   186,   678,   444,  -219,   159,   185,  -219,  -219,
      16,   408,  -219,   248,  -219,   219,   667,  -219,  -219,  -219,
     408,   254,  -219,   265,  -219,   107,   188,  -219,   -31,  -219,
    -219,    12,  -219,  -219,   556,   459,  -219,   556,   218,   444,
     221,    -1,   556,    -3,   191,  -219,   194,  -219,  -219,  -219,
    -219,   196,    14,  -219,  -219,  -219,   444,  -219,  -219,  -219,
     657,   232,  -219,  -219,   237,  -219,  -219,   240,  -219,  -219,
     299,     3,   267,   195,  -219,  -219,  -219,  -219,   249,   408,
     408,    95,   556,   556,  -219,  -219,  -219,   278,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,   556,   563,  -219,
    -219,  -219,   407,  -219,   310,   255,   263,  -219,  -219,   211,
     141,   126,   192,  -219,   234,   147,  -219,  -219,    46,  -219,
     236,   253,  -219,     7,   119,    11,   556,   281,  -219,   256,
     331,  -219,   264,   100,   452,  -219,  -219,  -219,   190,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,   288,   556,
     294,   556,  -219,   167,   279,  -219,    82,    -5,  -219,  -219,
    -219,    31,  -219,  -219,  -219,    73,    76,  -219,   -46,  -219,
     282,   260,   305,   -33,  -219,  -219,   -13,  -219,    43,  -219,
     556,  -219,  -219,   556,   322,   308,   291,   556,   285,  -219,
    -219,   373,   556,   556,   141,  -219,  -219,   211,  -219,  -219,
     211,  -219,  -219,  -219,   211,   211,  -219,  -219,  -219,   328,
     556,   172,  -219,  -219,   556,   408,   444,   303,  -219,   556,
     408,  -219,     1,  -219,   444,  -219,   444,   334,  -219,    98,
    -219,  -219,   401,  -219,   295,   296,   311,  -219,   345,  -219,
    -219,  -219,   352,   632,   101,    76,  -219,   317,   413,  -219,
     157,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
     357,   556,   403,  -219,   381,  -219,  -219,   408,   343,  -219,
     365,   556,   556,  -219,  -219,  -219,  -219,    27,  -219,   263,
    -219,   126,   192,  -219,  -219,    67,   323,   324,   366,   332,
    -219,   419,   444,   353,   435,   439,  -219,   356,   275,   350,
     556,   504,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,   389,   408,   460,   168,  -219,  -219,  -219,   464,   -23,
    -219,  -219,  -219,    44,  -219,   556,  -219,   382,   511,   404,
     453,  -219,   114,   158,   556,  -219,   556,  -219,  -219,   556,
    -219,   390,   475,  -219,  -219,   556,   415,  -219,   474,  -219,
     461,   556,  -219,   422,   473,  -219,   392,   424,   444,  -219,
    -219,  -219,   478,   441,   412,  -219,  -219,   556,  -219,  -219,
     409,   556,   408,  -219,   556,   444,  -219,  -219,   448,  -219,
    -219,  -219,  -219,  -219,  -219
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -219,  -219,  -219,  -219,  -219,   488,  -219,   -16,  -219,  -219,
    -219,  -219,   480,  -219,  -219,   132,   325,  -219,   -49,   348,
     449,   293,   385,   442,  -218,  -219,  -219,  -219,  -219,   292,
    -219,  -219,  -219,   212,  -209,  -219,  -183,   312,  -219,  -202,
    -219,   316,  -219,  -219,   301,  -219,  -219,  -219,  -219,  -219,
    -219,   467,   489,  -219,   -86,  -219,  -219,  -219,  -219,  -219,
    -219,   193,   -74,  -219,  -219,  -219,   215,  -219,  -219,  -219,
    -219,   360,  -219,   -75,  -219,  -219,  -219,  -219,     9,  -219,
     307,   313,   402,  -219,   394,  -219,   304,  -219,   309,  -219,
      17,  -219,  -219,  -219,   405,  -219,   -43,  -219
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -236
static const yytype_int16 yytable[] =
{
      33,   100,   106,   289,   303,   164,   177,    51,   172,   314,
     166,   118,   166,   167,   166,   304,    46,   211,   284,    19,
      50,    74,   178,   290,   125,   104,   254,    67,    86,    18,
     259,    75,   212,   103,     8,    67,   100,    19,    15,   123,
     316,   334,   212,    15,    67,   126,    20,     6,    76,   100,
      16,    77,   215,   100,    78,   370,    17,     7,   124,    79,
     161,    17,   302,    86,    20,    80,    81,    82,   212,    83,
     221,   222,   390,   198,    44,   199,    86,   200,   177,    84,
      86,    18,   289,   144,   160,   282,   162,    52,   289,    19,
      18,   170,   177,   366,   283,   171,    19,   168,    19,   336,
      32,   288,   354,    67,    67,   105,   255,   125,   306,   176,
     260,    58,    85,    59,   391,   198,    20,   199,   198,   200,
     199,   100,   200,    20,   202,    20,    74,    62,   126,   353,
       9,   225,   226,   392,   307,   100,    75,    77,    19,    10,
      78,    19,   223,   198,    -7,   199,   228,   200,    86,   256,
     303,    80,   289,    76,    40,    64,    77,   249,   250,    78,
     251,   402,    86,    45,    79,    20,    19,    37,    20,     1,
      80,    81,    82,    40,    83,   261,   280,     2,  -233,  -233,
     281,  -233,   332,   271,    84,   358,   286,   337,   341,    36,
     338,   101,   339,    20,   342,    39,   388,    74,   274,   198,
     276,   199,    47,   200,    48,    49,   331,    75,    42,    43,
     198,   335,   199,   100,   200,   235,   236,    85,   272,   246,
     247,   100,    19,   100,    76,  -234,  -234,    77,  -234,   308,
      78,   238,   239,    19,   351,    79,   327,   328,   128,    67,
      86,    80,    81,    82,    67,    83,   177,    56,    86,    20,
      86,    57,   177,   177,   102,    84,   277,   278,   363,   326,
      20,   323,   324,   330,    58,    51,    59,    67,   119,  -235,
    -235,   356,  -235,   129,   130,   131,   109,   132,   133,   120,
      62,   122,    74,   163,   219,   292,   165,   174,    85,   100,
     173,    67,    75,   293,   175,   100,   100,   192,   294,   241,
     242,   243,   194,   386,   137,   195,   295,   404,    64,    76,
     360,   296,    77,   297,    65,    78,    86,   142,   177,   220,
      79,   367,    86,    86,   415,   227,    80,    81,    82,   177,
      83,   381,   215,   231,   252,   232,    67,    25,   100,    18,
      84,   198,   233,   199,   245,   200,   262,    25,    25,   383,
     271,   253,   264,   273,   263,   100,    25,    74,   275,   201,
      27,   100,   265,   422,    19,    86,    25,    75,   279,   311,
      27,    27,   100,    85,   393,   301,   312,   397,   382,    27,
     313,   315,    86,   400,    76,   401,   316,    77,    86,    27,
      78,    20,   202,   325,   406,    79,    67,    74,   333,    86,
     410,    80,    81,    82,   340,    83,   343,    75,   344,   346,
     347,   345,    58,   355,    59,    84,   419,   348,   403,    74,
     421,   357,   212,   423,    76,   361,    61,    77,    62,    75,
      78,   362,   364,   365,   128,    79,   372,   374,   376,   373,
     418,    80,    81,    82,    63,    83,    76,   375,    85,    77,
     378,    74,    78,   377,   380,    84,    64,    79,   379,   385,
     399,    75,    65,    80,    81,    82,    66,    83,   387,   129,
     130,   131,   389,   132,   133,   398,   394,    84,    76,   128,
     405,    77,   408,   409,    78,   407,   128,   412,    85,    79,
     411,   413,   414,   416,   417,    80,    81,    82,   420,    83,
     137,   424,    29,    41,   300,   113,   224,   121,   305,    84,
      85,   299,   359,   285,   129,   130,   131,   267,   132,   133,
     108,   129,   130,   131,   291,   132,   133,    55,   134,   135,
     136,   128,   371,   266,   384,   134,   135,   136,   128,   319,
     229,   321,    85,   234,     0,   137,   320,   230,   268,   322,
     395,     0,   137,   138,   139,   140,   141,   159,   142,     0,
     138,   139,   140,   141,     0,   142,   129,   130,   131,   267,
     132,   133,     0,   129,   130,   131,     0,   132,   133,     0,
     134,   135,   136,   128,     0,     0,     0,   134,   135,   136,
     128,     0,     0,     0,     0,     0,     0,   137,     0,     0,
       0,     0,     0,     0,   137,   138,   139,   140,   141,     0,
     142,     0,   138,   139,   140,   141,     0,   142,   129,   130,
     131,     0,   132,   133,     0,   129,   130,   131,     0,   132,
     133,     0,   134,   135,   136,     0,    58,     0,    59,   134,
     135,   136,     0,     0,     0,     0,     0,     0,     0,   137,
      61,     0,    62,     0,     0,     0,   137,   138,   139,   140,
     141,     0,   142,     0,     0,   139,   140,   141,    63,   142,
       0,    58,     0,    59,     0,   110,     0,     0,     0,     0,
      64,   349,    58,     0,    59,    61,    65,    62,    60,   111,
      66,     0,     0,   350,     0,     0,    61,     0,    62,     0,
       0,     0,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64,     0,   112,     0,     0,
       0,    65,     0,     0,     0,    66,    64,   179,     0,     0,
       0,     0,    65,     0,     0,     0,    66,     0,   180,   181,
     182,   183,   184,   185,   186,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   188,   189,
       0,   190
};

static const yytype_int16 yycheck[] =
{
      16,    44,    51,   205,   213,    79,    92,    17,    83,   227,
      13,    60,    13,    14,    13,    28,    32,    14,   201,    65,
      36,     7,    96,   206,    12,     9,    19,    43,    44,    57,
      19,    17,    65,    49,     0,    51,    79,    65,    14,    70,
      13,   259,    65,    14,    60,    33,    92,    65,    34,    92,
      26,    37,    65,    96,    40,    28,    32,    65,    89,    45,
      76,    32,    95,    79,    92,    51,    52,    53,    65,    55,
     119,   120,    95,    42,    41,    44,    92,    46,   164,    65,
      96,    57,   284,    74,    75,    90,    77,    97,   290,    65,
      57,    82,   178,   311,    99,    98,    65,    98,    65,    98,
      35,    28,   285,   119,   120,    89,    99,    12,    65,    95,
      99,     4,    98,     6,    70,    42,    92,    44,    42,    46,
      44,   164,    46,    92,    93,    92,     7,    20,    33,    28,
      89,   122,   123,    89,    91,   178,    17,    37,    65,    89,
      40,    65,    47,    42,     0,    44,   137,    46,   164,    30,
     359,    51,   354,    34,    22,    48,    37,   111,   112,    40,
     114,   379,   178,    31,    45,    92,    65,    65,    92,    35,
      51,    52,    53,    41,    55,   166,    94,    43,   111,   112,
      98,   114,   256,   174,    65,    28,   202,   262,    90,    35,
     264,    32,   266,    92,    96,    65,    28,     7,   189,    42,
     191,    44,    65,    46,    89,    90,   255,    17,    90,    91,
      42,   260,    44,   256,    46,    74,    75,    98,    28,    72,
      73,   264,    65,   266,    34,   111,   112,    37,   114,   220,
      40,   105,   106,    65,   283,    45,    64,    65,    27,   255,
     256,    51,    52,    53,   260,    55,   332,    23,   264,    92,
     266,    65,   338,   339,    69,    65,    89,    90,   307,   250,
      92,   244,   245,   254,     4,    17,     6,   283,    14,   111,
     112,   287,   114,    62,    63,    64,    57,    66,    67,    14,
      20,    93,     7,    65,    89,     3,    65,    93,    98,   332,
      99,   307,    17,    11,    98,   338,   339,    65,    16,   107,
     108,   109,    65,   352,    93,    65,    24,   381,    48,    34,
     301,    29,    37,    31,    54,    40,   332,   106,   404,    70,
      45,   312,   338,   339,   398,    47,    51,    52,    53,   415,
      55,    56,    65,    23,    98,    80,   352,    12,   381,    57,
      65,    42,    79,    44,   110,    46,    65,    22,    23,   340,
     341,    98,    21,    65,    98,   398,    31,     7,    64,    60,
      12,   404,    98,   412,    65,   381,    41,    17,    89,    47,
      22,    23,   415,    98,   365,    70,    68,   368,    28,    31,
      89,    96,   398,   374,    34,   376,    13,    37,   404,    41,
      40,    92,    93,    65,   385,    45,   412,     7,    95,   415,
     391,    51,    52,    53,    70,    55,     5,    17,   113,    98,
      65,   115,     4,    96,     6,    65,   407,    65,    28,     7,
     411,     8,    65,   414,    34,    22,    18,    37,    20,    17,
      40,    50,    89,    68,    27,    45,   113,    71,    19,   115,
      28,    51,    52,    53,    36,    55,    34,   115,    98,    37,
      15,     7,    40,   100,    98,    65,    48,    45,    19,    70,
       7,    17,    54,    51,    52,    53,    58,    55,     8,    62,
      63,    64,     8,    66,    67,    71,    94,    65,    34,    27,
       5,    37,     8,    22,    40,    70,    27,    14,    98,    45,
      68,    99,    68,    15,    53,    51,    52,    53,    89,    55,
      93,    53,    14,    23,   211,    56,   121,    65,   216,    65,
      98,   210,   300,   201,    62,    63,    64,    65,    66,    67,
      53,    62,    63,    64,   208,    66,    67,    38,    76,    77,
      78,    27,   317,   173,   341,    76,    77,    78,    27,   232,
     138,   237,    98,   149,    -1,    93,   233,   142,    96,   240,
      39,    -1,    93,   101,   102,   103,   104,    98,   106,    -1,
     101,   102,   103,   104,    -1,   106,    62,    63,    64,    65,
      66,    67,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      76,    77,    78,    27,    -1,    -1,    -1,    76,    77,    78,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    93,   101,   102,   103,   104,    -1,
     106,    -1,   101,   102,   103,   104,    -1,   106,    62,    63,
      64,    -1,    66,    67,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    76,    77,    78,    -1,     4,    -1,     6,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      18,    -1,    20,    -1,    -1,    -1,    93,   101,   102,   103,
     104,    -1,   106,    -1,    -1,   102,   103,   104,    36,   106,
      -1,     4,    -1,     6,    -1,     8,    -1,    -1,    -1,    -1,
      48,    49,     4,    -1,     6,    18,    54,    20,    10,    22,
      58,    -1,    -1,    61,    -1,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    48,    -1,    50,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    58,    48,    70,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    58,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   117,   118,   125,    65,    65,     0,    89,
      89,   126,   127,   119,   120,    14,    26,    32,    57,    65,
      92,   121,   128,   129,   131,   132,   133,   135,   160,   121,
     168,   169,    35,   123,   124,   130,    35,    65,   161,    65,
     131,   128,    90,    91,    41,   131,   123,    65,    89,    90,
     123,    17,    97,   162,   167,   168,    23,    65,     4,     6,
      10,    18,    20,    36,    48,    54,    58,   123,   134,   136,
     137,   139,   141,   142,     7,    17,    34,    37,    40,    45,
      51,    52,    53,    55,    65,    98,   123,   170,   171,   173,
     174,   175,   178,   179,   181,   186,   187,   188,   190,   191,
     212,    32,    69,   123,     9,    89,   134,   163,   167,    57,
       8,    22,    50,   136,   143,   147,   148,   151,   134,    14,
      14,   139,    93,    70,    89,    12,    33,   138,    27,    62,
      63,    64,    66,    67,    76,    77,    78,    93,   101,   102,
     103,   104,   106,   123,   194,   195,   196,   197,   198,   199,
     200,   202,   204,   206,   207,   209,   210,   211,   212,    98,
     194,   123,   194,    65,   178,    65,    13,    14,    98,   189,
     194,    98,   189,    99,    93,    98,    95,   170,   178,    70,
      81,    82,    83,    84,    85,    86,    87,    88,   111,   112,
     114,   172,    65,   122,    65,    65,   164,   165,    42,    44,
      46,    60,    93,   132,   135,   152,   153,   155,   156,   157,
     158,    14,    65,   149,   150,    65,   144,   145,   146,    89,
      70,   134,   134,    47,   138,   194,   194,    47,   194,   198,
     210,    23,    80,    79,   200,    74,    75,   201,   105,   106,
     203,   107,   108,   109,   205,   110,    72,    73,   208,   111,
     112,   114,    98,    98,    19,    99,    30,   192,   193,    19,
      99,   194,    65,    98,    21,    98,   187,    65,    96,   176,
     177,   194,    28,    65,   194,    64,   194,    89,    90,    89,
      94,    98,    90,    99,   152,   153,   123,   154,    28,   155,
     152,   157,     3,    11,    16,    24,    29,    31,   159,   160,
     137,    70,    95,   150,    28,   145,    65,    91,   194,   140,
     194,    47,    68,    89,   140,    96,    13,   180,   182,   196,
     197,   202,   204,   206,   206,    65,   194,    64,    65,   213,
     194,   134,   178,    95,   140,   134,    98,   189,   178,   178,
      70,    90,    96,     5,   113,   115,    98,    65,    65,    49,
      61,   134,   166,    28,   152,    96,   123,     8,    28,   149,
     194,    22,    50,   134,    89,    68,   140,   194,   183,   184,
      28,   182,   113,   115,    71,   115,    19,   100,    15,    19,
      98,    56,    28,   194,   177,    70,   134,     8,    28,     8,
      95,    70,    89,   194,    94,    39,   185,   194,    71,     7,
     194,   194,   140,    28,   178,     5,   194,    70,     8,    22,
     194,    68,    14,    99,    68,   178,    15,    53,    28,   194,
      89,   194,   134,   194,    53
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
#line 2003 "chusco.tab.c"
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


#line 469 "chusco.y"


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

