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

extern int yyerror(char *s);

#define YYDEBUG 1


#line 83 "chusco.tab.c"

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
  YYSYMBOL_90_n_ = 90,                     /* '\n'  */
  YYSYMBOL_91_ = 91,                       /* ':'  */
  YYSYMBOL_92_ = 92,                       /* '('  */
  YYSYMBOL_93_ = 93,                       /* ')'  */
  YYSYMBOL_94_ = 94,                       /* '~'  */
  YYSYMBOL_95_ = 95,                       /* '<'  */
  YYSYMBOL_96_ = 96,                       /* '>'  */
  YYSYMBOL_97_ = 97,                       /* '='  */
  YYSYMBOL_98_ = 98,                       /* '+'  */
  YYSYMBOL_99_ = 99,                       /* '-'  */
  YYSYMBOL_100_ = 100,                     /* '*'  */
  YYSYMBOL_101_ = 101,                     /* '/'  */
  YYSYMBOL_102_ = 102,                     /* '\\'  */
  YYSYMBOL_103_ = 103,                     /* '^'  */
  YYSYMBOL_104_ = 104,                     /* '.'  */
  YYSYMBOL_105_ = 105,                     /* '['  */
  YYSYMBOL_106_ = 106,                     /* ']'  */
  YYSYMBOL_107_ = 107,                     /* '{'  */
  YYSYMBOL_108_ = 108,                     /* '}'  */
  YYSYMBOL_109_ = 109,                     /* ','  */
  YYSYMBOL_YYACCEPT = 110,                 /* $accept  */
  YYSYMBOL_programa = 111,                 /* programa  */
  YYSYMBOL_definicion_programa = 112,      /* definicion_programa  */
  YYSYMBOL_codigo_programa = 113,          /* codigo_programa  */
  YYSYMBOL_libreria = 114,                 /* libreria  */
  YYSYMBOL_nombre = 115,                   /* nombre  */
  YYSYMBOL_definicion_libreria = 116,      /* definicion_libreria  */
  YYSYMBOL_codigo_libreria = 117,          /* codigo_libreria  */
  YYSYMBOL_exportaciones = 118,            /* exportaciones  */
  YYSYMBOL_declaracion = 119,              /* declaracion  */
  YYSYMBOL_declaracion_objeto = 120,       /* declaracion_objeto  */
  YYSYMBOL_especificacion_tipo = 121,      /* especificacion_tipo  */
  YYSYMBOL_declaracion_tipo = 122,         /* declaracion_tipo  */
  YYSYMBOL_tipo_no_estructurado = 123,     /* tipo_no_estructurado  */
  YYSYMBOL_tipo_escalar = 124,             /* tipo_escalar  */
  YYSYMBOL_longitud = 125,                 /* longitud  */
  YYSYMBOL_tipo_basico = 126,              /* tipo_basico  */
  YYSYMBOL_rango = 127,                    /* rango  */
  YYSYMBOL_tipo_tabla = 128,               /* tipo_tabla  */
  YYSYMBOL_tipo_diccionario = 129,         /* tipo_diccionario  */
  YYSYMBOL_tipo_estructurado = 130,        /* tipo_estructurado  */
  YYSYMBOL_tipo_registro = 131,            /* tipo_registro  */
  YYSYMBOL_campo = 132,                    /* campo  */
  YYSYMBOL_tipo_enumerado = 133,           /* tipo_enumerado  */
  YYSYMBOL_elemento_enumeracion = 134,     /* elemento_enumeracion  */
  YYSYMBOL_clase = 135,                    /* clase  */
  YYSYMBOL_superclases = 136,              /* superclases  */
  YYSYMBOL_declaracion_componente = 137,   /* declaracion_componente  */
  YYSYMBOL_visibilidad = 138,              /* visibilidad  */
  YYSYMBOL_componente = 139,               /* componente  */
  YYSYMBOL_modificador = 140,              /* modificador  */
  YYSYMBOL_declaracion_subprograma = 141,  /* declaracion_subprograma  */
  YYSYMBOL_cabecera_subprograma = 142,     /* cabecera_subprograma  */
  YYSYMBOL_parametrizacion = 143,          /* parametrizacion  */
  YYSYMBOL_declaracion_parametros = 144,   /* declaracion_parametros  */
  YYSYMBOL_modo = 145,                     /* modo  */
  YYSYMBOL_tipo_resultado = 146,           /* tipo_resultado  */
  YYSYMBOL_cuerpo_subprograma = 147,       /* cuerpo_subprograma  */
  YYSYMBOL_instruccion = 148,              /* instruccion  */
  YYSYMBOL_instruccion_asignacion = 149,   /* instruccion_asignacion  */
  YYSYMBOL_op_asignacion = 150,            /* op_asignacion  */
  YYSYMBOL_instruccion_devolver = 151,     /* instruccion_devolver  */
  YYSYMBOL_instruccion_llamada = 152,      /* instruccion_llamada  */
  YYSYMBOL_llamada_subprograma = 153,      /* llamada_subprograma  */
  YYSYMBOL_definicion_parametro = 154,     /* definicion_parametro  */
  YYSYMBOL_instruccion_si = 155,           /* instruccion_si  */
  YYSYMBOL_instruccion_casos = 156,        /* instruccion_casos  */
  YYSYMBOL_caso = 157,                     /* caso  */
  YYSYMBOL_entradas = 158,                 /* entradas  */
  YYSYMBOL_entrada = 159,                  /* entrada  */
  YYSYMBOL_instruccion_bucle = 160,        /* instruccion_bucle  */
  YYSYMBOL_clausula_iteracion = 161,       /* clausula_iteracion  */
  YYSYMBOL_instruccion_interrupcion = 162, /* instruccion_interrupcion  */
  YYSYMBOL_cuando = 163,                   /* cuando  */
  YYSYMBOL_instruccion_lanzamiento_excepcion = 164, /* instruccion_lanzamiento_excepcion  */
  YYSYMBOL_instruccion_captura_excepcion = 165, /* instruccion_captura_excepcion  */
  YYSYMBOL_clausulas = 166,                /* clausulas  */
  YYSYMBOL_clausulas_excepcion = 167,      /* clausulas_excepcion  */
  YYSYMBOL_clausula_excepcion_especifica = 168, /* clausula_excepcion_especifica  */
  YYSYMBOL_clausula_excepcion_general = 169, /* clausula_excepcion_general  */
  YYSYMBOL_clausula_finalmente = 170,      /* clausula_finalmente  */
  YYSYMBOL_expresion = 171,                /* expresion  */
  YYSYMBOL_expresion_or = 172,             /* expresion_or  */
  YYSYMBOL_expresion_and = 173,            /* expresion_and  */
  YYSYMBOL_expresion_neg = 174,            /* expresion_neg  */
  YYSYMBOL_expresion_relacional = 175,     /* expresion_relacional  */
  YYSYMBOL_operador_relacional = 176,      /* operador_relacional  */
  YYSYMBOL_expresion_desplazamiento = 177, /* expresion_desplazamiento  */
  YYSYMBOL_operador_desplazamiento = 178,  /* operador_desplazamiento  */
  YYSYMBOL_expresion_add = 179,            /* expresion_add  */
  YYSYMBOL_operador_add = 180,             /* operador_add  */
  YYSYMBOL_expresion_mult_div = 181,       /* expresion_mult_div  */
  YYSYMBOL_operador_mult_div = 182,        /* operador_mult_div  */
  YYSYMBOL_expresion_potencia = 183,       /* expresion_potencia  */
  YYSYMBOL_expresion_posfija = 184,        /* expresion_posfija  */
  YYSYMBOL_operador_posfijo = 185,         /* operador_posfijo  */
  YYSYMBOL_expresion_unaria = 186,         /* expresion_unaria  */
  YYSYMBOL_primario = 187,                 /* primario  */
  YYSYMBOL_literal = 188,                  /* literal  */
  YYSYMBOL_objeto = 189,                   /* objeto  */
  YYSYMBOL_enumeraciones = 190,            /* enumeraciones  */
  YYSYMBOL_expresion_condicional = 191,    /* expresion_condicional  */
  YYSYMBOL_clave_valor = 192,              /* clave_valor  */
  YYSYMBOL_campo_valor = 193,              /* campo_valor  */
  YYSYMBOL_libreria_ast = 194,             /* libreria_ast  */
  YYSYMBOL_identificador_rep_comas = 195,  /* identificador_rep_comas  */
  YYSYMBOL_declaracion_rep = 196,          /* declaracion_rep  */
  YYSYMBOL_nombre_rep_comas = 197,         /* nombre_rep_comas  */
  YYSYMBOL_campo_rep = 198,                /* campo_rep  */
  YYSYMBOL_elemento_enumeracion_rep_comas = 199, /* elemento_enumeracion_rep_comas  */
  YYSYMBOL_declaracion_componente_rep = 200, /* declaracion_componente_rep  */
  YYSYMBOL_modificador_ast_comas_1 = 201,  /* modificador_ast_comas_1  */
  YYSYMBOL_modificador_ast_comas = 202,    /* modificador_ast_comas  */
  YYSYMBOL_declaracion_parametros_ast_puntocoma = 203, /* declaracion_parametros_ast_puntocoma  */
  YYSYMBOL_declaracion_ast = 204,          /* declaracion_ast  */
  YYSYMBOL_instruccion_rep = 205,          /* instruccion_rep  */
  YYSYMBOL_definicion_parametro_ast_comas_1 = 206, /* definicion_parametro_ast_comas_1  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  262
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  471

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   343


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
      90,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      92,    93,   100,    98,   109,    99,   104,   101,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    89,
      95,    97,    96,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   105,   102,   106,   103,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   107,     2,   108,    94,     2,     2,     2,
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
      85,    86,    87,    88
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    31,    35,    39,    40,    44,    45,    46,
      47,    51,    52,    56,    57,    61,    62,    66,    67,    71,
      72,    73,    83,    84,    85,    86,    90,    91,    92,   102,
     103,   107,   108,   109,   113,   114,   115,   116,   117,   118,
     119,   120,   124,   125,   129,   130,   131,   132,   136,   137,
     141,   142,   146,   150,   151,   152,   156,   160,   161,   165,
     166,   170,   171,   181,   182,   183,   184,   185,   189,   193,
     194,   198,   199,   200,   204,   205,   206,   210,   211,   212,
     213,   214,   215,   225,   229,   230,   231,   232,   236,   240,
     241,   242,   243,   247,   248,   252,   256,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   279,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   295,   296,
     301,   305,   309,   310,   314,   315,   319,   323,   327,   331,
     332,   333,   337,   338,   342,   343,   344,   345,   346,   347,
     348,   352,   353,   354,   355,   356,   357,   361,   365,   369,
     373,   374,   375,   379,   383,   387,   391,   401,   402,   406,
     407,   411,   412,   416,   417,   421,   422,   426,   427,   428,
     429,   430,   431,   435,   436,   440,   441,   445,   446,   450,
     451,   455,   456,   460,   461,   462,   466,   467,   472,   473,
     478,   479,   483,   484,   488,   489,   490,   491,   492,   493,
     497,   498,   499,   500,   501,   502,   506,   507,   508,   509,
     513,   514,   515,   516,   520,   521,   522,   526,   530,   539,
     540,   544,   545,   549,   550,   554,   555,   559,   560,   564,
     565,   569,   570,   574,   575,   579,   580,   584,   585,   589,
     590,   594,   595,   599,   600,   604,   605,   609,   610,   614,
     615,   619,   620,   624,   625,   629,   630,   634,   635,   639,
     640,   644,   645
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
  "ASIG_DESPI", "ASIG_DESPD", "';'", "'\\n'", "':'", "'('", "')'", "'~'",
  "'<'", "'>'", "'='", "'+'", "'-'", "'*'", "'/'", "'\\\\'", "'^'", "'.'",
  "'['", "']'", "'{'", "'}'", "','", "$accept", "programa",
  "definicion_programa", "codigo_programa", "libreria", "nombre",
  "definicion_libreria", "codigo_libreria", "exportaciones", "declaracion",
  "declaracion_objeto", "especificacion_tipo", "declaracion_tipo",
  "tipo_no_estructurado", "tipo_escalar", "longitud", "tipo_basico",
  "rango", "tipo_tabla", "tipo_diccionario", "tipo_estructurado",
  "tipo_registro", "campo", "tipo_enumerado", "elemento_enumeracion",
  "clase", "superclases", "declaracion_componente", "visibilidad",
  "componente", "modificador", "declaracion_subprograma",
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
  "expresion_neg", "expresion_relacional", "operador_relacional",
  "expresion_desplazamiento", "operador_desplazamiento", "expresion_add",
  "operador_add", "expresion_mult_div", "operador_mult_div",
  "expresion_potencia", "expresion_posfija", "operador_posfijo",
  "expresion_unaria", "primario", "literal", "objeto", "enumeraciones",
  "expresion_condicional", "clave_valor", "campo_valor", "libreria_ast",
  "identificador_rep_comas", "declaracion_rep", "nombre_rep_comas",
  "campo_rep", "elemento_enumeracion_rep_comas",
  "declaracion_componente_rep", "modificador_ast_comas_1",
  "modificador_ast_comas", "declaracion_parametros_ast_puntocoma",
  "declaracion_ast", "instruccion_rep", "definicion_parametro_ast_comas_1",
  "definicion_parametro_ast_comas", "caso_rep", "entrada_rep_dospuntos",
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

#define YYPACT_NINF (-230)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-259)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      38,  -230,   -20,    -9,    66,  -230,  -230,    34,    42,  -230,
    -230,    71,  -230,   292,  -230,    89,    46,   128,    96,   133,
     107,   132,  -230,  -230,   219,  -230,  -230,  -230,  -230,    83,
     219,   104,  -230,   187,  -230,  -230,    96,  -230,   144,   -48,
      96,    16,  -230,   204,   219,   206,   158,  -230,   865,  -230,
      17,   166,  -230,    96,    22,   214,  -230,   218,  -230,   180,
    1106,    37,  -230,  -230,   214,   233,  -230,   261,  -230,   147,
     188,   144,    82,  -230,  -230,   126,  -230,  -230,  -230,   193,
     502,    50,    96,   502,   225,   865,   227,     7,   502,    13,
     212,  -230,   -39,  -230,  -230,  -230,  -230,   221,  -230,  -230,
    -230,   865,  -230,  -230,  -230,  1062,   678,   230,  -230,   144,
     243,  -230,  -230,  -230,   230,  -230,  -230,  -230,   116,     2,
     230,   239,  -230,  -230,  -230,  -230,   271,   214,   214,   131,
     502,   502,  -230,  -230,  -230,   502,   270,  -230,  -230,  -230,
      96,  -230,  -230,  -230,  -230,  -230,   502,   873,   919,   366,
     192,  -230,   320,   272,   279,  -230,   392,   191,   223,   198,
    -230,   263,   240,  -230,  -230,   200,  -230,  -230,   275,     0,
    -230,     6,   308,    29,   502,   285,  -230,   283,   353,  -230,
     288,   185,   385,  -230,   718,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,   314,   502,   317,   502,  -230,  -230,
     -15,   293,    35,    97,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,    41,    96,  -230,  -230,  1046,  -230,  1075,
    -230,  -230,   976,   328,   278,   281,   318,  -230,   -17,  -230,
     108,    19,  -230,   502,  -230,  -230,   502,   343,   323,   305,
    -230,   332,   502,   -39,  -230,   309,   392,  -230,   502,   -27,
     185,   152,   335,   336,  -230,  -230,   228,   231,   395,   859,
     859,  -230,  -230,  -230,  -230,  -230,  -230,   873,  -230,  -230,
     873,  -230,  -230,   873,  -230,  -230,  -230,   873,   873,  -230,
    -230,  -230,  -230,  -230,   502,   214,   865,   382,   383,  -230,
     391,   502,   214,  -230,    15,  -230,   865,  -230,   865,   347,
    -230,  -230,   327,   312,   419,  -230,  -230,   177,  -230,   247,
     338,  -230,  -230,  -230,  -230,   941,  1046,   985,   -59,  1014,
    -230,   427,  -230,  -230,   174,   373,   502,   417,   373,   214,
     390,  -230,   352,  -230,   502,   502,  -230,   502,  -230,  -230,
     421,  -230,    -8,  -230,   502,   502,   502,  -230,   389,  -230,
     381,  -230,  -230,    27,   279,  -230,   191,   223,   198,  -230,
    -230,  -230,   435,   740,   412,  -230,   149,  -230,  -230,   444,
     443,  -230,   372,   583,   780,   502,  -230,   514,  -230,  -230,
    -230,   399,  -230,  -230,  -230,   394,   214,  1043,   459,  -230,
     472,  -230,  -230,   -14,  -230,  -230,  -230,    95,  -230,  -230,
    -230,   388,   415,   502,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,   414,   455,   484,  -230,   502,  -230,    96,   615,  -230,
     502,  -230,   445,   865,   490,  -230,  -230,  -230,   502,   426,
     489,  -230,  -230,   477,   502,  -230,   486,   502,   448,   865,
    -230,   410,   437,  -230,  -230,   -33,   491,  -230,   802,  -230,
    -230,   502,  -230,  -230,   418,   214,  -230,   502,   656,  -230,
     502,   865,  -230,   456,  -230,  -230,  -230,  -230,  -230,   843,
    -230
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    14,     0,     0,     0,     2,     3,     0,     0,     1,
     220,   220,    13,     0,     4,     0,     0,     0,     0,     0,
       0,     0,   222,   219,     0,   224,    19,    20,    21,     0,
      15,     0,     5,     0,    10,    18,     0,    11,   226,     0,
       0,    87,   240,     0,    16,     0,     0,   223,     0,   239,
       0,     0,    17,     0,     0,     0,   238,    86,    85,     0,
       0,    25,    44,    45,     0,     0,    46,     0,    47,     0,
       0,    26,     0,    27,    31,    41,    32,    33,   221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,   107,   206,   242,    97,    98,    99,     0,   100,   101,
     102,     0,   103,   104,   105,     0,     0,     0,    12,   225,
       0,     7,    28,    95,     0,    84,    83,    67,   234,     0,
       0,     0,    30,    53,    54,    55,     0,     0,     0,    37,
       0,     0,    23,    42,    43,     0,    38,   106,   158,   201,
       0,   200,   204,   205,   202,   203,     0,     0,     0,     0,
       0,   196,     0,   157,   160,   162,   164,   166,   174,   178,
     182,   187,   189,   192,   194,   195,   198,   119,     0,     0,
     140,     0,     0,     0,     0,     0,   144,     0,     0,   142,
       0,     0,     0,   120,     0,   109,   110,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,    96,   241,
       0,     0,     0,     0,    80,    77,    78,    81,    82,    79,
      73,    72,    71,   234,     0,    75,    74,   234,   232,   234,
      70,   236,   234,     0,   233,     0,    62,   230,     0,   228,
       0,     0,    29,     0,    52,    51,     0,    35,     0,     0,
      40,     0,     0,     0,   197,     0,   163,   193,     0,   214,
       0,     0,     0,     0,   254,   256,     0,     0,     0,     0,
       0,   169,   170,   172,   167,   168,   171,     0,   175,   176,
       0,   179,   180,     0,   183,   184,   185,     0,     0,   190,
     191,   188,   118,   148,     0,     0,     0,     0,   151,   152,
       0,     0,     0,   147,     0,   146,     0,   141,     0,    11,
     246,   122,     0,   243,     0,   207,   258,     0,   260,     0,
       0,     9,     8,   237,    88,     0,   234,   234,     0,   234,
      69,     0,   231,    76,     0,     0,     0,     0,     0,     0,
       0,   227,     0,    36,     0,     0,    24,     0,    39,   199,
       0,   262,     0,   211,     0,     0,     0,   212,     0,   213,
       0,   250,   248,     0,   159,   161,   165,   173,   177,   181,
     186,   135,     0,     0,     0,   150,     0,   251,   153,   137,
       0,   145,     0,     0,     0,     0,   121,     0,   133,   208,
     209,     0,   108,    94,    93,    92,     0,   234,     0,    68,
       0,    66,   235,     0,    61,    60,   229,     0,    56,    22,
      34,     0,    48,     0,   210,   261,   257,   217,   218,   253,
     255,     0,     0,     0,   247,     0,   149,     0,     0,   139,
       0,   143,     0,     0,     0,   123,   245,   259,     0,    91,
       0,    65,    64,     0,     0,    57,     0,     0,   215,     0,
     131,   128,   130,   126,   134,     0,   138,   125,     0,   132,
      90,     0,    63,    59,     0,     0,    49,     0,     0,   249,
       0,     0,   136,     0,    89,    58,    50,   216,   129,     0,
     124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,  -230,  -230,   -18,  -230,  -230,  -230,   258,
     365,   -52,   442,   450,   287,   379,   447,  -229,  -230,  -230,
    -230,  -230,   282,  -230,   195,  -230,   311,  -218,  -230,   306,
     202,   307,  -230,  -230,  -230,  -230,   471,   492,  -104,  -230,
    -230,  -230,  -230,   -47,   154,  -230,  -230,   179,  -230,  -230,
    -230,  -172,  -230,   -83,  -230,  -230,  -230,  -230,  -230,  -230,
     249,    99,  -230,   276,   284,   396,  -230,   286,  -230,   268,
    -230,   266,  -230,    92,  -230,  -230,  -230,   397,  -230,   -43,
    -230,  -230,   194,   196,   537,   -97,   527,   341,  -230,   232,
    -198,  -230,  -230,  -230,  -230,   -77,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,   363,  -230,  -230
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,    14,    23,    92,     6,    12,    24,    25,
     215,    72,   216,    73,    74,   136,    75,   240,    76,    77,
     122,   123,   229,   124,   227,   125,   217,   218,   219,   220,
     221,    28,    42,    57,   202,   386,    58,    32,    93,    94,
     197,    95,    96,   151,   300,    98,    99,   352,   411,   441,
     100,   101,   102,   177,   103,   104,   287,   288,   367,   368,
     289,   241,   153,   154,   155,   156,   267,   157,   270,   158,
     273,   159,   277,   160,   161,   281,   162,   163,   164,   165,
     166,   250,   254,   255,    13,    29,    30,    39,   231,   228,
     222,   223,   224,   114,    33,   106,   302,   303,   353,   412,
     290,   256,   257,   251,   309,   342
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    97,   199,   113,   322,   105,   180,   333,   172,   298,
     200,   327,   126,   338,   433,   317,   225,   203,    50,   319,
     174,   175,    54,   230,   184,   284,   174,    71,   174,    83,
      51,   110,    84,    55,   389,   109,    51,    71,    97,     1,
     351,    52,   105,    86,   204,     7,    71,   330,   291,   107,
      53,   138,   205,   182,    97,   413,     8,   206,   105,    97,
     461,    53,   369,   105,   169,   207,     9,   226,   199,    51,
     208,    -6,   209,     2,   311,   234,   235,   139,   341,  -258,
     199,     3,  -258,   210,    22,   211,    51,   212,   140,   283,
      31,    51,   328,   244,    46,   328,   176,   285,   404,   322,
      21,   322,   179,    17,   371,   400,    22,   -28,    56,    71,
      71,   111,   141,   142,   143,    37,   144,   145,   387,   204,
     292,    19,   243,    10,   313,    97,   -28,   205,   314,   105,
    -240,    11,   206,   214,   230,    34,    35,    97,   133,   167,
     207,   105,   146,   133,   147,   208,  -240,   209,  -240,   148,
      79,    62,   131,    63,  -240,   149,    80,   150,   210,   134,
     211,    37,   212,    36,   134,   434,    81,    66,    40,   322,
     405,   132,    41,   135,    45,    21,   213,   204,   236,   152,
     168,    22,   170,    82,   435,   205,    83,   178,   315,    84,
     206,   446,    46,    34,    85,    68,    38,    43,   207,   329,
      86,    87,    88,   208,    89,   209,    46,    61,   214,   363,
      62,   372,    63,    51,    90,   112,    64,    46,    62,   373,
      63,   374,    83,    78,    65,    84,    66,    60,    48,   238,
     239,   108,    65,   362,    66,    55,    86,   116,    91,    97,
     370,   417,    67,   105,    20,   245,    21,   127,   249,    97,
      67,    97,    22,   105,    68,   105,   252,   253,   343,   199,
      69,   344,    68,   385,    70,   268,   269,    71,    69,   199,
     199,    37,    70,   293,    71,   128,    20,   397,    21,    37,
     130,   301,   137,   379,    22,    62,   344,    63,    47,   418,
     171,    49,   173,    16,   306,    22,   310,    71,   274,   275,
     276,    66,    47,   181,   194,   195,    17,   196,   201,    79,
     183,    71,   279,   280,   199,    80,    97,   242,    18,    97,
     105,   271,   272,   105,    19,    81,    97,    97,   232,    68,
     105,   105,   332,  -252,   429,    69,   347,   348,   286,   349,
     350,   233,    82,   258,   199,    83,   448,   340,    84,    20,
     294,    21,   259,    85,   199,   380,   381,    22,   260,    86,
      87,    88,   458,    89,   282,   199,   278,   138,    71,   359,
     360,    97,   295,    90,   296,   105,    97,   297,    26,   305,
     105,   308,   312,   361,   469,    20,   138,   324,   326,    26,
     334,   335,    97,   139,   336,    26,   105,    91,    26,   445,
     337,    97,   339,   466,   140,   105,   345,   346,   351,    26,
     364,    97,   139,   286,    97,   105,   366,   375,   105,   248,
     376,   377,    97,   140,   378,   394,   105,   382,   141,   142,
     143,    37,   144,   145,   401,   391,   402,    71,   226,   395,
     398,   399,   403,   406,   407,   408,   253,   141,   142,   143,
     299,   144,   145,   252,   415,    27,   138,   416,   146,   419,
     147,   421,   420,   427,   428,   148,    27,   431,   261,   262,
     263,   149,    27,   150,   425,    27,   301,   146,  -244,   147,
     432,   436,   139,   437,   148,   439,    27,   264,   265,   266,
     149,   443,   150,   140,   440,   449,   451,   452,   447,   453,
     455,   459,   438,   138,   457,   460,   462,   465,   237,   470,
     121,   442,   325,   331,   444,   138,   129,   141,   142,   143,
      37,   144,   145,   396,   316,   320,   392,   450,   115,   139,
     323,   426,   414,   454,    59,   354,   456,   365,   357,   358,
     140,   139,   409,   246,   355,   247,   410,   146,    15,   147,
     464,    44,   140,   356,   148,   318,   467,   393,   307,   468,
     149,     0,   150,     0,   141,   142,   143,    37,   144,   145,
       0,     0,     0,     0,     0,     0,   141,   142,   143,   299,
     144,   145,     0,     0,    79,     0,     0,     0,     0,     0,
      80,     0,     0,     0,   146,     0,   147,     0,     0,     0,
      81,   148,     0,     0,     0,     0,   146,   149,   147,   150,
       0,   422,     0,   148,     0,     0,    79,    82,     0,   149,
      83,   150,    80,    84,     0,     0,     0,     0,    85,     0,
       0,     0,    81,     0,    86,    87,    88,     0,    89,   423,
       0,     0,     0,  -155,     0,  -155,     0,     0,    90,    82,
       0,     0,    83,     0,     0,    84,     0,    79,     0,     0,
      85,     0,     0,    80,     0,     0,    86,    87,    88,  -127,
      89,     0,    91,    81,     0,     0,     0,     0,     0,    79,
      90,     0,     0,     0,  -127,    80,     0,     0,     0,     0,
      82,     0,     0,    83,     0,    81,    84,     0,     0,     0,
       0,    85,     0,     0,    91,     0,   198,    86,    87,    88,
       0,    89,    82,     0,     0,    83,     0,     0,    84,    79,
       0,    90,     0,    85,     0,    80,     0,     0,     0,    86,
      87,    88,     0,    89,     0,    81,     0,     0,     0,     0,
       0,    79,     0,    90,     0,    91,   304,    80,     0,     0,
       0,     0,    82,     0,     0,    83,     0,    81,    84,     0,
       0,     0,     0,    85,     0,     0,     0,    91,  -156,    86,
      87,    88,     0,    89,    82,     0,     0,    83,     0,     0,
      84,    79,     0,    90,     0,    85,     0,    80,     0,     0,
       0,    86,    87,    88,     0,    89,     0,    81,     0,     0,
       0,     0,     0,    79,     0,    90,     0,    91,   424,    80,
       0,     0,     0,     0,    82,     0,     0,    83,     0,    81,
      84,     0,     0,     0,     0,    85,     0,     0,     0,    91,
     463,    86,    87,    88,     0,    89,    82,     0,     0,    83,
       0,     0,    84,     0,    79,    90,     0,    85,     0,     0,
      80,     0,     0,    86,    87,    88,     0,    89,     0,     0,
      81,     0,     0,     0,     0,     0,    79,    90,  -154,    91,
       0,     0,    80,     0,     0,     0,     0,    82,     0,     0,
      83,     0,    81,    84,     0,     0,   139,     0,    85,     0,
       0,    91,     0,     0,    86,    87,    88,   140,    89,    82,
     139,     0,    83,     0,     0,    84,     0,     0,    90,     0,
      85,   140,     0,     0,     0,     0,    86,    87,    88,     0,
      89,   141,   142,   143,    37,   144,   145,     0,     0,     0,
      90,     0,    91,     0,     0,   141,   142,   143,    37,   144,
     145,     0,   112,     0,     0,    62,   139,    63,     0,     0,
       0,   146,     0,   147,    91,     0,     0,   140,   148,    65,
       0,    66,     0,     0,   149,   146,   150,     0,     0,     0,
       0,     0,   148,     0,     0,     0,     0,    67,   149,   204,
     150,   141,   142,   143,    37,   144,   145,   205,   204,    68,
     383,     0,   206,     0,     0,    69,   205,     0,     0,    70,
     207,   206,   384,     0,   321,   208,    37,   209,     0,   207,
       0,   146,     0,   388,   208,     0,   209,   204,   210,     0,
     211,     0,   212,     0,   149,   205,   150,   210,     0,   211,
     206,   212,     0,     0,     0,    21,     0,     0,   207,     0,
       0,    22,   390,   208,    21,   209,   204,     0,     0,   204,
      22,     0,     0,     0,   205,     0,   210,   205,   211,   206,
     212,     0,   206,     0,     0,     0,     0,   207,     0,     0,
     207,   430,   208,    21,   209,   208,     0,   209,   204,    22,
       0,     0,     0,     0,     0,   210,   205,   211,   210,   212,
     211,   206,   212,     0,     0,     0,     0,     0,     0,   207,
       0,     0,    21,     0,   208,    21,   209,   117,    22,     0,
      62,    22,    63,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,    66,     0,   119,     0,
       0,     0,   185,     0,    21,     0,     0,     0,     0,     0,
      22,     0,    67,   186,   187,   188,   189,   190,   191,   192,
     193,     0,     0,     0,    68,     0,   120,     0,     0,     0,
      69,     0,     0,     0,    70,     0,   194,   195,     0,   196
};

static const yytype_int16 yycheck[] =
{
      18,    48,   106,    55,   222,    48,    89,   236,    85,   181,
     107,    28,    64,   242,    28,   213,    14,   114,    36,   217,
      13,    14,    40,   120,   101,    19,    13,    45,    13,    37,
      69,     9,    40,    17,    93,    53,    69,    55,    85,     1,
      13,    89,    85,    51,     3,    65,    64,    28,    19,    32,
     109,     1,    11,    92,   101,    28,    65,    16,   101,   106,
      93,   109,   291,   106,    82,    24,     0,    65,   172,    69,
      29,     0,    31,    35,    89,   127,   128,    27,   250,   106,
     184,    43,   109,    42,    65,    44,    69,    46,    38,    89,
       1,    69,   109,   140,   109,   109,    89,    91,   106,   317,
      59,   319,    89,    14,    89,   334,    65,    70,    92,   127,
     128,    89,    62,    63,    64,    65,    66,    67,   316,     3,
      91,    32,   140,    89,    89,   172,    89,    11,    93,   172,
      41,    89,    16,    92,   231,    89,    90,   184,    12,    89,
      24,   184,    92,    12,    94,    29,    57,    31,    59,    99,
       1,     4,    70,     6,    65,   105,     7,   107,    42,    33,
      44,    65,    46,    35,    33,    70,    17,    20,    35,   387,
     342,    89,    65,    47,    91,    59,    60,     3,    47,    80,
      81,    65,    83,    34,    89,    11,    37,    88,    91,    40,
      16,   420,   109,    89,    45,    48,   214,    65,    24,    91,
      51,    52,    53,    29,    55,    31,   109,     1,    92,   286,
       4,   294,     6,    69,    65,     1,    10,   109,     4,   296,
       6,   298,    37,    65,    18,    40,    20,    23,    41,   130,
     131,    65,    18,   285,    20,    17,    51,    57,    89,   286,
     292,    92,    36,   286,    57,   146,    59,    14,   149,   296,
      36,   298,    65,   296,    48,   298,    64,    65,   106,   363,
      54,   109,    48,   315,    58,    74,    75,   285,    54,   373,
     374,    65,    58,   174,   292,    14,    57,   329,    59,    65,
      92,   182,    89,   106,    65,     4,   109,     6,    30,   366,
      65,    33,    65,     1,   195,    65,   197,   315,   100,   101,
     102,    20,    44,    91,   104,   105,    14,   107,    65,     1,
      89,   329,    72,    73,   418,     7,   363,    47,    26,   366,
     363,    98,    99,   366,    32,    17,   373,   374,    89,    48,
     373,   374,   233,    25,   386,    54,   108,   109,    30,   108,
     109,    70,    34,    23,   448,    37,   423,   248,    40,    57,
      65,    59,    80,    45,   458,   108,   109,    65,    79,    51,
      52,    53,   439,    55,    89,   469,   103,     1,   386,   277,
     278,   418,    89,    65,    21,   418,   423,    89,    13,    65,
     423,    64,    89,   284,   461,    57,     1,   109,    70,    24,
      47,    68,   439,    27,    89,    30,   439,    89,    33,   417,
      68,   448,    93,   455,    38,   448,    71,    71,    13,    44,
      28,   458,    27,    30,   461,   458,    25,    70,   461,    53,
      93,   109,   469,    38,     5,   326,   469,    89,    62,    63,
      64,    65,    66,    67,   335,     8,   337,   455,    65,    22,
      50,    89,    21,   344,   345,   346,    65,    62,    63,    64,
      65,    66,    67,    64,    19,    13,     1,    45,    92,    15,
      94,    89,    19,    64,    70,    99,    24,     8,    76,    77,
      78,   105,    30,   107,   375,    33,   377,    92,    93,    94,
       8,    93,    27,    68,    99,    71,    44,    95,    96,    97,
     105,     7,   107,    38,    39,     5,    70,     8,    53,    22,
      14,    91,   403,     1,    56,    68,    15,    89,   129,    53,
      60,   412,   225,   231,   415,     1,    69,    62,    63,    64,
      65,    66,    67,   328,   213,   219,   324,   428,    57,    27,
     223,   377,   353,   434,    42,   259,   437,   288,   270,   273,
      38,    27,   348,   147,   260,   148,   350,    92,    11,    94,
     451,    24,    38,   267,    99,   214,   457,   325,   195,   460,
     105,    -1,   107,    -1,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,
      17,    99,    -1,    -1,    -1,    -1,    92,   105,    94,   107,
      -1,    28,    -1,    99,    -1,    -1,     1,    34,    -1,   105,
      37,   107,     7,    40,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    17,    -1,    51,    52,    53,    -1,    55,    56,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    65,    34,
      -1,    -1,    37,    -1,    -1,    40,    -1,     1,    -1,    -1,
      45,    -1,    -1,     7,    -1,    -1,    51,    52,    53,    13,
      55,    -1,    89,    17,    -1,    -1,    -1,    -1,    -1,     1,
      65,    -1,    -1,    -1,    28,     7,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,    17,    40,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    89,    -1,    28,    51,    52,    53,
      -1,    55,    34,    -1,    -1,    37,    -1,    -1,    40,     1,
      -1,    65,    -1,    45,    -1,     7,    -1,    -1,    -1,    51,
      52,    53,    -1,    55,    -1,    17,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    65,    -1,    89,    28,     7,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    17,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    89,    28,    51,
      52,    53,    -1,    55,    34,    -1,    -1,    37,    -1,    -1,
      40,     1,    -1,    65,    -1,    45,    -1,     7,    -1,    -1,
      -1,    51,    52,    53,    -1,    55,    -1,    17,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    65,    -1,    89,    28,     7,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    17,
      40,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    89,
      28,    51,    52,    53,    -1,    55,    34,    -1,    -1,    37,
      -1,    -1,    40,    -1,     1,    65,    -1,    45,    -1,    -1,
       7,    -1,    -1,    51,    52,    53,    -1,    55,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    -1,     1,    65,    25,    89,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    17,    40,    -1,    -1,    27,    -1,    45,    -1,
      -1,    89,    -1,    -1,    51,    52,    53,    38,    55,    34,
      27,    -1,    37,    -1,    -1,    40,    -1,    -1,    65,    -1,
      45,    38,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      65,    -1,    89,    -1,    -1,    62,    63,    64,    65,    66,
      67,    -1,     1,    -1,    -1,     4,    27,     6,    -1,    -1,
      -1,    92,    -1,    94,    89,    -1,    -1,    38,    99,    18,
      -1,    20,    -1,    -1,   105,    92,   107,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    36,   105,     3,
     107,    62,    63,    64,    65,    66,    67,    11,     3,    48,
      49,    -1,    16,    -1,    -1,    54,    11,    -1,    -1,    58,
      24,    16,    61,    -1,    28,    29,    65,    31,    -1,    24,
      -1,    92,    -1,    28,    29,    -1,    31,     3,    42,    -1,
      44,    -1,    46,    -1,   105,    11,   107,    42,    -1,    44,
      16,    46,    -1,    -1,    -1,    59,    -1,    -1,    24,    -1,
      -1,    65,    28,    29,    59,    31,     3,    -1,    -1,     3,
      65,    -1,    -1,    -1,    11,    -1,    42,    11,    44,    16,
      46,    -1,    16,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      24,    28,    29,    59,    31,    29,    -1,    31,     3,    65,
      -1,    -1,    -1,    -1,    -1,    42,    11,    44,    42,    46,
      44,    16,    46,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    59,    -1,    29,    59,    31,     1,    65,    -1,
       4,    65,     6,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    22,    -1,
      -1,    -1,    70,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    36,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    -1,   104,   105,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    35,    43,   111,   112,   116,    65,    65,     0,
      89,    89,   117,   194,   113,   194,     1,    14,    26,    32,
      57,    59,    65,   114,   118,   119,   120,   122,   141,   195,
     196,     1,   147,   204,    89,    90,    35,    65,   115,   197,
      35,    65,   142,    65,   196,    91,   109,   119,    41,   119,
     115,    69,    89,   109,   115,    17,    92,   143,   146,   147,
      23,     1,     4,     6,    10,    18,    20,    36,    48,    54,
      58,   115,   121,   123,   124,   126,   128,   129,    65,     1,
       7,    17,    34,    37,    40,    45,    51,    52,    53,    55,
      65,    89,   115,   148,   149,   151,   152,   153,   155,   156,
     160,   161,   162,   164,   165,   189,   205,    32,    65,   115,
       9,    89,     1,   121,   203,   146,    57,     1,     8,    22,
      50,   123,   130,   131,   133,   135,   121,    14,    14,   126,
      92,    70,    89,    12,    33,    47,   125,    89,     1,    27,
      38,    62,    63,    64,    66,    67,    92,    94,    99,   105,
     107,   153,   171,   172,   173,   174,   175,   177,   179,   181,
     183,   184,   186,   187,   188,   189,   190,    89,   171,   115,
     171,    65,   205,    65,    13,    14,    89,   163,   171,    89,
     163,    91,    92,    89,   205,    70,    81,    82,    83,    84,
      85,    86,    87,    88,   104,   105,   107,   150,    28,   148,
     195,    65,   144,   195,     3,    11,    16,    24,    29,    31,
      42,    44,    46,    60,    92,   120,   122,   136,   137,   138,
     139,   140,   200,   201,   202,    14,    65,   134,   199,   132,
     195,   198,    89,    70,   121,   121,    47,   125,   171,   171,
     127,   171,    47,   115,   153,   171,   175,   187,    53,   171,
     191,   213,    64,    65,   192,   193,   211,   212,    23,    80,
      79,    76,    77,    78,    95,    96,    97,   176,    74,    75,
     178,    98,    99,   180,   100,   101,   102,   182,   103,    72,
      73,   185,    89,    89,    19,    91,    30,   166,   167,   170,
     210,    19,    91,   171,    65,    89,    21,    89,   161,    65,
     154,   171,   206,   207,    28,    65,   171,   213,    64,   214,
     171,    89,    89,    89,    93,    91,   136,   200,   197,   200,
     139,    28,   137,   141,   109,   124,    70,    28,   109,    91,
      28,   132,   171,   127,    47,    68,    89,    68,   127,    93,
     171,   161,   215,   106,   109,    71,    71,   108,   109,   108,
     109,    13,   157,   208,   173,   174,   177,   179,   181,   183,
     183,   171,   121,   205,    28,   170,    25,   168,   169,   127,
     121,    89,   163,   205,   205,    70,    93,   109,     5,   106,
     108,   109,    89,    49,    61,   121,   145,   200,    28,    93,
      28,     8,   140,   199,   171,    22,   134,   121,    50,    89,
     127,   171,   171,    21,   106,   161,   171,   171,   171,   192,
     193,   158,   209,    28,   157,    19,    45,    92,   205,    15,
      19,    89,    28,    56,    28,   171,   154,    64,    70,   121,
      28,     8,     8,    28,    70,    89,    93,    68,   171,    71,
      39,   159,   171,     7,   171,   115,   127,    53,   205,     5,
     171,    70,     8,    22,   171,    14,   171,    56,   205,    91,
      68,    93,    15,    28,   171,    89,   121,   171,   171,   205,
      53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   113,   113,   114,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   120,   121,   121,   121,   122,
     122,   123,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   126,   126,   126,   126,   127,   127,
     128,   128,   129,   130,   130,   130,   131,   132,   132,   133,
     133,   134,   134,   135,   135,   135,   135,   135,   136,   137,
     137,   138,   138,   138,   139,   139,   139,   140,   140,   140,
     140,   140,   140,   141,   142,   142,   142,   142,   143,   144,
     144,   144,   144,   145,   145,   146,   147,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   151,   151,
     152,   153,   154,   154,   155,   155,   156,   157,   158,   159,
     159,   159,   160,   160,   161,   161,   161,   161,   161,   161,
     161,   162,   162,   162,   162,   162,   162,   163,   164,   165,
     166,   166,   166,   167,   168,   169,   170,   171,   171,   172,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   176,
     176,   176,   176,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   182,   183,   183,   184,   184,
     185,   185,   186,   186,   187,   187,   187,   187,   187,   187,
     188,   188,   188,   188,   188,   188,   189,   189,   189,   189,
     190,   190,   190,   190,   191,   191,   191,   192,   193,   194,
     194,   195,   195,   196,   196,   197,   197,   198,   198,   199,
     199,   200,   200,   201,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   215,   215
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     0,     4,     6,     6,
       2,     1,     3,     4,     1,     2,     3,     3,     2,     1,
       1,     1,     7,     4,     6,     3,     1,     1,     1,     5,
       4,     1,     1,     1,     5,     3,     4,     2,     2,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       8,     3,     3,     1,     1,     1,     4,     4,     6,     6,
       4,     3,     1,     6,     5,     5,     4,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     4,     3,     2,     2,     1,     4,     6,
       5,     4,     3,     1,     1,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     4,     1,     3,     8,     6,     6,     4,     2,     3,
       1,     1,     6,     4,     6,     4,     7,     4,     6,     5,
       2,     3,     2,     5,     2,     4,     3,     2,     3,     5,
       2,     1,     1,     2,     5,     2,     2,     1,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     1,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     4,
       4,     3,     3,     3,     1,     4,     6,     3,     3,     2,
       0,     3,     1,     2,     1,     3,     1,     2,     1,     3,
       1,     2,     1,     1,     0,     3,     1,     3,     0,     2,
       0,     2,     1,     1,     0,     3,     1,     2,     1,     3,
       0,     2,     0,     3,     1,     3,     1,     3,     1,     3,
       1,     2,     1
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
  case 2: /* programa: definicion_programa  */
#line 30 "chusco.y"
                                                                { printf ("  ÉXITO: programa -> definicion_programa\n"); }
#line 1799 "chusco.tab.c"
    break;

  case 3: /* programa: definicion_libreria  */
#line 31 "chusco.y"
                                                                { printf ("  ÉXITO: programa -> definicion_libreria\n"); }
#line 1805 "chusco.tab.c"
    break;

  case 4: /* definicion_programa: PROGRAMA IDENTIFICADOR ';' codigo_programa  */
#line 35 "chusco.y"
                                                                { printf ("  definicion_programa -> PROGRAMA IDENTIFICADOR ; codigo_programa\n"); }
#line 1811 "chusco.tab.c"
    break;

  case 5: /* codigo_programa: libreria_ast cuerpo_subprograma  */
#line 39 "chusco.y"
                                                                { printf ("  codigo_programa -> libreria_ast cuerpo_subprograma\n"); }
#line 1817 "chusco.tab.c"
    break;

  case 6: /* codigo_programa: %empty  */
#line 40 "chusco.y"
                                                                { printf ("  codigo_programa -> epsilon\n"); }
#line 1823 "chusco.tab.c"
    break;

  case 7: /* libreria: IMPORTAR LIBRERIA nombre ';'  */
#line 44 "chusco.y"
                                                                { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1829 "chusco.tab.c"
    break;

  case 8: /* libreria: IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ';'  */
#line 45 "chusco.y"
                                                                { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ;\n"); }
#line 1835 "chusco.tab.c"
    break;

  case 9: /* libreria: DE LIBRERIA nombre IMPORTAR identificador_rep_comas ';'  */
#line 46 "chusco.y"
                                                                { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR identificador_rep_comas ;\n"); }
#line 1841 "chusco.tab.c"
    break;

  case 10: /* libreria: error ';'  */
#line 47 "chusco.y"
                                                                { printf ("  ------------ ERROR en LIBRERÍA ------------ \n"); yyerrok; }
#line 1847 "chusco.tab.c"
    break;

  case 11: /* nombre: IDENTIFICADOR  */
#line 51 "chusco.y"
                                                                { printf ("  nombre -> IDENTIFICADOR\n"); }
#line 1853 "chusco.tab.c"
    break;

  case 12: /* nombre: nombre CUATRO_PUNTOS IDENTIFICADOR  */
#line 52 "chusco.y"
                                                                { printf ("  nombre -> nombre :: IDENTIFICADOR\n"); }
#line 1859 "chusco.tab.c"
    break;

  case 13: /* definicion_libreria: LIBRERIA IDENTIFICADOR ';' codigo_libreria  */
#line 56 "chusco.y"
                                                                { printf ("  definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1865 "chusco.tab.c"
    break;

  case 14: /* definicion_libreria: error  */
#line 57 "chusco.y"
                                                                { printf ("  ------------ ERROR en DEFINICIÓN LIBRERÍA ------------ \n"); yyerrok; }
#line 1871 "chusco.tab.c"
    break;

  case 15: /* codigo_libreria: libreria_ast declaracion_rep  */
#line 61 "chusco.y"
                                                                { printf ("  codigo_libreria -> libreria_ast declaracion_rep\n"); }
#line 1877 "chusco.tab.c"
    break;

  case 16: /* codigo_libreria: libreria_ast exportaciones declaracion_rep  */
#line 62 "chusco.y"
                                                                { printf ("  codigo_libreria -> libreria_ast exportaciones declaracion_rep\n"); }
#line 1883 "chusco.tab.c"
    break;

  case 17: /* exportaciones: EXPORTAR nombre_rep_comas ';'  */
#line 66 "chusco.y"
                                                                { printf ("  exportaciones -> EXPORTAR nombre_rep_comas ;\n"); }
#line 1889 "chusco.tab.c"
    break;

  case 18: /* exportaciones: error '\n'  */
#line 67 "chusco.y"
                                                                { printf ("  ------------ ERROR en EXPORTACIONES ------------ \n"); yyerrok; }
#line 1895 "chusco.tab.c"
    break;

  case 19: /* declaracion: declaracion_objeto  */
#line 71 "chusco.y"
                                                                { printf ("  declaracion -> declaracion_objeto\n"); }
#line 1901 "chusco.tab.c"
    break;

  case 20: /* declaracion: declaracion_tipo  */
#line 72 "chusco.y"
                                                                { printf ("  declaracion -> declaracion_tipo\n"); }
#line 1907 "chusco.tab.c"
    break;

  case 21: /* declaracion: declaracion_subprograma  */
#line 73 "chusco.y"
                                                                { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1913 "chusco.tab.c"
    break;

  case 22: /* declaracion_objeto: identificador_rep_comas ':' CONSTANTE especificacion_tipo ASIGNACION expresion ';'  */
#line 83 "chusco.y"
                                                                                                    { printf ("  declaracion_objeto -> identificador_rep_comas : CONSTANTE especificacion_tipo := expresion ;\n"); }
#line 1919 "chusco.tab.c"
    break;

  case 23: /* declaracion_objeto: identificador_rep_comas ':' especificacion_tipo ';'  */
#line 84 "chusco.y"
                                                                                                    { printf ("  declaracion_objeto -> identificador_rep_comas : especificacion_tipo ;\n"); }
#line 1925 "chusco.tab.c"
    break;

  case 24: /* declaracion_objeto: identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion ';'  */
#line 85 "chusco.y"
                                                                                                    { printf ("  declaracion_objeto -> identificador_rep_comas : especificacion_tipo := expresion ;\n"); }
#line 1931 "chusco.tab.c"
    break;

  case 25: /* declaracion_objeto: identificador_rep_comas ':' error  */
#line 86 "chusco.y"
                                                                                                    { printf ("  ------------ ERROR en DECLARACIÓN OBJETO ------------ \n"); yyerrok; }
#line 1937 "chusco.tab.c"
    break;

  case 26: /* especificacion_tipo: nombre  */
#line 90 "chusco.y"
                                                                                                    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1943 "chusco.tab.c"
    break;

  case 27: /* especificacion_tipo: tipo_no_estructurado  */
#line 91 "chusco.y"
                                                                                                    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1949 "chusco.tab.c"
    break;

  case 28: /* especificacion_tipo: error  */
#line 92 "chusco.y"
                                                                                                    { printf ("  ------------ ERROR en ESPECIFICACIÓN TIPO ------------ \n"); yyerrok; }
#line 1955 "chusco.tab.c"
    break;

  case 29: /* declaracion_tipo: TIPO IDENTIFICADOR ES tipo_no_estructurado ';'  */
#line 102 "chusco.y"
                                                                                                      { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1961 "chusco.tab.c"
    break;

  case 30: /* declaracion_tipo: TIPO IDENTIFICADOR ES tipo_estructurado  */
#line 103 "chusco.y"
                                                                                                      { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1967 "chusco.tab.c"
    break;

  case 31: /* tipo_no_estructurado: tipo_escalar  */
#line 107 "chusco.y"
                                                                                                      { printf ("  tipo_no_estructurado -> tipo_escalar\n"); }
#line 1973 "chusco.tab.c"
    break;

  case 32: /* tipo_no_estructurado: tipo_tabla  */
#line 108 "chusco.y"
                                                                                                      { printf ("  tipo_no_estructurado -> tipo_tabla\n"); }
#line 1979 "chusco.tab.c"
    break;

  case 33: /* tipo_no_estructurado: tipo_diccionario  */
#line 109 "chusco.y"
                                                                                                      { printf ("  tipo_no_estructurado -> tipo_diccionario\n"); }
#line 1985 "chusco.tab.c"
    break;

  case 34: /* tipo_escalar: SIGNO tipo_basico longitud RANGO rango  */
#line 113 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> SIGNO tipo_basico longitud RANGO rango\n"); }
#line 1991 "chusco.tab.c"
    break;

  case 35: /* tipo_escalar: SIGNO tipo_basico longitud  */
#line 114 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> SIGNO tipo_basico longitud\n"); }
#line 1997 "chusco.tab.c"
    break;

  case 36: /* tipo_escalar: SIGNO tipo_basico RANGO rango  */
#line 115 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> SIGNO tipo_basico RANGO rango\n"); }
#line 2003 "chusco.tab.c"
    break;

  case 37: /* tipo_escalar: SIGNO tipo_basico  */
#line 116 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> SIGNO tipo_basico\n"); }
#line 2009 "chusco.tab.c"
    break;

  case 38: /* tipo_escalar: tipo_basico longitud  */
#line 117 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> tipo_basico longitud\n"); }
#line 2015 "chusco.tab.c"
    break;

  case 39: /* tipo_escalar: tipo_basico longitud RANGO rango  */
#line 118 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> tipo_basico longitud RANGO rango\n"); }
#line 2021 "chusco.tab.c"
    break;

  case 40: /* tipo_escalar: tipo_basico RANGO rango  */
#line 119 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> tipo_basico RANGO rango\n"); }
#line 2027 "chusco.tab.c"
    break;

  case 41: /* tipo_escalar: tipo_basico  */
#line 120 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> tipo_basico\n"); }
#line 2033 "chusco.tab.c"
    break;

  case 42: /* longitud: CORTO  */
#line 124 "chusco.y"
                                                                                                      { printf ("  longitud -> CORTO\n"); }
#line 2039 "chusco.tab.c"
    break;

  case 43: /* longitud: LARGO  */
#line 125 "chusco.y"
                                                                                                      { printf ("  longitud -> LARGO\n"); }
#line 2045 "chusco.tab.c"
    break;

  case 44: /* tipo_basico: BOOLEANO  */
#line 129 "chusco.y"
                                                                                                     { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 2051 "chusco.tab.c"
    break;

  case 45: /* tipo_basico: CARACTER  */
#line 130 "chusco.y"
                                                                                                     { printf ("  tipo_basico -> CARACTER\n"); }
#line 2057 "chusco.tab.c"
    break;

  case 46: /* tipo_basico: ENTERO  */
#line 131 "chusco.y"
                                                                                                     { printf ("  tipo_basico -> ENTERO\n"); }
#line 2063 "chusco.tab.c"
    break;

  case 47: /* tipo_basico: REAL  */
#line 132 "chusco.y"
                                                                                                     { printf ("  tipo_basico -> REAL\n"); }
#line 2069 "chusco.tab.c"
    break;

  case 48: /* rango: expresion DOS_PUNTOS expresion  */
#line 136 "chusco.y"
                                                                                                     { printf ("  rango -> expresion .. expresion\n"); }
#line 2075 "chusco.tab.c"
    break;

  case 49: /* rango: expresion DOS_PUNTOS expresion DOS_PUNTOS expresion  */
#line 137 "chusco.y"
                                                                                                     { printf ("  rango -> expresion .. expresion .. expresion\n"); }
#line 2081 "chusco.tab.c"
    break;

  case 50: /* tipo_tabla: TABLA '(' expresion DOS_PUNTOS expresion ')' DE especificacion_tipo  */
#line 141 "chusco.y"
                                                                                                     { printf ("  tipo_tabla -> TABLA ( expresion .. expresion ) DE especificacion_tipo\n"); }
#line 2087 "chusco.tab.c"
    break;

  case 51: /* tipo_tabla: LISTA DE especificacion_tipo  */
#line 142 "chusco.y"
                                                                                                     { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 2093 "chusco.tab.c"
    break;

  case 52: /* tipo_diccionario: DICCIONARIO DE especificacion_tipo  */
#line 146 "chusco.y"
                                                                                                     { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 2099 "chusco.tab.c"
    break;

  case 53: /* tipo_estructurado: tipo_registro  */
#line 150 "chusco.y"
                                                                                                    { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 2105 "chusco.tab.c"
    break;

  case 54: /* tipo_estructurado: tipo_enumerado  */
#line 151 "chusco.y"
                                                                                                    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 2111 "chusco.tab.c"
    break;

  case 55: /* tipo_estructurado: clase  */
#line 152 "chusco.y"
                                                                                                    { printf ("  tipo_estructurado -> clase\n"); }
#line 2117 "chusco.tab.c"
    break;

  case 56: /* tipo_registro: REGISTRO campo_rep FIN REGISTRO  */
#line 156 "chusco.y"
                                                                                                     { printf ("  tipo_registro -> REGISTRO campo_rep FIN REGISTRO\n"); }
#line 2123 "chusco.tab.c"
    break;

  case 57: /* campo: identificador_rep_comas ':' especificacion_tipo ';'  */
#line 160 "chusco.y"
                                                                                                           { printf ("  campo -> identificador_rep_comas : especificacion_tipo ;\n"); }
#line 2129 "chusco.tab.c"
    break;

  case 58: /* campo: identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion ';'  */
#line 161 "chusco.y"
                                                                                                       { printf ("  campo -> identificador_rep_comas : especificacion_tipo := expresion ;\n"); }
#line 2135 "chusco.tab.c"
    break;

  case 59: /* tipo_enumerado: ENUMERACION DE tipo_escalar elemento_enumeracion_rep_comas FIN ENUMERACION  */
#line 165 "chusco.y"
                                                                                                         { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar elemento_enumeracion_rep_comas FIN ENUMERACION\n"); }
#line 2141 "chusco.tab.c"
    break;

  case 60: /* tipo_enumerado: ENUMERACION elemento_enumeracion_rep_comas FIN ENUMERACION  */
#line 166 "chusco.y"
                                                                                                             { printf ("  tipo_enumerado -> ENUMERACION elemento_enumeracion_rep_comas FIN ENUMERACION\n"); }
#line 2147 "chusco.tab.c"
    break;

  case 61: /* elemento_enumeracion: IDENTIFICADOR ASIGNACION expresion  */
#line 170 "chusco.y"
                                                                                                    { printf ("  elemento_enumeracion -> IDENTIFICADOR := expresion\n"); }
#line 2153 "chusco.tab.c"
    break;

  case 62: /* elemento_enumeracion: IDENTIFICADOR  */
#line 171 "chusco.y"
                                                                                                        { printf ("  elemento_enumeracion -> IDENTIFICADOR\n"); }
#line 2159 "chusco.tab.c"
    break;

  case 63: /* clase: CLASE ULTIMA superclases declaracion_componente_rep FIN CLASE  */
#line 181 "chusco.y"
                                                                                               { printf ("  clase -> CLASE ULTIMA superclases declaracion_componente_rep FIN CLASE\n"); }
#line 2165 "chusco.tab.c"
    break;

  case 64: /* clase: CLASE superclases declaracion_componente_rep FIN CLASE  */
#line 182 "chusco.y"
                                                                                                   { printf ("  clase -> CLASE superclases declaracion_componente_rep FIN CLASE\n"); }
#line 2171 "chusco.tab.c"
    break;

  case 65: /* clase: CLASE ULTIMA declaracion_componente_rep FIN CLASE  */
#line 183 "chusco.y"
                                                                                                   { printf ("  clase -> CLASE ULTIMA declaracion_componente_rep FIN CLASE\n"); }
#line 2177 "chusco.tab.c"
    break;

  case 66: /* clase: CLASE declaracion_componente_rep FIN CLASE  */
#line 184 "chusco.y"
                                                                                                   { printf ("  clase -> CLASE declaracion_componente_rep FIN CLASE\n"); }
#line 2183 "chusco.tab.c"
    break;

  case 67: /* clase: error  */
#line 185 "chusco.y"
                                                                                               { printf ("  ------------ ERROR en CLASES ------------ \n"); yyerrok; }
#line 2189 "chusco.tab.c"
    break;

  case 68: /* superclases: '(' nombre_rep_comas ')'  */
#line 189 "chusco.y"
                                                                                                   { printf ("  superclases -> ( nombre_rep_comas )\n"); }
#line 2195 "chusco.tab.c"
    break;

  case 69: /* declaracion_componente: visibilidad componente  */
#line 193 "chusco.y"
                                                                                                   { printf ("  declaracion_componente -> visibilidad componente\n"); }
#line 2201 "chusco.tab.c"
    break;

  case 70: /* declaracion_componente: componente  */
#line 194 "chusco.y"
                                                                                                   { printf ("  declaracion_componente -> componente\n"); }
#line 2207 "chusco.tab.c"
    break;

  case 71: /* visibilidad: PUBLICO  */
#line 198 "chusco.y"
                                                                                                   { printf ("  visibilidad -> PUBLICO\n"); }
#line 2213 "chusco.tab.c"
    break;

  case 72: /* visibilidad: PROTEGIDO  */
#line 199 "chusco.y"
                                                                                                   { printf ("  visibilidad -> PROTEGIDO\n"); }
#line 2219 "chusco.tab.c"
    break;

  case 73: /* visibilidad: PRIVADO  */
#line 200 "chusco.y"
                                                                                                   { printf ("  visibilidad -> PRIVADO\n"); }
#line 2225 "chusco.tab.c"
    break;

  case 74: /* componente: declaracion_tipo  */
#line 204 "chusco.y"
                                                                                                   { printf ("  componente -> declaracion_tipo\n"); }
#line 2231 "chusco.tab.c"
    break;

  case 75: /* componente: declaracion_objeto  */
#line 205 "chusco.y"
                                                                                                   { printf ("  componente -> declaracion_objeto\n"); }
#line 2237 "chusco.tab.c"
    break;

  case 76: /* componente: modificador_ast_comas_1 declaracion_subprograma  */
#line 206 "chusco.y"
                                                                                                   { printf ("  componente -> modificador_ast_comas_1 declaracion_subprograma\n"); }
#line 2243 "chusco.tab.c"
    break;

  case 77: /* modificador: CONSTRUCTOR  */
#line 210 "chusco.y"
                                                                                                   { printf ("  modificador -> CONSTRUCTOR\n"); }
#line 2249 "chusco.tab.c"
    break;

  case 78: /* modificador: DESTRUCTOR  */
#line 211 "chusco.y"
                                                                                                   { printf ("  modificador -> DESTRUCTOR\n"); }
#line 2255 "chusco.tab.c"
    break;

  case 79: /* modificador: GENERICO  */
#line 212 "chusco.y"
                                                                                                   { printf ("  modificador -> GENERICO\n"); }
#line 2261 "chusco.tab.c"
    break;

  case 80: /* modificador: ABSTRACTO  */
#line 213 "chusco.y"
                                                                                                   { printf ("  modificador -> ABSTRACTO\n"); }
#line 2267 "chusco.tab.c"
    break;

  case 81: /* modificador: ESPECIFICO  */
#line 214 "chusco.y"
                                                                                                   { printf ("  modificador -> ESPECIFICO\n"); }
#line 2273 "chusco.tab.c"
    break;

  case 82: /* modificador: FINAL  */
#line 215 "chusco.y"
                                                                                                   { printf ("  modificador -> FINAL\n"); }
#line 2279 "chusco.tab.c"
    break;

  case 83: /* declaracion_subprograma: SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA  */
#line 225 "chusco.y"
                                                                                                   { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA\n"); }
#line 2285 "chusco.tab.c"
    break;

  case 84: /* cabecera_subprograma: IDENTIFICADOR parametrizacion tipo_resultado  */
#line 229 "chusco.y"
                                                                                                    { printf ("  cabecera_subprograma -> IDENTIFICADOR parametrizacion tipo_resultado\n"); }
#line 2291 "chusco.tab.c"
    break;

  case 85: /* cabecera_subprograma: IDENTIFICADOR tipo_resultado  */
#line 230 "chusco.y"
                                                                                                    { printf ("  cabecera_subprograma -> IDENTIFICADOR tipo_resultado\n"); }
#line 2297 "chusco.tab.c"
    break;

  case 86: /* cabecera_subprograma: IDENTIFICADOR parametrizacion  */
#line 231 "chusco.y"
                                                                                                    { printf ("  cabecera_subprograma -> IDENTIFICADOR parametrizacion\n"); }
#line 2303 "chusco.tab.c"
    break;

  case 87: /* cabecera_subprograma: IDENTIFICADOR  */
#line 232 "chusco.y"
                                                                                                    { printf ("  cabecera_subprograma -> IDENTIFICADOR\n"); }
#line 2309 "chusco.tab.c"
    break;

  case 88: /* parametrizacion: '(' declaracion_parametros_ast_puntocoma declaracion_parametros ')'  */
#line 236 "chusco.y"
                                                                                                    { printf ("  parametrizacion -> ( declaracion_parametros_ast_puntocoma declaracion_parametros )\n"); }
#line 2315 "chusco.tab.c"
    break;

  case 89: /* declaracion_parametros: identificador_rep_comas ':' modo especificacion_tipo ASIGNACION expresion  */
#line 240 "chusco.y"
                                                                                                    { printf ("  declaracion_parametros -> identificador_rep_comas : modo especificacion_tipo := expresion\n"); }
#line 2321 "chusco.tab.c"
    break;

  case 90: /* declaracion_parametros: identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion  */
#line 241 "chusco.y"
                                                                                                     { printf ("  declaracion_parametros -> identificador_rep_comas : especificacion_tipo := expresion\n"); }
#line 2327 "chusco.tab.c"
    break;

  case 91: /* declaracion_parametros: identificador_rep_comas ':' modo especificacion_tipo  */
#line 242 "chusco.y"
                                                                                                     { printf ("  declaracion_parametros -> identificador_rep_comas : modo especificacion_tipo\n"); }
#line 2333 "chusco.tab.c"
    break;

  case 92: /* declaracion_parametros: identificador_rep_comas ':' especificacion_tipo  */
#line 243 "chusco.y"
                                                                                                     { printf ("  declaracion_parametros -> identificador_rep_comas : especificacion_tipo\n"); }
#line 2339 "chusco.tab.c"
    break;

  case 93: /* modo: VALOR  */
#line 247 "chusco.y"
                                                                                                    { printf ("  modo -> VALOR\n"); }
#line 2345 "chusco.tab.c"
    break;

  case 94: /* modo: REFERENCIA  */
#line 248 "chusco.y"
                                                                                                    { printf ("  modo -> REFERENCIA\n"); }
#line 2351 "chusco.tab.c"
    break;

  case 95: /* tipo_resultado: DEVOLVER especificacion_tipo  */
#line 252 "chusco.y"
                                                                                                   { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2357 "chusco.tab.c"
    break;

  case 96: /* cuerpo_subprograma: declaracion_ast PRINCIPIO instruccion_rep FIN  */
#line 256 "chusco.y"
                                                                                                    { printf ("  cuerpo_subprograma -> declaracion_ast PRINCIPIO instruccion_rep FIN\n"); }
#line 2363 "chusco.tab.c"
    break;

  case 97: /* instruccion: instruccion_asignacion  */
#line 265 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_asignacion\n"); }
#line 2369 "chusco.tab.c"
    break;

  case 98: /* instruccion: instruccion_devolver  */
#line 266 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_devolver\n"); }
#line 2375 "chusco.tab.c"
    break;

  case 99: /* instruccion: instruccion_llamada  */
#line 267 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_llamada\n"); }
#line 2381 "chusco.tab.c"
    break;

  case 100: /* instruccion: instruccion_si  */
#line 268 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_si\n"); }
#line 2387 "chusco.tab.c"
    break;

  case 101: /* instruccion: instruccion_casos  */
#line 269 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_casos\n"); }
#line 2393 "chusco.tab.c"
    break;

  case 102: /* instruccion: instruccion_bucle  */
#line 270 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_bucle\n"); }
#line 2399 "chusco.tab.c"
    break;

  case 103: /* instruccion: instruccion_interrupcion  */
#line 271 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_interrupcion\n"); }
#line 2405 "chusco.tab.c"
    break;

  case 104: /* instruccion: instruccion_lanzamiento_excepcion  */
#line 272 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2411 "chusco.tab.c"
    break;

  case 105: /* instruccion: instruccion_captura_excepcion  */
#line 273 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_captura_excepcion\n"); }
#line 2417 "chusco.tab.c"
    break;

  case 106: /* instruccion: error ';'  */
#line 274 "chusco.y"
                                                                                                      { printf ("  ------------ ERROR en INSTRUCCIÓN ------------ \n"); yyerrok; }
#line 2423 "chusco.tab.c"
    break;

  case 107: /* instruccion: ';'  */
#line 275 "chusco.y"
                                                                                                      { printf ("  instruccion -> ;\n"); }
#line 2429 "chusco.tab.c"
    break;

  case 108: /* instruccion_asignacion: objeto op_asignacion expresion ';'  */
#line 279 "chusco.y"
                                                                                                      { printf ("  instruccion_asignacion -> objeto op_asignacion expresion ;\n"); }
#line 2435 "chusco.tab.c"
    break;

  case 109: /* op_asignacion: ASIGNACION  */
#line 283 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :=\n"); }
#line 2441 "chusco.tab.c"
    break;

  case 110: /* op_asignacion: ASIG_SUMA  */
#line 284 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :+\n"); }
#line 2447 "chusco.tab.c"
    break;

  case 111: /* op_asignacion: ASIG_RESTA  */
#line 285 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :-\n"); }
#line 2453 "chusco.tab.c"
    break;

  case 112: /* op_asignacion: ASIG_MULT  */
#line 286 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :*\n"); }
#line 2459 "chusco.tab.c"
    break;

  case 113: /* op_asignacion: ASIG_DIV  */
#line 287 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :/\n"); }
#line 2465 "chusco.tab.c"
    break;

  case 114: /* op_asignacion: ASIG_RESTO  */
#line 288 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :\\\n"); }
#line 2471 "chusco.tab.c"
    break;

  case 115: /* op_asignacion: ASIG_POT  */
#line 289 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :^\n"); }
#line 2477 "chusco.tab.c"
    break;

  case 116: /* op_asignacion: ASIG_DESPI  */
#line 290 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :<\n"); }
#line 2483 "chusco.tab.c"
    break;

  case 117: /* op_asignacion: ASIG_DESPD  */
#line 291 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :>\n"); }
#line 2489 "chusco.tab.c"
    break;

  case 118: /* instruccion_devolver: DEVOLVER expresion ';'  */
#line 295 "chusco.y"
                                                                                                                           {printf ( " instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2495 "chusco.tab.c"
    break;

  case 119: /* instruccion_devolver: DEVOLVER ';'  */
#line 296 "chusco.y"
                                                                                                                           {printf ( " instruccion_devolver -> DEVOLVER ;\n"); }
#line 2501 "chusco.tab.c"
    break;

  case 120: /* instruccion_llamada: llamada_subprograma ';'  */
#line 301 "chusco.y"
                                                                                                      { printf ("  instruccion_llamada -> llamada_subprograma ;\n"); }
#line 2507 "chusco.tab.c"
    break;

  case 121: /* llamada_subprograma: nombre '(' definicion_parametro_ast_comas_1 ')'  */
#line 305 "chusco.y"
                                                                                                        { printf ("  llamada_subprograma -> nombre ( definicion_parametro_ast_comas_1 )\n"); }
#line 2513 "chusco.tab.c"
    break;

  case 122: /* definicion_parametro: expresion  */
#line 309 "chusco.y"
                                                                                                      { printf ("  definicion_parametro -> expresion\n"); }
#line 2519 "chusco.tab.c"
    break;

  case 123: /* definicion_parametro: IDENTIFICADOR ASIGNACION expresion  */
#line 310 "chusco.y"
                                                                                                      { printf ("  definicion_parametro -> IDENTIFICADOR := expresion\n"); }
#line 2525 "chusco.tab.c"
    break;

  case 124: /* instruccion_si: SI expresion ENTONCES instruccion_rep SINO instruccion_rep FIN SI  */
#line 314 "chusco.y"
                                                                                                       { printf ("  instruccion_si -> SI expresion ENTONCES instruccion_rep SINO instruccion_rep FIN SI\n"); }
#line 2531 "chusco.tab.c"
    break;

  case 125: /* instruccion_si: SI expresion ENTONCES instruccion_rep FIN SI  */
#line 315 "chusco.y"
                                                                                                      { printf ("  instruccion_si -> SI expresion ENTONCES instruccion_rep FIN SI\n"); }
#line 2537 "chusco.tab.c"
    break;

  case 126: /* instruccion_casos: CASOS expresion ES caso_rep FIN CASOS  */
#line 319 "chusco.y"
                                                                                                      { printf ("  instruccion_casos -> CASOS expresion ES caso_rep FIN CASOS\n"); }
#line 2543 "chusco.tab.c"
    break;

  case 127: /* caso: CUANDO entradas FLECHA instruccion_rep  */
#line 323 "chusco.y"
                                                                                                      { printf ("  caso -> CUANDO entradas => instruccion_rep\n"); }
#line 2549 "chusco.tab.c"
    break;

  case 128: /* entradas: entrada_rep_dospuntos entrada  */
#line 327 "chusco.y"
                                                                                                      { printf ("  entradas -> entrada_rep_dospuntos entrada\n"); }
#line 2555 "chusco.tab.c"
    break;

  case 129: /* entrada: expresion DOS_PUNTOS expresion  */
#line 331 "chusco.y"
                                                                                                      { printf ("  entrada -> expresion .. expresion\n"); }
#line 2561 "chusco.tab.c"
    break;

  case 130: /* entrada: expresion  */
#line 332 "chusco.y"
                                                                                                      { printf ("  entrada -> expresion\n"); }
#line 2567 "chusco.tab.c"
    break;

  case 131: /* entrada: OTRO  */
#line 333 "chusco.y"
                                                                                                      { printf ("  entrada -> OTRO\n"); }
#line 2573 "chusco.tab.c"
    break;

  case 132: /* instruccion_bucle: IDENTIFICADOR ':' clausula_iteracion instruccion_rep FIN BUCLE  */
#line 337 "chusco.y"
                                                                                                      { printf ("  instruccion_bucle -> IDENTIFICADOR : clausula_iteracion instruccion_rep FIN BUCLE\n"); }
#line 2579 "chusco.tab.c"
    break;

  case 133: /* instruccion_bucle: clausula_iteracion instruccion_rep FIN BUCLE  */
#line 338 "chusco.y"
                                                                                                      { printf ("  instruccion_bucle -> clausula_iteracion instruccion_rep FIN BUCLE\n"); }
#line 2585 "chusco.tab.c"
    break;

  case 134: /* clausula_iteracion: PARA IDENTIFICADOR ':' especificacion_tipo EN expresion  */
#line 342 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> PARA IDENTIFICADOR : especificacion_tipo EN expresion\n"); }
#line 2591 "chusco.tab.c"
    break;

  case 135: /* clausula_iteracion: PARA IDENTIFICADOR EN expresion  */
#line 343 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> PARA IDENTIFICADOR EN expresion\n"); }
#line 2597 "chusco.tab.c"
    break;

  case 136: /* clausula_iteracion: REPETIR IDENTIFICADOR ':' especificacion_tipo EN rango DESCENDENTE  */
#line 344 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR : especificacion_tipo EN rango DESCENDENTE\n"); }
#line 2603 "chusco.tab.c"
    break;

  case 137: /* clausula_iteracion: REPETIR IDENTIFICADOR EN rango  */
#line 345 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR EN rango\n"); }
#line 2609 "chusco.tab.c"
    break;

  case 138: /* clausula_iteracion: REPETIR IDENTIFICADOR ':' especificacion_tipo EN rango  */
#line 346 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR : especificacion_tipo EN rango\n"); }
#line 2615 "chusco.tab.c"
    break;

  case 139: /* clausula_iteracion: REPETIR IDENTIFICADOR EN rango DESCENDENTE  */
#line 347 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR EN rango DESCENDENTE\n"); }
#line 2621 "chusco.tab.c"
    break;

  case 140: /* clausula_iteracion: MIENTRAS expresion  */
#line 348 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> MIENTRAS expresion\n"); }
#line 2627 "chusco.tab.c"
    break;

  case 141: /* instruccion_interrupcion: SIGUIENTE cuando ';'  */
#line 352 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SIGUIENTE cuando ;\n"); }
#line 2633 "chusco.tab.c"
    break;

  case 142: /* instruccion_interrupcion: SIGUIENTE ';'  */
#line 353 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SIGUIENTE ;\n"); }
#line 2639 "chusco.tab.c"
    break;

  case 143: /* instruccion_interrupcion: SALIR DE IDENTIFICADOR cuando ';'  */
#line 354 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SALIR DE IDENTIFICADOR cuando ;\n"); }
#line 2645 "chusco.tab.c"
    break;

  case 144: /* instruccion_interrupcion: SALIR ';'  */
#line 355 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SALIR ;\n"); }
#line 2651 "chusco.tab.c"
    break;

  case 145: /* instruccion_interrupcion: SALIR DE IDENTIFICADOR ';'  */
#line 356 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SALIR DE IDENTIFICADOR ;\n"); }
#line 2657 "chusco.tab.c"
    break;

  case 146: /* instruccion_interrupcion: SALIR cuando ';'  */
#line 357 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SALIR cuando ;\n"); }
#line 2663 "chusco.tab.c"
    break;

  case 147: /* cuando: CUANDO expresion  */
#line 361 "chusco.y"
                                                                                                      { printf ("  cuando -> CUANDO expresion\n"); }
#line 2669 "chusco.tab.c"
    break;

  case 148: /* instruccion_lanzamiento_excepcion: LANZA nombre ';'  */
#line 365 "chusco.y"
                                                                                                      { printf ("  instruccion_lanzamiento_excepcion -> LANZA nombre ;\n"); }
#line 2675 "chusco.tab.c"
    break;

  case 149: /* instruccion_captura_excepcion: PRUEBA instruccion_rep clausulas FIN PRUEBA  */
#line 369 "chusco.y"
                                                                                                      { printf ("  instruccion_captura_excepcion -> PRUEBA instruccion_rep clausulas FIN PRUEBA\n"); }
#line 2681 "chusco.tab.c"
    break;

  case 150: /* clausulas: clausulas_excepcion clausula_finalmente  */
#line 373 "chusco.y"
                                                                                                      { printf ("  clausulas -> clausulas_excepcion clausula_finalmente\n"); }
#line 2687 "chusco.tab.c"
    break;

  case 151: /* clausulas: clausulas_excepcion  */
#line 374 "chusco.y"
                                                                                                      { printf ("  clausulas -> clausulas_excepcion\n"); }
#line 2693 "chusco.tab.c"
    break;

  case 152: /* clausulas: clausula_finalmente  */
#line 375 "chusco.y"
                                                                                                      { printf ("  clausulas -> clausula_finalmente\n"); }
#line 2699 "chusco.tab.c"
    break;

  case 153: /* clausulas_excepcion: clausulas_excepcion_especifica_ast clausula_excepcion_general  */
#line 379 "chusco.y"
                                                                                                       { printf ("  clausulas_excepcion -> clausulas_excepcion_especifica_ast clausula_excepcion_general\n"); }
#line 2705 "chusco.tab.c"
    break;

  case 154: /* clausula_excepcion_especifica: EXCEPCION '(' nombre ')' instruccion_rep  */
#line 383 "chusco.y"
                                                                                                      { printf ("  clausula_excepcion_especifica -> EXCEPCION ( nombre ) instruccion_rep\n"); }
#line 2711 "chusco.tab.c"
    break;

  case 155: /* clausula_excepcion_general: EXCEPCION instruccion_rep  */
#line 387 "chusco.y"
                                                                                                     { printf ("  clausula_excepcion_general -> EXCEPCION instruccion_rep\n"); }
#line 2717 "chusco.tab.c"
    break;

  case 156: /* clausula_finalmente: FINALMENTE instruccion_rep  */
#line 391 "chusco.y"
                                                                                                     { printf ("  clausula_finalmente -> FINALMENTE instruccion_rep\n"); }
#line 2723 "chusco.tab.c"
    break;

  case 157: /* expresion: expresion_or  */
#line 401 "chusco.y"
                                                                                    {printf ( "expresion -> expresion_or \n"); }
#line 2729 "chusco.tab.c"
    break;

  case 158: /* expresion: error  */
#line 402 "chusco.y"
                                                                { printf ("  ------------ ERROR en EXPRESIÓN ------------ \n"); yyerrok; }
#line 2735 "chusco.tab.c"
    break;

  case 159: /* expresion_or: expresion_or OR expresion_and  */
#line 406 "chusco.y"
                                                                    {printf ( "expresion_or -> expresion_or \\/ expresion_and\n"); }
#line 2741 "chusco.tab.c"
    break;

  case 160: /* expresion_or: expresion_and  */
#line 407 "chusco.y"
                                                                                    {printf ( "expresion_or -> expresion_and\n"); }
#line 2747 "chusco.tab.c"
    break;

  case 161: /* expresion_and: expresion_and AND expresion_neg  */
#line 411 "chusco.y"
                                                                {printf ( "expresion_and -> expresion_and /\\ expresion_neg\n"); }
#line 2753 "chusco.tab.c"
    break;

  case 162: /* expresion_and: expresion_neg  */
#line 412 "chusco.y"
                                                                                        {printf ( "expresion_and -> expresion_neg\n"); }
#line 2759 "chusco.tab.c"
    break;

  case 163: /* expresion_neg: '~' expresion_relacional  */
#line 416 "chusco.y"
                                                                    {printf ( "expresion_neg -> ~ expresion_relacional\n"); }
#line 2765 "chusco.tab.c"
    break;

  case 164: /* expresion_neg: expresion_relacional  */
#line 417 "chusco.y"
                                                                                {printf ( "expresion_neg -> expresion_relacional\n"); }
#line 2771 "chusco.tab.c"
    break;

  case 165: /* expresion_relacional: expresion_relacional operador_relacional expresion_desplazamiento  */
#line 421 "chusco.y"
                                                                                            {printf ( "expresion_relacional-> operador_relacional expresion_desplazamiento\n"); }
#line 2777 "chusco.tab.c"
    break;

  case 166: /* expresion_relacional: expresion_desplazamiento  */
#line 422 "chusco.y"
                                                                                                        {printf ( "expresion_relacional-> expresion_desplazamiento\n"); }
#line 2783 "chusco.tab.c"
    break;

  case 167: /* operador_relacional: '<'  */
#line 426 "chusco.y"
                                                    {printf ( "operador_relacional-> <\n"); }
#line 2789 "chusco.tab.c"
    break;

  case 168: /* operador_relacional: '>'  */
#line 427 "chusco.y"
                                                    {printf ( "operador_relacional-> >\n"); }
#line 2795 "chusco.tab.c"
    break;

  case 169: /* operador_relacional: LEQ  */
#line 428 "chusco.y"
                                                    {printf ( "operador_relacional-> <=\n"); }
#line 2801 "chusco.tab.c"
    break;

  case 170: /* operador_relacional: GEQ  */
#line 429 "chusco.y"
                                                    {printf ( "operador_relacional-> >=\n"); }
#line 2807 "chusco.tab.c"
    break;

  case 171: /* operador_relacional: '='  */
#line 430 "chusco.y"
                                                    {printf ( "operador_relacional-> =\n"); }
#line 2813 "chusco.tab.c"
    break;

  case 172: /* operador_relacional: NEQ  */
#line 431 "chusco.y"
                                                    {printf ( "operador_relacional-> ~=\n"); }
#line 2819 "chusco.tab.c"
    break;

  case 173: /* expresion_desplazamiento: expresion_desplazamiento operador_desplazamiento expresion_add  */
#line 435 "chusco.y"
                                                                                {printf ( "expresion_desplazamiento-> expresion_desplazamiento operador_desplazamiento expresion_add\n"); }
#line 2825 "chusco.tab.c"
    break;

  case 174: /* expresion_desplazamiento: expresion_add  */
#line 436 "chusco.y"
                                                                                                    {printf ( "expresion_desplazamiento-> expresion_add\n"); }
#line 2831 "chusco.tab.c"
    break;

  case 175: /* operador_desplazamiento: DESPI  */
#line 440 "chusco.y"
                                                            {printf ( "operador_desplazamiento-> <-\n"); }
#line 2837 "chusco.tab.c"
    break;

  case 176: /* operador_desplazamiento: DESPD  */
#line 441 "chusco.y"
                                                            {printf ( "operador_desplazamiento-> ->\n"); }
#line 2843 "chusco.tab.c"
    break;

  case 177: /* expresion_add: expresion_add operador_add expresion_mult_div  */
#line 445 "chusco.y"
                                                                {printf ( "expresion_add -> expresion_add operador_add expresion_mult_div\n"); }
#line 2849 "chusco.tab.c"
    break;

  case 178: /* expresion_add: expresion_mult_div  */
#line 446 "chusco.y"
                                                                        {printf ( "expresion_add -> expresion_mult_div\n"); }
#line 2855 "chusco.tab.c"
    break;

  case 179: /* operador_add: '+'  */
#line 450 "chusco.y"
                                         {printf ( "operador_add-> +\n"); }
#line 2861 "chusco.tab.c"
    break;

  case 180: /* operador_add: '-'  */
#line 451 "chusco.y"
                                         {printf ( "operador_add-> -\n"); }
#line 2867 "chusco.tab.c"
    break;

  case 181: /* expresion_mult_div: expresion_mult_div operador_mult_div expresion_potencia  */
#line 455 "chusco.y"
                                                                         {printf ( "expresion_mult_div-> expresion_mult_div operador_mult_div expresion_potencia\n"); }
#line 2873 "chusco.tab.c"
    break;

  case 182: /* expresion_mult_div: expresion_potencia  */
#line 456 "chusco.y"
                                                                                                 {printf ( "expresion_mult_div-> expresion_potencia\n"); }
#line 2879 "chusco.tab.c"
    break;

  case 183: /* operador_mult_div: '*'  */
#line 460 "chusco.y"
                                                                        {printf ( "operador_mult_div-> *\n"); }
#line 2885 "chusco.tab.c"
    break;

  case 184: /* operador_mult_div: '/'  */
#line 461 "chusco.y"
                                                                        {printf ( "operador_mult_div-> /\n"); }
#line 2891 "chusco.tab.c"
    break;

  case 185: /* operador_mult_div: '\\'  */
#line 462 "chusco.y"
                                                                        {printf ( "operador_mult_div-> \\\n"); }
#line 2897 "chusco.tab.c"
    break;

  case 186: /* expresion_potencia: expresion_posfija '^' expresion_potencia  */
#line 466 "chusco.y"
                                                                            {printf ( " expresion_potencia -> expresion_posfija ^ expresion_potencia\n"); }
#line 2903 "chusco.tab.c"
    break;

  case 187: /* expresion_potencia: expresion_posfija  */
#line 467 "chusco.y"
                                                                                        {printf ( " expresion_potencia -> expresion_posfija\n"); }
#line 2909 "chusco.tab.c"
    break;

  case 188: /* expresion_posfija: expresion_unaria operador_posfijo  */
#line 472 "chusco.y"
                                                                            {printf ( " expresion_posfija -> expresion_unaria operador_posfijo\n"); }
#line 2915 "chusco.tab.c"
    break;

  case 189: /* expresion_posfija: expresion_unaria  */
#line 473 "chusco.y"
                                                                                        {printf ( " expresion_posfija -> expresion_unaria\n"); }
#line 2921 "chusco.tab.c"
    break;

  case 190: /* operador_posfijo: INC  */
#line 478 "chusco.y"
                                                                {printf ( " operador_posfijo -> ++\n"); }
#line 2927 "chusco.tab.c"
    break;

  case 191: /* operador_posfijo: DEC  */
#line 479 "chusco.y"
                                                                {printf ( " operador_posfijo -> --\n"); }
#line 2933 "chusco.tab.c"
    break;

  case 192: /* expresion_unaria: primario  */
#line 483 "chusco.y"
                                            {printf ( " expresion_unaria -> primario\n"); }
#line 2939 "chusco.tab.c"
    break;

  case 193: /* expresion_unaria: '-' primario  */
#line 484 "chusco.y"
                                                {printf ( " expresion_unaria -> - primario\n"); }
#line 2945 "chusco.tab.c"
    break;

  case 194: /* primario: literal  */
#line 488 "chusco.y"
                                                                        {printf ( " primario -> literal\n"); }
#line 2951 "chusco.tab.c"
    break;

  case 195: /* primario: objeto  */
#line 489 "chusco.y"
                                                                                {printf ( " primario -> objeto\n"); }
#line 2957 "chusco.tab.c"
    break;

  case 196: /* primario: llamada_subprograma  */
#line 490 "chusco.y"
                                                                        {printf ( " primario -> llamada_subprograma\n"); }
#line 2963 "chusco.tab.c"
    break;

  case 197: /* primario: OBJETO llamada_subprograma  */
#line 491 "chusco.y"
                                                            {printf ( " primario -> OBJETO llamada_subprograma\n"); }
#line 2969 "chusco.tab.c"
    break;

  case 198: /* primario: enumeraciones  */
#line 492 "chusco.y"
                                                                        {printf ( " primario -> enumeraciones\n"); }
#line 2975 "chusco.tab.c"
    break;

  case 199: /* primario: '(' expresion ')'  */
#line 493 "chusco.y"
                                                                            {printf ( " primario -> ( expresion )\n"); }
#line 2981 "chusco.tab.c"
    break;

  case 200: /* literal: VERDADERO  */
#line 497 "chusco.y"
                                                                        {printf ( " literal -> VERDADERO\n"); }
#line 2987 "chusco.tab.c"
    break;

  case 201: /* literal: FALSO  */
#line 498 "chusco.y"
                                                                            {printf ( " literal -> FALSO\n"); }
#line 2993 "chusco.tab.c"
    break;

  case 202: /* literal: CTC_ENTERA  */
#line 499 "chusco.y"
                                                                        {printf ( " literal -> CTC_ENTERA\n"); }
#line 2999 "chusco.tab.c"
    break;

  case 203: /* literal: CTC_REAL  */
#line 500 "chusco.y"
                                                                            {printf ( " literal -> CTC_REAL\n"); }
#line 3005 "chusco.tab.c"
    break;

  case 204: /* literal: CTC_CARACTER  */
#line 501 "chusco.y"
                                                                        {printf ( " literal -> CTC_CARACTER\n"); }
#line 3011 "chusco.tab.c"
    break;

  case 205: /* literal: CTC_CADENA  */
#line 502 "chusco.y"
                                                                        {printf ( " literal -> CTC_CADENA\n"); }
#line 3017 "chusco.tab.c"
    break;

  case 206: /* objeto: nombre  */
#line 506 "chusco.y"
                                                                                                {printf ( " objeto -> nombre\n"); }
#line 3023 "chusco.tab.c"
    break;

  case 207: /* objeto: objeto '.' IDENTIFICADOR  */
#line 507 "chusco.y"
                                                                                            {printf ( " objeto -> objeto . IDENTIFICADOR\n"); }
#line 3029 "chusco.tab.c"
    break;

  case 208: /* objeto: objeto '[' expresion_rep_comas ']'  */
#line 508 "chusco.y"
                                                                                        {printf ( " objeto -> objeto [ list_expr ]\n"); }
#line 3035 "chusco.tab.c"
    break;

  case 209: /* objeto: objeto '{' ctc_cadena_rep_comas '}'  */
#line 509 "chusco.y"
                                                                                        {printf ( " objeto -> objeto { lista_cadena }\n"); }
#line 3041 "chusco.tab.c"
    break;

  case 210: /* enumeraciones: '[' expresion_condicional clausula_iteracion_rep ']'  */
#line 513 "chusco.y"
                                                                        {printf ( " enumeraciones -> [ expresion_condicional lista_clausula_iteracion ]\n"); }
#line 3047 "chusco.tab.c"
    break;

  case 211: /* enumeraciones: '[' expresion_rep_comas ']'  */
#line 514 "chusco.y"
                                                                                    {printf ( " enumeraciones -> [ list_expr ]\n"); }
#line 3053 "chusco.tab.c"
    break;

  case 212: /* enumeraciones: '{' clave_valor_rep_comas '}'  */
#line 515 "chusco.y"
                                                                                    {printf ( " enumeraciones -> { lista_clave_valor }\n"); }
#line 3059 "chusco.tab.c"
    break;

  case 213: /* enumeraciones: '{' campo_valor_rep_comas '}'  */
#line 516 "chusco.y"
                                                                                    {printf ( " enumeraciones -> { lista_campo_valor }\n"); }
#line 3065 "chusco.tab.c"
    break;

  case 214: /* expresion_condicional: expresion  */
#line 520 "chusco.y"
                                                                                    {printf ( " expresion_condicional -> expresion\n"); }
#line 3071 "chusco.tab.c"
    break;

  case 215: /* expresion_condicional: SI expresion ENTONCES expresion  */
#line 521 "chusco.y"
                                                                                {printf ( " expresion_condicional -> SI expresion ENTONCES expresion\n"); }
#line 3077 "chusco.tab.c"
    break;

  case 216: /* expresion_condicional: SI expresion ENTONCES expresion SINO expresion  */
#line 522 "chusco.y"
                                                                            {printf ( " expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
#line 3083 "chusco.tab.c"
    break;

  case 217: /* clave_valor: CTC_CADENA FLECHA expresion  */
#line 526 "chusco.y"
                                                                                    {printf ( " clave_valor -> CTC_CADENA FLECHA expresion\n"); }
#line 3089 "chusco.tab.c"
    break;

  case 218: /* campo_valor: IDENTIFICADOR FLECHA expresion  */
#line 530 "chusco.y"
                                                                                {printf ( " campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
#line 3095 "chusco.tab.c"
    break;

  case 219: /* libreria_ast: libreria_ast libreria  */
#line 539 "chusco.y"
                                                                                                      { printf ("  libreria_ast -> libreria_ast libreria\n"); }
#line 3101 "chusco.tab.c"
    break;

  case 220: /* libreria_ast: %empty  */
#line 540 "chusco.y"
                                                                                                      { printf ("  libreria_ast -> epsilon \n"); }
#line 3107 "chusco.tab.c"
    break;

  case 221: /* identificador_rep_comas: identificador_rep_comas ',' IDENTIFICADOR  */
#line 544 "chusco.y"
                                                                                                      { printf ("  identificador_rep_comas -> identificador_rep_comas , IDENTIFICADOR\n"); }
#line 3113 "chusco.tab.c"
    break;

  case 222: /* identificador_rep_comas: IDENTIFICADOR  */
#line 545 "chusco.y"
                                                                                                      { printf ("  identificador_rep_comas -> IDENTIFICADOR\n"); }
#line 3119 "chusco.tab.c"
    break;

  case 223: /* declaracion_rep: declaracion_rep declaracion  */
#line 549 "chusco.y"
                                                                                                        { printf ("  declaracion_rep -> declaracion_rep declaracion\n"); }
#line 3125 "chusco.tab.c"
    break;

  case 224: /* declaracion_rep: declaracion  */
#line 550 "chusco.y"
                                                                                                        { printf ("  declaracion_rep -> declaracion\n"); }
#line 3131 "chusco.tab.c"
    break;

  case 225: /* nombre_rep_comas: nombre_rep_comas ',' nombre  */
#line 554 "chusco.y"
                                                                                                     { printf ("  nombre_rep_comas -> nombre_rep_comas , nombre\n"); }
#line 3137 "chusco.tab.c"
    break;

  case 226: /* nombre_rep_comas: nombre  */
#line 555 "chusco.y"
                                                                                                     { printf ("  nombre_rep_comas -> nombre\n"); }
#line 3143 "chusco.tab.c"
    break;

  case 227: /* campo_rep: campo_rep campo  */
#line 559 "chusco.y"
                                                                                                        { printf ("  campo_rep -> campo_rep campo\n"); }
#line 3149 "chusco.tab.c"
    break;

  case 228: /* campo_rep: campo  */
#line 560 "chusco.y"
                                                                                                        { printf ("  campo_rep -> campo\n"); }
#line 3155 "chusco.tab.c"
    break;

  case 229: /* elemento_enumeracion_rep_comas: elemento_enumeracion_rep_comas ',' elemento_enumeracion  */
#line 564 "chusco.y"
                                                                                                        { printf ("  elemento_enumeracion_rep_comas -> elemento_enumeracion_rep_comas , elemento_enumeracion\n"); }
#line 3161 "chusco.tab.c"
    break;

  case 230: /* elemento_enumeracion_rep_comas: elemento_enumeracion  */
#line 565 "chusco.y"
                                                                                                        { printf ("  elemento_enumeracion_rep_comas -> elemento_enumeracion\n"); }
#line 3167 "chusco.tab.c"
    break;

  case 231: /* declaracion_componente_rep: declaracion_componente_rep declaracion_componente  */
#line 569 "chusco.y"
                                                                                                        { printf ("  declaracion_componente_rep -> declaracion_componente_rep declaracion_componente\n"); }
#line 3173 "chusco.tab.c"
    break;

  case 232: /* declaracion_componente_rep: declaracion_componente  */
#line 570 "chusco.y"
                                                                                                        { printf ("  declaracion_componente_rep -> declaracion_componente\n"); }
#line 3179 "chusco.tab.c"
    break;

  case 233: /* modificador_ast_comas_1: modificador_ast_comas  */
#line 574 "chusco.y"
                                                                                                       { printf ("  modificador_ast_comas_1 -> modificador_ast_comas\n"); }
#line 3185 "chusco.tab.c"
    break;

  case 234: /* modificador_ast_comas_1: %empty  */
#line 575 "chusco.y"
                                                                                                       { printf ("  modificador_ast_comas_1 -> epsilon\n"); }
#line 3191 "chusco.tab.c"
    break;

  case 235: /* modificador_ast_comas: modificador_ast_comas ',' modificador  */
#line 579 "chusco.y"
                                                                                                        { printf ("  modificador_ast_comas -> modificador_ast_comas , modificador\n"); }
#line 3197 "chusco.tab.c"
    break;

  case 236: /* modificador_ast_comas: modificador  */
#line 580 "chusco.y"
                                                                                                        { printf ("  modificador_ast_comas -> modificador\n"); }
#line 3203 "chusco.tab.c"
    break;

  case 237: /* declaracion_parametros_ast_puntocoma: declaracion_parametros_ast_puntocoma declaracion_parametros ';'  */
#line 584 "chusco.y"
                                                                                                      { printf ("  declaracion_parametros_ast_puntocoma -> declaracion_parametros_ast_puntocoma declaracion_parametros ;\n"); }
#line 3209 "chusco.tab.c"
    break;

  case 238: /* declaracion_parametros_ast_puntocoma: %empty  */
#line 585 "chusco.y"
                                                                                                      { printf ("  declaracion_parametros_ast_puntocoma -> epsilon\n"); }
#line 3215 "chusco.tab.c"
    break;

  case 239: /* declaracion_ast: declaracion_ast declaracion  */
#line 589 "chusco.y"
                                                                                                      { printf ("  declaracion_ast -> declaracion_ast declaracion\n"); }
#line 3221 "chusco.tab.c"
    break;

  case 240: /* declaracion_ast: %empty  */
#line 590 "chusco.y"
                                                                                                      { printf ("  declaracion_ast -> epsilon\n"); }
#line 3227 "chusco.tab.c"
    break;

  case 241: /* instruccion_rep: instruccion_rep instruccion  */
#line 594 "chusco.y"
                                                                                                        { printf ("  instruccion_rep -> instruccion_rep instruccion\n"); }
#line 3233 "chusco.tab.c"
    break;

  case 242: /* instruccion_rep: instruccion  */
#line 595 "chusco.y"
                                                                                                        { printf ("  instruccion_rep -> instruccion\n"); }
#line 3239 "chusco.tab.c"
    break;

  case 243: /* definicion_parametro_ast_comas_1: definicion_parametro_ast_comas  */
#line 599 "chusco.y"
                                                                                                        { printf ("  definicion_parametro_ast_comas_1 -> definicion_parametro_ast_comas\n"); }
#line 3245 "chusco.tab.c"
    break;

  case 244: /* definicion_parametro_ast_comas_1: %empty  */
#line 600 "chusco.y"
                                                                                                        { printf ("  definicion_parametro_ast_comas_1 -> epsilon\n"); }
#line 3251 "chusco.tab.c"
    break;

  case 245: /* definicion_parametro_ast_comas: definicion_parametro_ast_comas ',' definicion_parametro  */
#line 604 "chusco.y"
                                                                                                         { printf ("  definicion_parametro_ast_comas -> definicion_parametro_ast_comas , definicion_parametro\n"); }
#line 3257 "chusco.tab.c"
    break;

  case 246: /* definicion_parametro_ast_comas: definicion_parametro  */
#line 605 "chusco.y"
                                                                                                         { printf ("  definicion_parametro_ast_comas -> definicion_parametro\n"); }
#line 3263 "chusco.tab.c"
    break;

  case 247: /* caso_rep: caso_rep caso  */
#line 609 "chusco.y"
                                                                                                      { printf ("  caso_rep -> caso_rep caso\n"); }
#line 3269 "chusco.tab.c"
    break;

  case 248: /* caso_rep: caso  */
#line 610 "chusco.y"
                                                                                                      { printf ("  caso_rep -> caso\n"); }
#line 3275 "chusco.tab.c"
    break;

  case 249: /* entrada_rep_dospuntos: entrada_rep_dospuntos entrada ':'  */
#line 614 "chusco.y"
                                                                                                     { printf ("  entrada_rep_dospuntos -> entrada_rep_dospuntos entrada :\n"); }
#line 3281 "chusco.tab.c"
    break;

  case 250: /* entrada_rep_dospuntos: %empty  */
#line 615 "chusco.y"
                                                                                                     { printf ("  entrada_rep_dospuntos -> epsilon\n"); }
#line 3287 "chusco.tab.c"
    break;

  case 251: /* clausulas_excepcion_especifica_ast: clausulas_excepcion_especifica_ast clausula_excepcion_especifica  */
#line 619 "chusco.y"
                                                                                                      { printf ("  clausulas_excepcion_especifica_ast -> clausulas_excepcion_especifica_ast clausula_excepcion_especifica\n"); }
#line 3293 "chusco.tab.c"
    break;

  case 252: /* clausulas_excepcion_especifica_ast: %empty  */
#line 620 "chusco.y"
                                                                                                      { printf ("  clausulas_excepcion_especifica_ast -> epsilon \n"); }
#line 3299 "chusco.tab.c"
    break;

  case 253: /* clave_valor_rep_comas: clave_valor_rep_comas ',' clave_valor  */
#line 624 "chusco.y"
                                                                                                     { printf ("  clave_valor_rep_comas -> clave_valor_rep_comas , clave_valor\n"); }
#line 3305 "chusco.tab.c"
    break;

  case 254: /* clave_valor_rep_comas: clave_valor  */
#line 625 "chusco.y"
                                                                                                     { printf ("  clave_valor_rep_comas -> clave_valor\n"); }
#line 3311 "chusco.tab.c"
    break;

  case 255: /* campo_valor_rep_comas: campo_valor_rep_comas ',' campo_valor  */
#line 629 "chusco.y"
                                                                                                     { printf ("  campo_valor_rep_comas -> campo_valor_rep_comas , campo_valor\n"); }
#line 3317 "chusco.tab.c"
    break;

  case 256: /* campo_valor_rep_comas: campo_valor  */
#line 630 "chusco.y"
                                                                                                     { printf ("  campo_valor_rep_comas -> campo_valor\n"); }
#line 3323 "chusco.tab.c"
    break;

  case 257: /* expresion_rep_comas: expresion_rep_comas ',' expresion  */
#line 634 "chusco.y"
                                                                                                     { printf ("  expresion_rep_comas -> expresion_rep_comas , expresion\n"); }
#line 3329 "chusco.tab.c"
    break;

  case 258: /* expresion_rep_comas: expresion  */
#line 635 "chusco.y"
                                                                                                     { printf ("  expresion_rep_comas -> expresion\n"); }
#line 3335 "chusco.tab.c"
    break;

  case 259: /* ctc_cadena_rep_comas: ctc_cadena_rep_comas ',' CTC_CADENA  */
#line 639 "chusco.y"
                                                                                                    { printf ("  ctc_cadena_rep_comas -> ctc_cadena_rep_comas , CTC_CADENA\n"); }
#line 3341 "chusco.tab.c"
    break;

  case 260: /* ctc_cadena_rep_comas: CTC_CADENA  */
#line 640 "chusco.y"
                                                                                                    { printf ("  ctc_cadena_rep_comas -> CTC_CADENA\n"); }
#line 3347 "chusco.tab.c"
    break;

  case 261: /* clausula_iteracion_rep: clausula_iteracion_rep clausula_iteracion  */
#line 644 "chusco.y"
                                                                                                     { printf ("  clausula_iteracion_rep -> clausula_iteracion_rep clausula_iteracion\n"); }
#line 3353 "chusco.tab.c"
    break;

  case 262: /* clausula_iteracion_rep: clausula_iteracion  */
#line 645 "chusco.y"
                                                                                                     { printf ("  clausula_iteracion_rep -> clausula_iteracion\n"); }
#line 3359 "chusco.tab.c"
    break;


#line 3363 "chusco.tab.c"

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

#line 650 "chusco.y"


int yyerror(char *s) {
  fflush(stdout);
  printf("***************** %s\n",s);
}


int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./chusco NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }

