/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "chusco.y"

#include <stdio.h>

extern FILE *yyin;
extern int yylex();

#define YYDEBUG 1


#line 81 "chusco.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "chusco.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ABSTRACTO = 3,                  /* ABSTRACTO  */
  YYSYMBOL_BOOLEANO = 4,                   /* BOOLEANO  */
  YYSYMBOL_BUCLE = 5,                      /* BUCLE  */
  YYSYMBOL_CARACTER = 6,                   /* CARACTER  */
  YYSYMBOL_CASOS = 7,                      /* CASOS  */
  YYSYMBOL_CLASE = 8,                      /* CLASE  */
  YYSYMBOL_COMO = 9,                       /* COMO  */
  YYSYMBOL_CONSTANTE = 10,                 /* CONSTANTE  */
  YYSYMBOL_CONSTRUCTOR = 11,               /* CONSTRUCTOR  */
  YYSYMBOL_CORTO = 12,                     /* CORTO  */
  YYSYMBOL_CUANDO = 13,                    /* CUANDO  */
  YYSYMBOL_DE = 14,                        /* DE  */
  YYSYMBOL_DESCENDENTE = 15,               /* DESCENDENTE  */
  YYSYMBOL_DESTRUCTOR = 16,                /* DESTRUCTOR  */
  YYSYMBOL_DEVOLVER = 17,                  /* DEVOLVER  */
  YYSYMBOL_DICCIONARIO = 18,               /* DICCIONARIO  */
  YYSYMBOL_EN = 19,                        /* EN  */
  YYSYMBOL_ENTERO = 20,                    /* ENTERO  */
  YYSYMBOL_ENTONCES = 21,                  /* ENTONCES  */
  YYSYMBOL_ENUMERACION = 22,               /* ENUMERACION  */
  YYSYMBOL_ES = 23,                        /* ES  */
  YYSYMBOL_ESPECIFICO = 24,                /* ESPECIFICO  */
  YYSYMBOL_EXCEPCION = 25,                 /* EXCEPCION  */
  YYSYMBOL_EXPORTAR = 26,                  /* EXPORTAR  */
  YYSYMBOL_FALSO = 27,                     /* FALSO  */
  YYSYMBOL_FIN = 28,                       /* FIN  */
  YYSYMBOL_FINAL = 29,                     /* FINAL  */
  YYSYMBOL_FINALMENTE = 30,                /* FINALMENTE  */
  YYSYMBOL_GENERICO = 31,                  /* GENERICO  */
  YYSYMBOL_IMPORTAR = 32,                  /* IMPORTAR  */
  YYSYMBOL_LARGO = 33,                     /* LARGO  */
  YYSYMBOL_LANZA = 34,                     /* LANZA  */
  YYSYMBOL_LIBRERIA = 35,                  /* LIBRERIA  */
  YYSYMBOL_LISTA = 36,                     /* LISTA  */
  YYSYMBOL_MIENTRAS = 37,                  /* MIENTRAS  */
  YYSYMBOL_OBJETO = 38,                    /* OBJETO  */
  YYSYMBOL_OTRO = 39,                      /* OTRO  */
  YYSYMBOL_PARA = 40,                      /* PARA  */
  YYSYMBOL_PRINCIPIO = 41,                 /* PRINCIPIO  */
  YYSYMBOL_PRIVADO = 42,                   /* PRIVADO  */
  YYSYMBOL_PROGRAMA = 43,                  /* PROGRAMA  */
  YYSYMBOL_PROTEGIDO = 44,                 /* PROTEGIDO  */
  YYSYMBOL_PRUEBA = 45,                    /* PRUEBA  */
  YYSYMBOL_PUBLICO = 46,                   /* PUBLICO  */
  YYSYMBOL_RANGO = 47,                     /* RANGO  */
  YYSYMBOL_REAL = 48,                      /* REAL  */
  YYSYMBOL_REFERENCIA = 49,                /* REFERENCIA  */
  YYSYMBOL_REGISTRO = 50,                  /* REGISTRO  */
  YYSYMBOL_REPETIR = 51,                   /* REPETIR  */
  YYSYMBOL_SALIR = 52,                     /* SALIR  */
  YYSYMBOL_SI = 53,                        /* SI  */
  YYSYMBOL_SIGNO = 54,                     /* SIGNO  */
  YYSYMBOL_SIGUIENTE = 55,                 /* SIGUIENTE  */
  YYSYMBOL_SINO = 56,                      /* SINO  */
  YYSYMBOL_SUBPROGRAMA = 57,               /* SUBPROGRAMA  */
  YYSYMBOL_TABLA = 58,                     /* TABLA  */
  YYSYMBOL_TIPO = 59,                      /* TIPO  */
  YYSYMBOL_ULTIMA = 60,                    /* ULTIMA  */
  YYSYMBOL_VALOR = 61,                     /* VALOR  */
  YYSYMBOL_VERDADERO = 62,                 /* VERDADERO  */
  YYSYMBOL_CTC_CARACTER = 63,              /* CTC_CARACTER  */
  YYSYMBOL_CTC_CADENA = 64,                /* CTC_CADENA  */
  YYSYMBOL_IDENTIFICADOR = 65,             /* IDENTIFICADOR  */
  YYSYMBOL_CTC_ENTERA = 66,                /* CTC_ENTERA  */
  YYSYMBOL_CTC_REAL = 67,                  /* CTC_REAL  */
  YYSYMBOL_DOS_PUNTOS = 68,                /* DOS_PUNTOS  */
  YYSYMBOL_CUATRO_PUNTOS = 69,             /* CUATRO_PUNTOS  */
  YYSYMBOL_ASIGNACION = 70,                /* ASIGNACION  */
  YYSYMBOL_FLECHA = 71,                    /* FLECHA  */
  YYSYMBOL_INC = 72,                       /* INC  */
  YYSYMBOL_DEC = 73,                       /* DEC  */
  YYSYMBOL_DESPI = 74,                     /* DESPI  */
  YYSYMBOL_DESPD = 75,                     /* DESPD  */
  YYSYMBOL_LEQ = 76,                       /* LEQ  */
  YYSYMBOL_GEQ = 77,                       /* GEQ  */
  YYSYMBOL_NEQ = 78,                       /* NEQ  */
  YYSYMBOL_AND = 79,                       /* AND  */
  YYSYMBOL_OR = 80,                        /* OR  */
  YYSYMBOL_ASIG_SUMA = 81,                 /* ASIG_SUMA  */
  YYSYMBOL_ASIG_RESTA = 82,                /* ASIG_RESTA  */
  YYSYMBOL_ASIG_MULT = 83,                 /* ASIG_MULT  */
  YYSYMBOL_ASIG_DIV = 84,                  /* ASIG_DIV  */
  YYSYMBOL_ASIG_RESTO = 85,                /* ASIG_RESTO  */
  YYSYMBOL_ASIG_POT = 86,                  /* ASIG_POT  */
  YYSYMBOL_ASIG_DESPI = 87,                /* ASIG_DESPI  */
  YYSYMBOL_ASIG_DESPD = 88,                /* ASIG_DESPD  */
  YYSYMBOL_89_ = 89,                       /* ';'  */
  YYSYMBOL_90_ = 90,                       /* ':'  */
  YYSYMBOL_91_tipo_ = 91,                  /* "tipo"  */
  YYSYMBOL_92_ = 92,                       /* '('  */
  YYSYMBOL_93_ = 93,                       /* ")"  */
  YYSYMBOL_94_ = 94,                       /* ')'  */
  YYSYMBOL_95_ = 95,                       /* ":"  */
  YYSYMBOL_96_ = 96,                       /* '~'  */
  YYSYMBOL_97_ = 97,                       /* '<'  */
  YYSYMBOL_98_ = 98,                       /* '>'  */
  YYSYMBOL_99_ = 99,                       /* '='  */
  YYSYMBOL_100_ = 100,                     /* '+'  */
  YYSYMBOL_101_ = 101,                     /* '-'  */
  YYSYMBOL_102_ = 102,                     /* '*'  */
  YYSYMBOL_103_ = 103,                     /* '/'  */
  YYSYMBOL_104_ = 104,                     /* '\\'  */
  YYSYMBOL_105_ = 105,                     /* '^'  */
  YYSYMBOL_106_ = 106,                     /* '.'  */
  YYSYMBOL_107_ = 107,                     /* '['  */
  YYSYMBOL_108_ = 108,                     /* ']'  */
  YYSYMBOL_109_ = 109,                     /* '{'  */
  YYSYMBOL_110_ = 110,                     /* '}'  */
  YYSYMBOL_111_ = 111,                     /* ','  */
  YYSYMBOL_YYACCEPT = 112,                 /* $accept  */
  YYSYMBOL_programa = 113,                 /* programa  */
  YYSYMBOL_definicion_programa = 114,      /* definicion_programa  */
  YYSYMBOL_codigo_programa = 115,          /* codigo_programa  */
  YYSYMBOL_libreria = 116,                 /* libreria  */
  YYSYMBOL_nombre = 117,                   /* nombre  */
  YYSYMBOL_definicion_libreria = 118,      /* definicion_libreria  */
  YYSYMBOL_codigo_libreria = 119,          /* codigo_libreria  */
  YYSYMBOL_exportaciones = 120,            /* exportaciones  */
  YYSYMBOL_declaracion = 121,              /* declaracion  */
  YYSYMBOL_declaracion_objeto = 122,       /* declaracion_objeto  */
  YYSYMBOL_especificacion_tipo = 123,      /* especificacion_tipo  */
  YYSYMBOL_declaracion_tipo = 124,         /* declaracion_tipo  */
  YYSYMBOL_tipo_no_estructurado = 125,     /* tipo_no_estructurado  */
  YYSYMBOL_tipo_escalar = 126,             /* tipo_escalar  */
  YYSYMBOL_longitud = 127,                 /* longitud  */
  YYSYMBOL_tipo_basico = 128,              /* tipo_basico  */
  YYSYMBOL_rango = 129,                    /* rango  */
  YYSYMBOL_tipo_tabla = 130,               /* tipo_tabla  */
  YYSYMBOL_tipo_diccionario = 131,         /* tipo_diccionario  */
  YYSYMBOL_tipo_estructurado = 132,        /* tipo_estructurado  */
  YYSYMBOL_tipo_registro = 133,            /* tipo_registro  */
  YYSYMBOL_campo = 134,                    /* campo  */
  YYSYMBOL_tipo_enumerado = 135,           /* tipo_enumerado  */
  YYSYMBOL_elemento_enumeracion = 136,     /* elemento_enumeracion  */
  YYSYMBOL_clase = 137,                    /* clase  */
  YYSYMBOL_superclases = 138,              /* superclases  */
  YYSYMBOL_declaracion_componente = 139,   /* declaracion_componente  */
  YYSYMBOL_visibilidad = 140,              /* visibilidad  */
  YYSYMBOL_componente = 141,               /* componente  */
  YYSYMBOL_modificador = 142,              /* modificador  */
  YYSYMBOL_declaracion_subprograma = 143,  /* declaracion_subprograma  */
  YYSYMBOL_cabecera_subprograma = 144,     /* cabecera_subprograma  */
  YYSYMBOL_parametrizacion = 145,          /* parametrizacion  */
  YYSYMBOL_declaracion_parametros = 146,   /* declaracion_parametros  */
  YYSYMBOL_modo = 147,                     /* modo  */
  YYSYMBOL_tipo_resultado = 148,           /* tipo_resultado  */
  YYSYMBOL_cuerpo_subprograma = 149,       /* cuerpo_subprograma  */
  YYSYMBOL_instruccion = 150,              /* instruccion  */
  YYSYMBOL_instruccion_asignacion = 151,   /* instruccion_asignacion  */
  YYSYMBOL_op_asignacion = 152,            /* op_asignacion  */
  YYSYMBOL_instruccion_devolver = 153,     /* instruccion_devolver  */
  YYSYMBOL_instruccion_llamada = 154,      /* instruccion_llamada  */
  YYSYMBOL_llamada_subprograma = 155,      /* llamada_subprograma  */
  YYSYMBOL_definicion_parametro = 156,     /* definicion_parametro  */
  YYSYMBOL_instruccion_si = 157,           /* instruccion_si  */
  YYSYMBOL_instruccion_casos = 158,        /* instruccion_casos  */
  YYSYMBOL_caso = 159,                     /* caso  */
  YYSYMBOL_entradas = 160,                 /* entradas  */
  YYSYMBOL_entrada = 161,                  /* entrada  */
  YYSYMBOL_instruccion_bucle = 162,        /* instruccion_bucle  */
  YYSYMBOL_clausula_iteracion = 163,       /* clausula_iteracion  */
  YYSYMBOL_instruccion_interrupcion = 164, /* instruccion_interrupcion  */
  YYSYMBOL_cuando = 165,                   /* cuando  */
  YYSYMBOL_instruccion_lanzamiento_excepcion = 166, /* instruccion_lanzamiento_excepcion  */
  YYSYMBOL_instruccion_captura_excepcion = 167, /* instruccion_captura_excepcion  */
  YYSYMBOL_clausulas = 168,                /* clausulas  */
  YYSYMBOL_clausulas_excepcion = 169,      /* clausulas_excepcion  */
  YYSYMBOL_clausula_excepcion_especifica = 170, /* clausula_excepcion_especifica  */
  YYSYMBOL_clausula_excepcion_general = 171, /* clausula_excepcion_general  */
  YYSYMBOL_clausula_finalmente = 172,      /* clausula_finalmente  */
  YYSYMBOL_expresion = 173,                /* expresion  */
  YYSYMBOL_expresion_or = 174,             /* expresion_or  */
  YYSYMBOL_expresion_and = 175,            /* expresion_and  */
  YYSYMBOL_expresion_neg = 176,            /* expresion_neg  */
  YYSYMBOL_expresion_comparacion = 177,    /* expresion_comparacion  */
  YYSYMBOL_operador_comparacion = 178,     /* operador_comparacion  */
  YYSYMBOL_expresion_desp = 179,           /* expresion_desp  */
  YYSYMBOL_operador_desp = 180,            /* operador_desp  */
  YYSYMBOL_expresion_add = 181,            /* expresion_add  */
  YYSYMBOL_operador_add = 182,             /* operador_add  */
  YYSYMBOL_expresion_mult_div = 183,       /* expresion_mult_div  */
  YYSYMBOL_operador_mult_div = 184,        /* operador_mult_div  */
  YYSYMBOL_expresion_potencia = 185,       /* expresion_potencia  */
  YYSYMBOL_expresion_posfija = 186,        /* expresion_posfija  */
  YYSYMBOL_operador_posfijo = 187,         /* operador_posfijo  */
  YYSYMBOL_expresion_unaria = 188,         /* expresion_unaria  */
  YYSYMBOL_primario = 189,                 /* primario  */
  YYSYMBOL_literal = 190,                  /* literal  */
  YYSYMBOL_objeto = 191,                   /* objeto  */
  YYSYMBOL_enumeraciones = 192,            /* enumeraciones  */
  YYSYMBOL_expresion_condicional = 193,    /* expresion_condicional  */
  YYSYMBOL_clave_valor = 194,              /* clave_valor  */
  YYSYMBOL_campo_valor = 195,              /* campo_valor  */
  YYSYMBOL_libreria_ast = 196,             /* libreria_ast  */
  YYSYMBOL_identificador_rep_comas = 197,  /* identificador_rep_comas  */
  YYSYMBOL_declaracion_rep = 198,          /* declaracion_rep  */
  YYSYMBOL_nombre_rep_comas = 199,         /* nombre_rep_comas  */
  YYSYMBOL_campo_rep = 200,                /* campo_rep  */
  YYSYMBOL_elemento_enumeracion_rep_comas = 201, /* elemento_enumeracion_rep_comas  */
  YYSYMBOL_declaracion_componente_rep = 202, /* declaracion_componente_rep  */
  YYSYMBOL_modificador_ast_comas = 203,    /* modificador_ast_comas  */
  YYSYMBOL_declaracion_parametros_ast_puntocoma = 204, /* declaracion_parametros_ast_puntocoma  */
  YYSYMBOL_declaracion_ast = 205,          /* declaracion_ast  */
  YYSYMBOL_instruccion_rep = 206,          /* instruccion_rep  */
  YYSYMBOL_definicion_parametro_ast_comas = 207, /* definicion_parametro_ast_comas  */
  YYSYMBOL_caso_rep = 208,                 /* caso_rep  */
  YYSYMBOL_entrada_rep_dospuntos = 209,    /* entrada_rep_dospuntos  */
  YYSYMBOL_clausulas_excepcion_especifica_ast = 210, /* clausulas_excepcion_especifica_ast  */
  YYSYMBOL_clave_valor_rep_comas = 211,    /* clave_valor_rep_comas  */
  YYSYMBOL_campo_valor_rep_comas = 212,    /* campo_valor_rep_comas  */
  YYSYMBOL_expresion_rep_comas = 213,      /* expresion_rep_comas  */
  YYSYMBOL_ctc_cadena_rep_comas = 214,     /* ctc_cadena_rep_comas  */
  YYSYMBOL_clausula_iteracion_rep = 215    /* clausula_iteracion_rep  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   787

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  249
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  455

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ABSTRACTO",
  "BOOLEANO", "BUCLE", "CARACTER", "CASOS", "CLASE", "COMO", "CONSTANTE",
  "CONSTRUCTOR", "CORTO", "CUANDO", "DE", "DESCENDENTE", "DESTRUCTOR",
  "DEVOLVER", "DICCIONARIO", "EN", "ENTERO", "ENTONCES", "ENUMERACION",
  "ES", "ESPECIFICO", "EXCEPCION", "EXPORTAR", "FALSO", "FIN", "FINAL",
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
  "clausula_iteracion_rep", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-212)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     218,     5,    21,    73,  -212,  -212,    64,    76,  -212,  -212,
     124,  -212,   137,  -212,    52,   102,   133,   136,   146,  -212,
     159,  -212,    79,  -212,  -212,  -212,  -212,    35,    79,  -212,
      91,   133,  -212,   164,   -31,   133,    -7,  -212,   237,    79,
     673,   199,  -212,   615,  -212,   -14,   220,  -212,   133,    28,
     678,  -212,   258,  -212,   236,   729,  -212,  -212,   678,   281,
    -212,   308,  -212,    59,   243,   164,    29,  -212,  -212,    48,
    -212,  -212,  -212,   411,   112,   133,   411,   260,   615,   262,
      16,   411,    -1,   253,  -212,   111,  -212,  -212,  -212,  -212,
     263,  -212,  -212,  -212,   615,  -212,  -212,  -212,   675,   476,
     284,  -212,   164,   289,  -212,  -212,   284,  -212,  -212,   309,
      12,   284,   267,  -212,  -212,  -212,  -212,   293,   678,   678,
     121,   411,   411,  -212,  -212,  -212,   411,  -212,  -212,   133,
    -212,  -212,  -212,  -212,  -212,   411,   -18,   581,   217,   185,
    -212,   348,   300,   311,  -212,  -212,   299,   203,   198,   315,
     276,   233,  -212,  -212,   222,  -212,  -212,   305,   126,  -212,
       8,   485,    32,   411,   340,  -212,   318,   391,  -212,   325,
     195,  -212,  -212,   517,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,   355,   359,   357,   411,  -212,  -212,    27,
     336,   116,   -57,  -212,  -212,  -212,   273,   133,  -212,  -212,
     343,  -212,   -24,  -212,   101,   -36,   248,   358,  -212,    -3,
    -212,    62,    11,  -212,   411,  -212,  -212,   411,   379,   361,
     338,  -212,   363,   111,  -212,   341,  -212,  -212,   411,   366,
    -212,   195,  -212,    51,   369,   366,  -212,  -212,   210,   229,
     419,   411,   411,  -212,  -212,  -212,  -212,  -212,  -212,   -18,
    -212,  -212,   -18,  -212,  -212,   -18,  -212,  -212,  -212,   -18,
     -18,  -212,  -212,  -212,  -212,  -212,   411,   678,   615,   413,
     412,  -212,   418,   411,   678,  -212,    22,  -212,   615,  -212,
     615,   105,   440,  -212,   161,  -212,   249,   362,  -212,  -212,
    -212,  -212,   658,   343,   197,   106,   245,  -212,   438,  -212,
     684,  -212,   382,   411,   426,   382,   678,   405,  -212,   368,
    -212,   411,   411,  -212,   411,  -212,   437,   411,  -212,    13,
    -212,   411,   411,  -212,   395,  -212,   359,  -212,  -212,   209,
     311,  -212,  -212,  -212,  -212,  -212,  -212,  -212,   443,   615,
     420,  -212,    75,  -212,  -212,   449,   447,  -212,   381,   416,
     539,  -212,   533,  -212,  -212,  -212,   415,  -212,  -212,  -212,
     410,   678,   302,   474,  -212,   477,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,     3,  -212,  -212,  -212,   123,  -212,
    -212,  -212,   393,   421,   411,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,   417,   122,   480,  -212,   411,  -212,   133,   615,
    -212,   411,  -212,   431,   615,   486,   424,  -212,  -212,  -212,
     411,   425,   482,  -212,  -212,   475,   411,  -212,   484,   411,
     444,   615,  -212,   406,   433,  -212,  -212,   -26,   491,  -212,
     586,  -212,   411,  -212,   411,  -212,  -212,   422,   678,  -212,
     411,   615,  -212,   411,   615,  -212,   446,  -212,  -212,  -212,
    -212,  -212,  -212,   615,  -212
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     2,     3,     0,     0,     1,   211,
     211,    13,     0,     5,   229,     0,     0,     0,     0,   213,
       0,   210,     0,   215,    17,    18,    19,     0,    14,     6,
       0,     0,    11,   217,     0,     0,    80,   229,     0,    15,
       0,     0,   214,     0,   228,     0,     0,    16,     0,     0,
       0,   227,    79,    78,     0,     0,    38,    39,     0,     0,
      40,     0,    41,     0,     0,    23,     0,    24,    27,    35,
      28,    29,   212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    99,   197,   231,    90,    91,    92,
       0,    93,    94,    95,     0,    96,    97,    98,     0,     0,
       0,    12,   216,     0,     8,    88,     0,    77,    76,   225,
       0,     0,     0,    26,    47,    48,    49,     0,     0,     0,
       0,     0,     0,    21,    36,    37,     0,    33,   192,     0,
     191,   195,   196,   193,   194,     0,     0,     0,     0,     0,
     188,     0,   149,   151,   153,   155,   157,   165,   169,   173,
     178,   180,   184,   185,   186,   189,   110,     0,     0,   132,
       0,   239,     0,     0,     0,   136,     0,     0,   134,     0,
       0,   233,   112,     0,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,     0,     0,     0,    89,   230,     0,
       0,     0,     0,    66,    65,    64,   225,     0,    68,    67,
     225,   223,   225,    63,   225,     0,     0,    56,   221,     0,
     219,     0,     0,    25,     0,    46,    45,     0,    31,     0,
       0,    34,     0,     0,   187,     0,   154,   183,     0,    11,
     205,     0,   245,     0,     0,     0,   241,   243,     0,     0,
       0,     0,     0,   160,   161,   163,   158,   159,   162,     0,
     166,   167,     0,   170,   171,     0,   174,   175,   176,     0,
       0,   181,   182,   179,   111,   140,     0,     0,     0,     0,
     143,   144,     0,     0,     0,   139,     0,   138,     0,   133,
       0,     0,     0,   198,     0,   247,     0,     0,    10,     9,
     226,    81,     0,   225,   225,     0,   225,    62,     0,   222,
       0,    69,     0,     0,     0,     0,     0,     0,   218,     0,
      32,     0,     0,    22,     0,   190,     0,     0,   249,     0,
     202,     0,     0,   203,     0,   204,     0,   237,   235,     0,
     150,   152,   156,   164,   168,   172,   177,   127,     0,   148,
       0,   142,     0,   238,   145,   129,     0,   137,     0,     0,
       0,   113,     0,   125,   199,   200,     0,   100,    87,    86,
      85,     0,   225,     0,    61,     0,    60,    73,    70,    71,
      74,    75,    72,   224,     0,    55,    54,   220,     0,    50,
      20,    30,     0,    43,     0,   209,   201,   248,   244,   208,
     240,   242,     0,     0,     0,   234,     0,   141,     0,   147,
     131,     0,   135,     0,     0,     0,    11,   232,   114,   246,
       0,    84,     0,    59,    58,     0,     0,    52,     0,     0,
     207,     0,   123,   120,   122,   118,   126,     0,   130,   117,
       0,   124,     0,    83,     0,    57,    53,     0,     0,    42,
       0,   119,   236,     0,     0,   128,     0,   115,    82,    51,
      44,   206,   121,   146,   116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,  -212,  -212,  -212,  -212,   -16,  -212,  -212,  -212,   264,
     235,   -47,   356,   453,   303,   394,   454,  -211,  -212,  -212,
    -212,  -212,   314,  -212,   227,  -212,   327,  -190,  -212,   331,
    -212,   330,  -212,  -212,  -212,  -212,   487,   505,   -83,  -212,
    -212,  -212,  -212,   -42,  -212,  -212,  -212,   214,  -212,  -212,
    -212,  -162,  -212,   -80,  -212,  -212,  -212,  -212,  -212,  -212,
     274,    20,  -212,   306,   307,   423,  -212,   304,  -212,   296,
    -212,   297,  -212,   150,  -212,  -212,  -212,   427,  -212,   -38,
    -212,  -212,   231,  -135,   548,   -78,   541,   364,  -212,   275,
    -183,  -212,  -212,  -212,   -71,  -212,  -212,  -212,  -212,  -212,
    -212,   396,  -212,  -212
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,    13,    21,    85,     5,    11,    22,    23,
     198,    66,   199,    67,    68,   127,    69,   221,    70,    71,
     113,   114,   210,   115,   208,   116,   200,   201,   202,   203,
     373,    26,    37,    52,   191,   361,    53,    29,    86,    87,
     186,    88,    89,   140,   407,    91,    92,   328,   392,   423,
      93,    94,    95,   166,    96,    97,   269,   270,   343,   344,
     271,   222,   142,   143,   144,   145,   249,   146,   252,   147,
     255,   148,   259,   149,   150,   263,   151,   152,   153,   154,
     155,   231,   236,   232,    12,    27,    28,    34,   212,   209,
     204,   205,   106,    30,    99,   281,   329,   393,   272,   238,
     239,   233,   286,   319
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    90,   169,   105,   237,    98,   310,   161,   280,   128,
      50,   117,   163,   294,   299,    45,   188,   296,   100,    49,
     129,    18,   189,   173,    65,   304,   206,   266,   192,   163,
     164,   415,   102,   211,    65,   163,    90,   103,   292,   307,
      98,    19,    65,    46,   130,   131,   132,    32,   133,   134,
      76,   273,    90,    77,    41,    46,    98,    90,    47,   158,
     124,    98,   345,    56,    79,    57,    15,    20,   444,   318,
       6,   215,   216,     8,   135,   300,    19,   207,   188,    60,
      48,   125,    73,   137,    17,    51,     7,   224,   168,   138,
     188,   139,    74,   141,   157,   126,   159,    46,   267,   122,
     381,   167,    65,    65,   299,   165,   299,    62,   305,    75,
     362,   347,    76,   223,   305,    77,   288,   104,   123,    90,
      78,   386,   274,    98,    -7,    40,    79,    80,    81,   298,
      82,    90,    43,   124,   211,    98,    18,    31,    41,   128,
      83,   219,   220,   193,    19,   194,    41,   195,    18,   128,
     129,    15,   306,     9,   125,   225,    19,   387,   230,   320,
     129,   422,   321,    16,    84,    10,    19,   398,   217,    17,
      20,    35,   299,    41,   130,   131,   132,    32,   133,   134,
      46,    33,    20,   275,   130,   131,   132,    32,   133,   134,
     428,   391,    20,   416,    18,    46,   348,   339,    32,   351,
     364,   156,    19,   171,   135,   290,   287,   349,   136,   350,
     291,    36,   417,   137,   135,   265,   352,    48,   136,   138,
     338,   139,   327,   137,    38,   363,    90,   346,    20,   138,
      98,   139,    76,    46,   309,    77,    90,   394,    90,   193,
      98,   194,    98,   195,   128,   360,    79,    24,   316,   234,
     235,    65,    56,     1,    57,   129,   188,    24,    65,   378,
      55,     2,    19,    24,    72,    24,   188,   188,    60,   354,
     228,   399,   321,   365,    24,    50,    65,   250,   251,   130,
     131,   132,   229,   133,   134,   101,   337,   193,    20,   194,
      65,   195,    42,   108,    44,   118,    62,    90,   253,   254,
      90,    98,    63,    42,    98,   261,   262,    90,    90,   135,
      19,    98,    98,   136,   411,   193,   188,   194,   137,   195,
     323,   324,   119,   375,   138,   160,   139,   162,   183,   184,
     412,   185,   382,   430,   383,   121,    20,   385,    19,   325,
     326,   388,   389,   170,   193,    65,   194,   188,   195,    19,
     441,   193,   172,   194,   190,   195,   213,    90,   188,   355,
     356,    98,    90,   214,    20,   197,    98,    19,    25,   196,
     188,   240,   408,   453,    19,   243,   244,   245,    25,    90,
     241,   260,   427,    98,    25,   193,    25,   194,    90,   195,
     242,   450,    98,    20,   264,    25,   246,   247,   248,    90,
      20,   197,    90,    98,   420,   276,    98,   277,    19,   335,
     336,    90,   278,   424,   279,    98,   426,   256,   257,   258,
     283,   285,    65,    73,   235,   289,   311,   313,   303,   312,
     433,   314,   327,    74,    20,   315,   437,   317,   128,   439,
     322,   340,   268,   342,   403,   353,   366,   207,   376,   129,
      75,   357,   447,    76,   448,   379,    77,   380,   384,   234,
     451,    78,   396,   452,   400,   397,   401,    79,    80,    81,
     402,    82,   404,   130,   131,   132,    32,   133,   134,   409,
     410,    83,   413,    73,   429,   414,   418,   425,   421,   419,
     435,   431,    73,    74,   432,   434,   442,   436,   438,   454,
     440,   443,    74,   135,   187,    84,   445,   136,   112,   302,
      75,   449,   137,    76,   218,   268,    77,   120,   138,    75,
     139,    78,    76,   293,    73,    77,   308,    79,    80,    81,
      78,    82,   377,   297,    74,   301,    79,    80,    81,   107,
      82,    83,    54,   395,   341,   282,    73,   330,   333,   331,
      83,    75,   334,   332,    76,   390,    74,    77,    14,   226,
     128,   295,    78,    39,   227,    84,     0,   405,    79,    80,
      81,   129,    82,    75,    84,     0,    76,   374,     0,    77,
     284,     0,    83,     0,    78,     0,     0,     0,     0,     0,
      79,    80,    81,    73,    82,   130,   131,   132,   406,   133,
     134,     0,     0,    74,    83,     0,    84,     0,   128,     0,
       0,     0,     0,     0,   446,     0,     0,     0,     0,   129,
      75,     0,    73,    76,     0,   135,    77,     0,    84,   136,
       0,    78,    74,     0,   137,     0,     0,    79,    80,    81,
     138,    82,   139,   130,   131,   132,    32,   133,   134,    75,
       0,    83,    76,     0,     0,    77,     0,     0,     0,     0,
      78,     0,    56,     0,    57,     0,    79,    80,    81,     0,
      82,     0,     0,   135,     0,    84,    59,    56,    60,    57,
      83,     0,    56,    58,    57,     0,     0,   367,   138,     0,
     139,    59,     0,    60,    61,   368,    59,     0,    60,     0,
     369,     0,     0,     0,    84,     0,    62,   358,   370,    61,
       0,     0,    63,   371,    61,   372,    64,     0,     0,   359,
       0,    62,     0,    32,     0,     0,    62,    63,     0,     0,
       0,    64,    63,    56,     0,    57,    64,   109,    32,     0,
       0,     0,     0,    32,     0,   174,     0,    59,     0,    60,
       0,   110,     0,     0,     0,     0,   175,   176,   177,   178,
     179,   180,   181,   182,     0,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,   111,
       0,   183,   184,    63,   185,     0,     0,    64
};

static const yytype_int16 yycheck[] =
{
      16,    43,    82,    50,   139,    43,   217,    78,   170,    27,
      17,    58,    13,   196,   204,    31,    99,   200,    32,    35,
      38,    57,   100,    94,    40,    28,    14,    19,   106,    13,
      14,    28,    48,   111,    50,    13,    78,     9,    95,    28,
      78,    65,    58,    69,    62,    63,    64,    65,    66,    67,
      37,    19,    94,    40,   111,    69,    94,    99,    89,    75,
      12,    99,   273,     4,    51,     6,    14,    91,    94,   231,
      65,   118,   119,     0,    92,   111,    65,    65,   161,    20,
     111,    33,     7,   101,    32,    92,    65,   129,    89,   107,
     173,   109,    17,    73,    74,    47,    76,    69,    90,    70,
     311,    81,   118,   119,   294,    89,   296,    48,   111,    34,
     293,    89,    37,   129,   111,    40,    89,    89,    89,   161,
      45,   108,    90,   161,     0,    90,    51,    52,    53,    28,
      55,   173,    41,    12,   212,   173,    57,    35,   111,    27,
      65,   121,   122,    42,    65,    44,   111,    46,    57,    27,
      38,    14,    90,    89,    33,   135,    65,   319,   138,   108,
      38,    39,   111,    26,    89,    89,    65,    92,    47,    32,
      91,    35,   362,   111,    62,    63,    64,    65,    66,    67,
      69,   197,    91,   163,    62,    63,    64,    65,    66,    67,
     401,   326,    91,    70,    57,    69,   276,   268,    65,    94,
      94,    89,    65,    92,    92,    89,   186,   278,    96,   280,
      94,    65,    89,   101,    92,    89,   111,   111,    96,   107,
     267,   109,    13,   101,    65,    28,   268,   274,    91,   107,
     268,   109,    37,    69,   214,    40,   278,    28,   280,    42,
     278,    44,   280,    46,    27,   292,    51,    12,   228,    64,
      65,   267,     4,    35,     6,    38,   339,    22,   274,   306,
      23,    43,    65,    28,    65,    30,   349,   350,    20,   108,
      53,   342,   111,    28,    39,    17,   292,    74,    75,    62,
      63,    64,    65,    66,    67,    65,   266,    42,    91,    44,
     306,    46,    28,    57,    30,    14,    48,   339,   100,   101,
     342,   339,    54,    39,   342,    72,    73,   349,   350,    92,
      65,   349,   350,    96,   361,    42,   399,    44,   101,    46,
     110,   111,    14,   303,   107,    65,   109,    65,   106,   107,
      28,   109,   312,   404,   314,    92,    91,   317,    65,   110,
     111,   321,   322,    90,    42,   361,    44,   430,    46,    65,
     421,    42,    89,    44,    65,    46,    89,   399,   441,   110,
     111,   399,   404,    70,    91,    92,   404,    65,    12,    60,
     453,    23,   352,   444,    65,    76,    77,    78,    22,   421,
      80,   105,   398,   421,    28,    42,    30,    44,   430,    46,
      79,   438,   430,    91,    89,    39,    97,    98,    99,   441,
      91,    92,   444,   441,   384,    65,   444,    89,    65,   259,
     260,   453,    21,   393,    89,   453,   396,   102,   103,   104,
      65,    64,   438,     7,    65,    89,    47,    89,    70,    68,
     410,    68,    13,    17,    91,    94,   416,    71,    27,   419,
      71,    28,    30,    25,    28,     5,     8,    65,    22,    38,
      34,    89,   432,    37,   434,    50,    40,    89,    21,    64,
     440,    45,    19,   443,    15,    45,    19,    51,    52,    53,
      89,    55,    56,    62,    63,    64,    65,    66,    67,    64,
      70,    65,     8,     7,    53,     8,    93,     7,    71,    68,
       8,     5,     7,    17,    70,    70,    90,    22,    14,    53,
      56,    68,    17,    92,    28,    89,    15,    96,    55,   206,
      34,    89,   101,    37,   120,    30,    40,    63,   107,    34,
     109,    45,    37,   196,     7,    40,   212,    51,    52,    53,
      45,    55,   305,   202,    17,   205,    51,    52,    53,    52,
      55,    65,    37,   329,   270,    28,     7,   241,   252,   242,
      65,    34,   255,   249,    37,   324,    17,    40,    10,   136,
      27,   197,    45,    22,   137,    89,    -1,    28,    51,    52,
      53,    38,    55,    34,    89,    -1,    37,   302,    -1,    40,
     184,    -1,    65,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,     7,    55,    62,    63,    64,    65,    66,
      67,    -1,    -1,    17,    65,    -1,    89,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    38,
      34,    -1,     7,    37,    -1,    92,    40,    -1,    89,    96,
      -1,    45,    17,    -1,   101,    -1,    -1,    51,    52,    53,
     107,    55,   109,    62,    63,    64,    65,    66,    67,    34,
      -1,    65,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      45,    -1,     4,    -1,     6,    -1,    51,    52,    53,    -1,
      55,    -1,    -1,    92,    -1,    89,    18,     4,    20,     6,
      65,    -1,     4,    10,     6,    -1,    -1,     3,   107,    -1,
     109,    18,    -1,    20,    36,    11,    18,    -1,    20,    -1,
      16,    -1,    -1,    -1,    89,    -1,    48,    49,    24,    36,
      -1,    -1,    54,    29,    36,    31,    58,    -1,    -1,    61,
      -1,    48,    -1,    65,    -1,    -1,    48,    54,    -1,    -1,
      -1,    58,    54,     4,    -1,     6,    58,     8,    65,    -1,
      -1,    -1,    -1,    65,    -1,    70,    -1,    18,    -1,    20,
      -1,    22,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,
      -1,   106,   107,    54,   109,    -1,    -1,    58
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   113,   114,   118,    65,    65,     0,    89,
      89,   119,   196,   115,   196,    14,    26,    32,    57,    65,
      91,   116,   120,   121,   122,   124,   143,   197,   198,   149,
     205,    35,    65,   117,   199,    35,    65,   144,    65,   198,
      90,   111,   121,    41,   121,   117,    69,    89,   111,   117,
      17,    92,   145,   148,   149,    23,     4,     6,    10,    18,
      20,    36,    48,    54,    58,   117,   123,   125,   126,   128,
     130,   131,    65,     7,    17,    34,    37,    40,    45,    51,
      52,    53,    55,    65,    89,   117,   150,   151,   153,   154,
     155,   157,   158,   162,   163,   164,   166,   167,   191,   206,
      32,    65,   117,     9,    89,   123,   204,   148,    57,     8,
      22,    50,   125,   132,   133,   135,   137,   123,    14,    14,
     128,    92,    70,    89,    12,    33,    47,   127,    27,    38,
      62,    63,    64,    66,    67,    92,    96,   101,   107,   109,
     155,   173,   174,   175,   176,   177,   179,   181,   183,   185,
     186,   188,   189,   190,   191,   192,    89,   173,   117,   173,
      65,   206,    65,    13,    14,    89,   165,   173,    89,   165,
      90,    92,    89,   206,    70,    81,    82,    83,    84,    85,
      86,    87,    88,   106,   107,   109,   152,    28,   150,   197,
      65,   146,   197,    42,    44,    46,    60,    92,   122,   124,
     138,   139,   140,   141,   202,   203,    14,    65,   136,   201,
     134,   197,   200,    89,    70,   123,   123,    47,   127,   173,
     173,   129,   173,   117,   155,   173,   177,   189,    53,    65,
     173,   193,   195,   213,    64,    65,   194,   195,   211,   212,
      23,    80,    79,    76,    77,    78,    97,    98,    99,   178,
      74,    75,   180,   100,   101,   182,   102,   103,   104,   184,
     105,    72,    73,   187,    89,    89,    19,    90,    30,   168,
     169,   172,   210,    19,    90,   173,    65,    89,    21,    89,
     163,   207,    28,    65,   213,    64,   214,   173,    89,    89,
      89,    94,    95,   138,   202,   199,   202,   141,    28,   139,
     111,   143,   126,    70,    28,   111,    90,    28,   134,   173,
     129,    47,    68,    89,    68,    94,   173,    71,   163,   215,
     108,   111,    71,   110,   111,   110,   111,    13,   159,   208,
     175,   176,   179,   181,   183,   185,   185,   173,   123,   206,
      28,   172,    25,   170,   171,   129,   123,    89,   165,   206,
     206,    94,   111,     5,   108,   110,   111,    89,    49,    61,
     123,   147,   202,    28,    94,    28,     8,     3,    11,    16,
      24,    29,    31,   142,   201,   173,    22,   136,   123,    50,
      89,   129,   173,   173,    21,   173,   108,   163,   173,   173,
     194,   195,   160,   209,    28,   159,    19,    45,    92,   206,
      15,    19,    89,    28,    56,    28,    65,   156,   173,    64,
      70,   123,    28,     8,     8,    28,    70,    89,    93,    68,
     173,    71,    39,   161,   173,     7,   173,   117,   129,    53,
     206,     5,    70,   173,    70,     8,    22,   173,    14,   173,
      56,   206,    90,    68,    94,    15,    28,   173,   173,    89,
     123,   173,   173,   206,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1706 "chusco.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
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

