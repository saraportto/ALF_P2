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
  YYSYMBOL_90_ = 90,                       /* ':'  */
  YYSYMBOL_91_ = 91,                       /* '('  */
  YYSYMBOL_92_ = 92,                       /* ')'  */
  YYSYMBOL_93_ = 93,                       /* '~'  */
  YYSYMBOL_94_ = 94,                       /* '<'  */
  YYSYMBOL_95_ = 95,                       /* '>'  */
  YYSYMBOL_96_ = 96,                       /* '='  */
  YYSYMBOL_97_ = 97,                       /* '+'  */
  YYSYMBOL_98_ = 98,                       /* '-'  */
  YYSYMBOL_99_ = 99,                       /* '*'  */
  YYSYMBOL_100_ = 100,                     /* '/'  */
  YYSYMBOL_101_ = 101,                     /* '\\'  */
  YYSYMBOL_102_ = 102,                     /* '^'  */
  YYSYMBOL_103_ = 103,                     /* '.'  */
  YYSYMBOL_104_ = 104,                     /* '['  */
  YYSYMBOL_105_ = 105,                     /* ']'  */
  YYSYMBOL_106_ = 106,                     /* '{'  */
  YYSYMBOL_107_ = 107,                     /* '}'  */
  YYSYMBOL_108_ = 108,                     /* ','  */
  YYSYMBOL_YYACCEPT = 109,                 /* $accept  */
  YYSYMBOL_programa = 110,                 /* programa  */
  YYSYMBOL_definicion_programa = 111,      /* definicion_programa  */
  YYSYMBOL_codigo_programa = 112,          /* codigo_programa  */
  YYSYMBOL_libreria = 113,                 /* libreria  */
  YYSYMBOL_nombre = 114,                   /* nombre  */
  YYSYMBOL_definicion_libreria = 115,      /* definicion_libreria  */
  YYSYMBOL_codigo_libreria = 116,          /* codigo_libreria  */
  YYSYMBOL_exportaciones = 117,            /* exportaciones  */
  YYSYMBOL_declaracion = 118,              /* declaracion  */
  YYSYMBOL_declaracion_objeto = 119,       /* declaracion_objeto  */
  YYSYMBOL_especificacion_tipo = 120,      /* especificacion_tipo  */
  YYSYMBOL_declaracion_tipo = 121,         /* declaracion_tipo  */
  YYSYMBOL_tipo_no_estructurado = 122,     /* tipo_no_estructurado  */
  YYSYMBOL_tipo_escalar = 123,             /* tipo_escalar  */
  YYSYMBOL_longitud = 124,                 /* longitud  */
  YYSYMBOL_tipo_basico = 125,              /* tipo_basico  */
  YYSYMBOL_rango = 126,                    /* rango  */
  YYSYMBOL_tipo_tabla = 127,               /* tipo_tabla  */
  YYSYMBOL_tipo_diccionario = 128,         /* tipo_diccionario  */
  YYSYMBOL_tipo_estructurado = 129,        /* tipo_estructurado  */
  YYSYMBOL_tipo_registro = 130,            /* tipo_registro  */
  YYSYMBOL_campo = 131,                    /* campo  */
  YYSYMBOL_tipo_enumerado = 132,           /* tipo_enumerado  */
  YYSYMBOL_elemento_enumeracion = 133,     /* elemento_enumeracion  */
  YYSYMBOL_clase = 134,                    /* clase  */
  YYSYMBOL_superclases = 135,              /* superclases  */
  YYSYMBOL_declaracion_componente = 136,   /* declaracion_componente  */
  YYSYMBOL_visibilidad = 137,              /* visibilidad  */
  YYSYMBOL_componente = 138,               /* componente  */
  YYSYMBOL_modificador = 139,              /* modificador  */
  YYSYMBOL_declaracion_subprograma = 140,  /* declaracion_subprograma  */
  YYSYMBOL_cabecera_subprograma = 141,     /* cabecera_subprograma  */
  YYSYMBOL_parametrizacion = 142,          /* parametrizacion  */
  YYSYMBOL_declaracion_parametros = 143,   /* declaracion_parametros  */
  YYSYMBOL_modo = 144,                     /* modo  */
  YYSYMBOL_tipo_resultado = 145,           /* tipo_resultado  */
  YYSYMBOL_cuerpo_subprograma = 146,       /* cuerpo_subprograma  */
  YYSYMBOL_instruccion = 147,              /* instruccion  */
  YYSYMBOL_instruccion_asignacion = 148,   /* instruccion_asignacion  */
  YYSYMBOL_op_asignacion = 149,            /* op_asignacion  */
  YYSYMBOL_instruccion_devolver = 150,     /* instruccion_devolver  */
  YYSYMBOL_instruccion_llamada = 151,      /* instruccion_llamada  */
  YYSYMBOL_llamada_subprograma = 152,      /* llamada_subprograma  */
  YYSYMBOL_definicion_parametro = 153,     /* definicion_parametro  */
  YYSYMBOL_instruccion_si = 154,           /* instruccion_si  */
  YYSYMBOL_instruccion_casos = 155,        /* instruccion_casos  */
  YYSYMBOL_caso = 156,                     /* caso  */
  YYSYMBOL_entradas = 157,                 /* entradas  */
  YYSYMBOL_entrada = 158,                  /* entrada  */
  YYSYMBOL_instruccion_bucle = 159,        /* instruccion_bucle  */
  YYSYMBOL_clausula_iteracion = 160,       /* clausula_iteracion  */
  YYSYMBOL_instruccion_interrupcion = 161, /* instruccion_interrupcion  */
  YYSYMBOL_cuando = 162,                   /* cuando  */
  YYSYMBOL_instruccion_lanzamiento_excepcion = 163, /* instruccion_lanzamiento_excepcion  */
  YYSYMBOL_instruccion_captura_excepcion = 164, /* instruccion_captura_excepcion  */
  YYSYMBOL_clausulas = 165,                /* clausulas  */
  YYSYMBOL_clausulas_excepcion = 166,      /* clausulas_excepcion  */
  YYSYMBOL_clausula_excepcion_especifica = 167, /* clausula_excepcion_especifica  */
  YYSYMBOL_clausula_excepcion_general = 168, /* clausula_excepcion_general  */
  YYSYMBOL_clausula_finalmente = 169,      /* clausula_finalmente  */
  YYSYMBOL_expresion = 170,                /* expresion  */
  YYSYMBOL_expresion_OR = 171,             /* expresion_OR  */
  YYSYMBOL_expresion_AND = 172,            /* expresion_AND  */
  YYSYMBOL_expresion_neg = 173,            /* expresion_neg  */
  YYSYMBOL_operador_relacional = 174,      /* operador_relacional  */
  YYSYMBOL_operador_desplazamiento = 175,  /* operador_desplazamiento  */
  YYSYMBOL_expresion_aritmetica_ = 176,    /* expresion_aritmetica_  */
  YYSYMBOL_expresion_aritmetica_fundamental = 177, /* expresion_aritmetica_fundamental  */
  YYSYMBOL_expresion_potencia = 178,       /* expresion_potencia  */
  YYSYMBOL_expresion_posfija = 179,        /* expresion_posfija  */
  YYSYMBOL_operador_posfijo = 180,         /* operador_posfijo  */
  YYSYMBOL_expresion_unaria = 181,         /* expresion_unaria  */
  YYSYMBOL_primario = 182,                 /* primario  */
  YYSYMBOL_literal = 183,                  /* literal  */
  YYSYMBOL_objeto = 184,                   /* objeto  */
  YYSYMBOL_enumeraciones = 185,            /* enumeraciones  */
  YYSYMBOL_expresion_condicional = 186,    /* expresion_condicional  */
  YYSYMBOL_clave_valor = 187,              /* clave_valor  */
  YYSYMBOL_campo_valor = 188,              /* campo_valor  */
  YYSYMBOL_libreria_ast = 189,             /* libreria_ast  */
  YYSYMBOL_identificador_rep_comas = 190,  /* identificador_rep_comas  */
  YYSYMBOL_declaracion_rep = 191,          /* declaracion_rep  */
  YYSYMBOL_nombre_rep_comas = 192,         /* nombre_rep_comas  */
  YYSYMBOL_campo_rep = 193,                /* campo_rep  */
  YYSYMBOL_elemento_enumeracion_rep_comas = 194, /* elemento_enumeracion_rep_comas  */
  YYSYMBOL_declaracion_componente_rep = 195, /* declaracion_componente_rep  */
  YYSYMBOL_modificador_ast_comas_1 = 196,  /* modificador_ast_comas_1  */
  YYSYMBOL_modificador_ast_comas = 197,    /* modificador_ast_comas  */
  YYSYMBOL_declaracion_parametros_ast_puntocoma = 198, /* declaracion_parametros_ast_puntocoma  */
  YYSYMBOL_declaracion_ast = 199,          /* declaracion_ast  */
  YYSYMBOL_instruccion_rep = 200,          /* instruccion_rep  */
  YYSYMBOL_definicion_parametro_ast_comas_1 = 201, /* definicion_parametro_ast_comas_1  */
  YYSYMBOL_definicion_parametro_ast_comas = 202, /* definicion_parametro_ast_comas  */
  YYSYMBOL_caso_rep = 203,                 /* caso_rep  */
  YYSYMBOL_entrada_rep_dospuntos = 204,    /* entrada_rep_dospuntos  */
  YYSYMBOL_clausulas_excepcion_especifica_ast = 205, /* clausulas_excepcion_especifica_ast  */
  YYSYMBOL_clave_valor_rep_comas = 206,    /* clave_valor_rep_comas  */
  YYSYMBOL_campo_valor_rep_comas = 207,    /* campo_valor_rep_comas  */
  YYSYMBOL_expresion_rep_comas = 208,      /* expresion_rep_comas  */
  YYSYMBOL_ctc_cadena_rep_comas = 209,     /* ctc_cadena_rep_comas  */
  YYSYMBOL_clausula_iteracion_rep = 210    /* clausula_iteracion_rep  */
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
#define YYLAST   951

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  250
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  465

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      91,    92,    99,    97,   108,    98,   103,   100,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,    89,
      94,    96,    95,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   104,   101,   105,   102,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   106,     2,   107,    93,     2,     2,     2,
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
      50,    51,    55,    59,    60,    64,    68,    69,    70,    80,
      81,    82,    86,    87,    97,    98,   102,   103,   104,   108,
     109,   110,   111,   112,   113,   114,   115,   119,   120,   124,
     125,   126,   127,   131,   132,   136,   137,   141,   145,   146,
     147,   151,   155,   156,   160,   161,   165,   166,   176,   177,
     178,   179,   183,   187,   188,   192,   193,   194,   198,   199,
     200,   204,   205,   206,   207,   208,   209,   220,   224,   225,
     226,   227,   231,   235,   236,   237,   238,   242,   243,   247,
     251,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   273,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   289,   290,   295,   299,   303,   304,   308,   309,   313,
     317,   321,   325,   326,   327,   331,   332,   336,   337,   338,
     339,   340,   341,   342,   346,   347,   348,   349,   350,   351,
     355,   359,   363,   367,   368,   369,   373,   377,   381,   385,
     394,   398,   399,   403,   404,   408,   409,   413,   414,   415,
     416,   417,   418,   419,   424,   425,   426,   430,   431,   432,
     436,   437,   438,   439,   444,   445,   450,   451,   456,   457,
     461,   462,   466,   467,   468,   469,   470,   471,   475,   476,
     477,   478,   479,   480,   484,   485,   486,   487,   491,   492,
     493,   494,   498,   499,   500,   505,   509,   519,   520,   524,
     525,   529,   530,   534,   535,   539,   540,   544,   545,   549,
     550,   554,   555,   559,   560,   564,   565,   569,   570,   574,
     575,   579,   580,   584,   585,   589,   590,   594,   595,   599,
     600,   604,   605,   609,   610,   614,   615,   619,   620,   624,
     625
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
  "ASIG_DESPI", "ASIG_DESPD", "';'", "':'", "'('", "')'", "'~'", "'<'",
  "'>'", "'='", "'+'", "'-'", "'*'", "'/'", "'\\\\'", "'^'", "'.'", "'['",
  "']'", "'{'", "'}'", "','", "$accept", "programa", "definicion_programa",
  "codigo_programa", "libreria", "nombre", "definicion_libreria",
  "codigo_libreria", "exportaciones", "declaracion", "declaracion_objeto",
  "especificacion_tipo", "declaracion_tipo", "tipo_no_estructurado",
  "tipo_escalar", "longitud", "tipo_basico", "rango", "tipo_tabla",
  "tipo_diccionario", "tipo_estructurado", "tipo_registro", "campo",
  "tipo_enumerado", "elemento_enumeracion", "clase", "superclases",
  "declaracion_componente", "visibilidad", "componente", "modificador",
  "declaracion_subprograma", "cabecera_subprograma", "parametrizacion",
  "declaracion_parametros", "modo", "tipo_resultado", "cuerpo_subprograma",
  "instruccion", "instruccion_asignacion", "op_asignacion",
  "instruccion_devolver", "instruccion_llamada", "llamada_subprograma",
  "definicion_parametro", "instruccion_si", "instruccion_casos", "caso",
  "entradas", "entrada", "instruccion_bucle", "clausula_iteracion",
  "instruccion_interrupcion", "cuando",
  "instruccion_lanzamiento_excepcion", "instruccion_captura_excepcion",
  "clausulas", "clausulas_excepcion", "clausula_excepcion_especifica",
  "clausula_excepcion_general", "clausula_finalmente", "expresion",
  "expresion_OR", "expresion_AND", "expresion_neg", "operador_relacional",
  "operador_desplazamiento", "expresion_aritmetica_",
  "expresion_aritmetica_fundamental", "expresion_potencia",
  "expresion_posfija", "operador_posfijo", "expresion_unaria", "primario",
  "literal", "objeto", "enumeraciones", "expresion_condicional",
  "clave_valor", "campo_valor", "libreria_ast", "identificador_rep_comas",
  "declaracion_rep", "nombre_rep_comas", "campo_rep",
  "elemento_enumeracion_rep_comas", "declaracion_componente_rep",
  "modificador_ast_comas_1", "modificador_ast_comas",
  "declaracion_parametros_ast_puntocoma", "declaracion_ast",
  "instruccion_rep", "definicion_parametro_ast_comas_1",
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

#define YYPACT_NINF (-212)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-247)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,    53,    58,    84,  -212,  -212,    55,    87,  -212,  -212,
     142,  -212,   102,  -212,   113,   151,   130,   162,   139,   173,
    -212,  -212,   135,  -212,  -212,  -212,  -212,    42,   135,  -212,
      -1,   130,  -212,   174,   -45,   130,    20,  -212,   255,   135,
     370,   199,  -212,   607,  -212,     6,   214,  -212,   130,     4,
     515,  -212,   271,  -212,   233,   889,  -212,  -212,   515,   285,
    -212,   287,  -212,    19,   225,   174,   -10,  -212,  -212,    33,
    -212,  -212,  -212,   637,   572,   130,   637,   254,   607,   266,
      16,   637,     3,   230,  -212,   -23,  -212,  -212,  -212,  -212,
     245,  -212,  -212,  -212,   607,  -212,  -212,  -212,   845,   438,
     272,  -212,   174,   273,  -212,  -212,   272,  -212,  -212,    93,
      13,   272,   250,  -212,  -212,  -212,  -212,   270,   515,   515,
     108,   637,   637,  -212,  -212,  -212,   637,   299,  -212,   130,
    -212,  -212,  -212,  -212,  -212,   637,   702,   116,   618,    65,
    -212,   325,   269,   274,  -212,    95,   -20,   115,   223,  -212,
     248,   145,  -212,  -212,    62,  -212,  -212,   268,   -41,  -212,
      22,   477,    24,   637,   294,  -212,   276,   331,  -212,   278,
     165,   685,  -212,   503,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,   297,   637,   304,   637,  -212,  -212,    -8,
     280,   148,    43,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,   190,   130,  -212,  -212,   837,  -212,   241,  -212,
    -212,   355,   306,   265,    29,   307,  -212,   -19,  -212,    48,
      23,  -212,   637,  -212,  -212,   637,   334,   310,   296,  -212,
     321,   637,   -23,  -212,   301,    95,  -212,   637,   140,   165,
     155,   327,   332,  -212,  -212,   120,   143,   391,   637,   637,
     702,   702,   702,   702,   702,   702,   702,   702,   702,   702,
     702,   702,   702,   702,  -212,  -212,  -212,  -212,  -212,   637,
     515,   607,   377,   379,  -212,   382,   637,   515,  -212,    18,
    -212,   607,  -212,   607,   341,  -212,  -212,   320,   311,   410,
    -212,  -212,   163,  -212,   166,   336,  -212,  -212,  -212,  -212,
     856,   837,   768,    77,   800,  -212,   415,  -212,  -212,   146,
     364,   637,   414,   364,   515,   387,  -212,   343,  -212,   637,
     637,  -212,   637,  -212,  -212,   418,  -212,    10,  -212,   637,
     637,   637,  -212,   376,  -212,   383,  -212,  -212,   112,   274,
    -212,   -20,   -20,   -20,   -20,   -20,   -20,   115,   115,   223,
     223,  -212,  -212,  -212,  -212,  -212,   422,   607,   397,  -212,
     409,  -212,  -212,   429,   431,  -212,   362,   252,   542,   637,
    -212,   685,  -212,  -212,  -212,   388,  -212,  -212,  -212,   389,
     515,   810,   449,  -212,   450,  -212,  -212,   -18,  -212,  -212,
    -212,    21,  -212,  -212,  -212,   371,   399,   637,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,   394,   628,   461,  -212,   637,
    -212,   130,   607,  -212,   637,  -212,   416,   607,   466,  -212,
    -212,  -212,   637,   403,   469,  -212,  -212,   458,   637,  -212,
     467,   637,   426,   607,  -212,   395,   419,  -212,  -212,    -7,
     471,  -212,   568,  -212,  -212,   637,  -212,  -212,   406,   515,
    -212,   637,   607,  -212,   637,   607,  -212,   435,  -212,  -212,
    -212,  -212,  -212,   607,  -212
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,   208,
     208,    12,     0,     4,   228,     0,     0,     0,     0,     0,
     210,   207,     0,   212,    16,    17,    18,     0,    13,     5,
       0,     0,    10,   214,     0,     0,    81,   228,     0,    14,
       0,     0,   211,     0,   227,     0,     0,    15,     0,     0,
       0,   226,    80,    79,     0,     0,    39,    40,     0,     0,
      41,     0,    42,     0,     0,    22,     0,    23,    26,    36,
      27,    28,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,   100,   194,   230,    91,    92,    93,
       0,    94,    95,    96,     0,    97,    98,    99,     0,     0,
       0,    11,   213,     0,     7,    89,     0,    78,    77,   222,
       0,     0,     0,    25,    48,    49,    50,     0,     0,     0,
      32,     0,     0,    20,    37,    38,     0,    33,   189,     0,
     188,   192,   193,   190,   191,     0,     0,     0,     0,     0,
     184,     0,   150,   152,   154,   156,   163,   166,   169,   173,
     175,   177,   180,   182,   183,   186,   112,     0,     0,   133,
       0,   240,     0,     0,     0,   137,     0,     0,   135,     0,
       0,   232,   113,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     0,     0,     0,     0,    90,   229,     0,
       0,     0,     0,    74,    71,    72,    75,    76,    73,    67,
      66,    65,   222,     0,    69,    68,   222,   220,   222,    64,
     224,   222,     0,   221,     0,    57,   218,     0,   216,     0,
       0,    24,     0,    47,    46,     0,    30,     0,     0,    35,
       0,     0,     0,   185,     0,   155,   181,     0,   202,     0,
       0,     0,     0,   242,   244,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   176,   111,   141,     0,
       0,     0,     0,   144,   145,     0,     0,     0,   140,     0,
     139,     0,   134,     0,    10,   234,   115,     0,   231,     0,
     195,   246,     0,   248,     0,     0,     9,     8,   225,    82,
       0,   222,   222,     0,   222,    63,     0,   219,    70,     0,
       0,     0,     0,     0,     0,     0,   215,     0,    31,     0,
       0,    21,     0,    34,   187,     0,   250,     0,   199,     0,
       0,     0,   200,     0,   201,     0,   238,   236,     0,   151,
     153,   159,   160,   162,   157,   158,   161,   164,   165,   167,
     168,   170,   171,   172,   174,   128,     0,   149,     0,   143,
       0,   239,   146,   130,     0,   138,     0,     0,     0,     0,
     114,     0,   126,   196,   197,     0,   101,    88,    87,    86,
       0,   222,     0,    62,     0,    61,   223,     0,    56,    55,
     217,     0,    51,    19,    29,     0,    43,     0,   198,   249,
     245,   205,   206,   241,   243,     0,     0,     0,   235,     0,
     142,     0,   148,   132,     0,   136,     0,     0,     0,   116,
     233,   247,     0,    85,     0,    60,    59,     0,     0,    52,
       0,     0,   203,     0,   124,   121,   123,   119,   127,     0,
     131,   118,     0,   125,    84,     0,    58,    54,     0,     0,
      44,     0,   120,   237,     0,     0,   129,     0,    83,    53,
      45,   204,   122,   147,   117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,  -212,  -212,  -212,  -212,   -16,  -212,  -212,  -212,   196,
     203,   -47,   263,   437,   282,   381,   434,  -211,  -212,  -212,
    -212,  -212,   279,  -212,   189,  -212,   302,  -207,  -212,   298,
     200,   293,  -212,  -212,  -212,  -212,   456,   475,   -91,  -212,
    -212,  -212,  -212,   -42,   144,  -212,  -212,   175,  -212,  -212,
    -212,  -163,  -212,   -80,  -212,  -212,  -212,  -212,  -212,  -212,
     243,    25,  -212,   275,   277,   398,    59,    26,    37,    67,
    -212,  -212,  -212,   401,  -212,   -25,  -212,  -212,   185,   201,
     514,   -94,   517,   322,  -212,   231,  -180,  -212,  -212,  -212,
    -212,   -73,  -212,  -212,  -212,  -212,  -212,  -212,  -212,   360,
    -212,  -212
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,    13,    21,    85,     5,    11,    22,    23,
     204,    66,   205,    67,    68,   127,    69,   229,    70,    71,
     113,   114,   218,   115,   216,   116,   206,   207,   208,   209,
     210,    26,    37,    52,   191,   380,    53,    29,    86,    87,
     186,    88,    89,   140,   285,    91,    92,   337,   405,   435,
      93,    94,    95,   166,    96,    97,   272,   273,   361,   362,
     274,   230,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   266,   151,   152,   153,   154,   155,   239,   243,   244,
      12,    27,    28,    34,   220,   217,   211,   212,   213,   106,
      30,    99,   287,   288,   338,   406,   275,   245,   246,   240,
     294,   327
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    90,   169,   105,   307,   161,   189,   283,   188,   312,
     427,   117,   192,   103,   318,    45,   163,   219,    98,    49,
     323,   173,   302,    56,    65,    57,   304,   214,    46,   163,
     164,   163,   102,    56,    65,    57,    90,    50,   100,    60,
      43,   269,    65,   276,    47,   124,    46,    76,   268,    60,
      77,   315,    90,    98,   256,   257,    18,    90,    19,   158,
     122,    79,    46,    48,    20,   363,   125,    62,   171,    98,
     188,   223,   224,    46,    98,    46,   326,    62,   215,   123,
     126,   296,   188,    63,     8,   455,     1,   233,    20,   313,
     313,   428,   168,   104,     2,   307,   193,   307,   141,   157,
      41,   159,    65,    65,   194,   165,   167,   365,   394,   195,
     429,    51,   270,   232,   277,   398,    15,   196,     6,    90,
     124,   381,   197,     7,   198,   336,   219,    15,    16,   241,
     242,    90,    40,   300,    17,   199,    98,   200,   314,   201,
     407,   125,    -6,   128,     9,    17,   227,   228,    98,   193,
      41,    41,    19,   202,   129,   225,    41,   194,    20,    18,
     234,    19,   195,   238,   399,   183,   184,    20,   185,   383,
     196,   250,   251,   252,   307,   197,    10,   198,   130,   131,
     132,    32,   133,   134,   203,    48,    31,    33,   278,   253,
     254,   255,    18,   193,    19,    32,   286,    35,   357,   366,
      20,   194,    76,   440,    36,    77,   195,   135,   367,   291,
     368,   295,   258,   259,   196,    24,    79,   264,   265,   197,
     138,   198,   139,   356,    42,    24,    44,   332,   333,    90,
     364,    24,   199,    24,   200,    42,   201,   298,    38,    90,
     299,    90,    24,    46,   193,  -246,    98,   317,  -246,    19,
     334,   335,   194,   379,    65,    20,    98,   195,    98,    73,
     328,    65,   325,   329,    72,   196,   188,   391,   373,    74,
     197,   329,   198,   374,   375,    25,   188,   188,    55,   101,
     416,   203,   347,   348,    65,    25,    75,   412,    50,    76,
     108,    25,    77,    25,   355,   349,   350,    78,    65,   118,
      19,   119,    25,    79,    80,    81,    20,    82,   417,   341,
     342,   343,   344,   345,   346,    90,   121,    83,    90,   160,
     170,   188,   260,   261,   262,    90,    90,   351,   352,   353,
     354,   162,    98,   423,   172,    98,   388,    20,   190,   221,
     222,    84,    98,    98,   442,   395,   231,   396,   247,   248,
     263,   188,   281,   249,   400,   401,   402,   267,   193,   279,
     452,   188,   290,    18,    65,   280,   194,   282,   293,   297,
      90,   195,   188,   309,    56,    90,    57,   311,   320,   196,
      58,   319,   463,   306,   197,   321,   198,    98,    59,   322,
      60,    90,    98,   324,   419,   439,   286,   199,   330,   200,
      90,   201,   460,   331,   336,   358,    61,   360,    98,   271,
      90,   369,   370,    90,    19,   372,    73,    98,    62,   371,
      20,    90,   432,   385,    63,   376,    74,    98,    64,   215,
      98,   436,   393,    65,   438,    32,   389,   392,    98,   397,
     241,   409,   410,    75,   413,    73,    76,   444,   242,    77,
     414,   415,   421,   448,    78,    74,   450,   425,   426,   422,
      79,    80,    81,   430,    82,   433,   187,   431,   437,   441,
     458,   443,    75,   445,    83,    76,   461,   446,    77,   462,
     447,   449,   451,    78,    73,   453,   456,   454,   464,    79,
      80,    81,   112,    82,    74,   459,   310,   120,    84,   316,
     411,   226,   390,    83,   301,   308,   305,   271,   107,   386,
      73,    75,    54,   408,    76,   420,   359,    77,   403,    56,
      74,    57,    78,   339,    14,   303,   340,    84,    79,    80,
      81,   289,    82,    59,   235,    60,   404,    75,   236,    39,
      76,   387,    83,    77,   292,     0,     0,     0,    78,    73,
       0,    61,     0,     0,    79,    80,    81,     0,    82,    74,
       0,     0,     0,    62,     0,     0,    84,     0,    83,    63,
     418,     0,     0,    64,     0,    73,    75,     0,     0,    76,
      32,     0,    77,     0,     0,    74,     0,    78,     0,     0,
       0,     0,    84,    79,    80,    81,   457,    82,     0,   128,
       0,     0,    75,     0,     0,    76,     0,    83,    77,     0,
     129,     0,     0,    78,    73,     0,     0,     0,     0,    79,
      80,    81,     0,    82,    74,     0,     0,     0,     0,     0,
       0,    84,     0,    83,   130,   131,   132,    32,   133,   134,
       0,    75,     0,     0,    76,   128,     0,    77,     0,     0,
       0,     0,    78,     0,     0,   128,   129,    84,    79,    80,
      81,   156,    82,   135,   128,   136,   129,   434,     0,     0,
     137,   237,    83,     0,     0,   129,   138,     0,   139,     0,
     130,   131,   132,    32,   133,   134,     0,     0,     0,     0,
     130,   131,   132,    32,   133,   134,    84,     0,     0,   130,
     131,   132,    32,   133,   134,     0,     0,     0,     0,   135,
       0,   136,   128,     0,     0,     0,   137,     0,     0,   135,
       0,   136,   138,   129,   139,     0,   137,     0,   135,   128,
     136,     0,   138,     0,   139,   137,     0,     0,     0,     0,
     129,   138,     0,   139,     0,     0,     0,   130,   131,   132,
     284,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,   131,   132,    32,   133,   134,
       0,   193,     0,     0,     0,     0,   135,     0,   136,   194,
       0,     0,     0,   137,   195,     0,     0,     0,     0,   138,
       0,   139,   196,   135,     0,     0,   382,   197,     0,   198,
     137,     0,     0,   193,     0,     0,   138,     0,   139,     0,
     199,   194,   200,   193,   201,     0,   195,     0,     0,     0,
       0,   194,     0,     0,   196,     0,   195,    19,   384,   197,
       0,   198,     0,    20,   196,     0,     0,     0,   424,   197,
     193,   198,   199,     0,   200,     0,   201,     0,   194,     0,
       0,     0,   199,   195,   200,     0,   201,     0,     0,    19,
      56,   196,    57,     0,     0,    20,   197,     0,   198,    19,
       0,     0,     0,     0,    59,    20,    60,     0,     0,   199,
       0,   200,     0,   201,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    56,     0,    57,    19,   109,     0,     0,
       0,     0,    20,     0,    62,   377,     0,    59,     0,    60,
      63,   110,     0,     0,    64,   174,     0,   378,     0,     0,
       0,    32,     0,     0,     0,    61,   175,   176,   177,   178,
     179,   180,   181,   182,     0,     0,     0,    62,     0,   111,
       0,     0,     0,    63,     0,     0,     0,    64,   183,   184,
       0,   185
};

static const yytype_int16 yycheck[] =
{
      16,    43,    82,    50,   211,    78,   100,   170,    99,    28,
      28,    58,   106,     9,   225,    31,    13,   111,    43,    35,
     231,    94,   202,     4,    40,     6,   206,    14,    69,    13,
      14,    13,    48,     4,    50,     6,    78,    17,    32,    20,
      41,    19,    58,    19,    89,    12,    69,    37,    89,    20,
      40,    28,    94,    78,    74,    75,    57,    99,    59,    75,
      70,    51,    69,   108,    65,   276,    33,    48,    91,    94,
     161,   118,   119,    69,    99,    69,   239,    48,    65,    89,
      47,    89,   173,    54,     0,    92,    35,   129,    65,   108,
     108,    70,    89,    89,    43,   302,     3,   304,    73,    74,
     108,    76,   118,   119,    11,    89,    81,    89,   319,    16,
      89,    91,    90,   129,    90,   105,    14,    24,    65,   161,
      12,   301,    29,    65,    31,    13,   220,    14,    26,    64,
      65,   173,    90,    90,    32,    42,   161,    44,    90,    46,
      28,    33,     0,    27,    89,    32,   121,   122,   173,     3,
     108,   108,    59,    60,    38,    47,   108,    11,    65,    57,
     135,    59,    16,   138,   327,   103,   104,    65,   106,    92,
      24,    76,    77,    78,   381,    29,    89,    31,    62,    63,
      64,    65,    66,    67,    91,   108,    35,   203,   163,    94,
      95,    96,    57,     3,    59,    65,   171,    35,   271,   279,
      65,    11,    37,   414,    65,    40,    16,    91,   281,   184,
     283,   186,    97,    98,    24,    12,    51,    72,    73,    29,
     104,    31,   106,   270,    28,    22,    30,   107,   108,   271,
     277,    28,    42,    30,    44,    39,    46,    89,    65,   281,
      92,   283,    39,    69,     3,   105,   271,   222,   108,    59,
     107,   108,    11,   300,   270,    65,   281,    16,   283,     7,
     105,   277,   237,   108,    65,    24,   357,   314,   105,    17,
      29,   108,    31,   107,   108,    12,   367,   368,    23,    65,
      28,    91,   256,   257,   300,    22,    34,   360,    17,    37,
      57,    28,    40,    30,   269,   258,   259,    45,   314,    14,
      59,    14,    39,    51,    52,    53,    65,    55,    56,   250,
     251,   252,   253,   254,   255,   357,    91,    65,   360,    65,
      90,   412,    99,   100,   101,   367,   368,   260,   261,   262,
     263,    65,   357,   380,    89,   360,   311,    65,    65,    89,
      70,    89,   367,   368,   417,   320,    47,   322,    23,    80,
     102,   442,    21,    79,   329,   330,   331,    89,     3,    65,
     433,   452,    65,    57,   380,    89,    11,    89,    64,    89,
     412,    16,   463,   108,     4,   417,     6,    70,    68,    24,
      10,    47,   455,    28,    29,    89,    31,   412,    18,    68,
      20,   433,   417,    92,   369,   411,   371,    42,    71,    44,
     442,    46,   449,    71,    13,    28,    36,    25,   433,    30,
     452,    70,    92,   455,    59,     5,     7,   442,    48,   108,
      65,   463,   397,     8,    54,    89,    17,   452,    58,    65,
     455,   406,    89,   449,   409,    65,    22,    50,   463,    21,
      64,    19,    45,    34,    15,     7,    37,   422,    65,    40,
      19,    89,    64,   428,    45,    17,   431,     8,     8,    70,
      51,    52,    53,    92,    55,    71,    28,    68,     7,    53,
     445,     5,    34,    70,    65,    37,   451,     8,    40,   454,
      22,    14,    56,    45,     7,    90,    15,    68,    53,    51,
      52,    53,    55,    55,    17,    89,   214,    63,    89,   220,
      91,   120,   313,    65,   202,   212,   208,    30,    52,   309,
       7,    34,    37,   338,    37,   371,   273,    40,   333,     4,
      17,     6,    45,   248,    10,   203,   249,    89,    51,    52,
      53,    28,    55,    18,   136,    20,   335,    34,   137,    22,
      37,   310,    65,    40,   184,    -1,    -1,    -1,    45,     7,
      -1,    36,    -1,    -1,    51,    52,    53,    -1,    55,    17,
      -1,    -1,    -1,    48,    -1,    -1,    89,    -1,    65,    54,
      28,    -1,    -1,    58,    -1,     7,    34,    -1,    -1,    37,
      65,    -1,    40,    -1,    -1,    17,    -1,    45,    -1,    -1,
      -1,    -1,    89,    51,    52,    53,    28,    55,    -1,    27,
      -1,    -1,    34,    -1,    -1,    37,    -1,    65,    40,    -1,
      38,    -1,    -1,    45,     7,    -1,    -1,    -1,    -1,    51,
      52,    53,    -1,    55,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    65,    62,    63,    64,    65,    66,    67,
      -1,    34,    -1,    -1,    37,    27,    -1,    40,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    27,    38,    89,    51,    52,
      53,    89,    55,    91,    27,    93,    38,    39,    -1,    -1,
      98,    53,    65,    -1,    -1,    38,   104,    -1,   106,    -1,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    89,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    91,
      -1,    93,    27,    -1,    -1,    -1,    98,    -1,    -1,    91,
      -1,    93,   104,    38,   106,    -1,    98,    -1,    91,    27,
      93,    -1,   104,    -1,   106,    98,    -1,    -1,    -1,    -1,
      38,   104,    -1,   106,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      -1,     3,    -1,    -1,    -1,    -1,    91,    -1,    93,    11,
      -1,    -1,    -1,    98,    16,    -1,    -1,    -1,    -1,   104,
      -1,   106,    24,    91,    -1,    -1,    28,    29,    -1,    31,
      98,    -1,    -1,     3,    -1,    -1,   104,    -1,   106,    -1,
      42,    11,    44,     3,    46,    -1,    16,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    24,    -1,    16,    59,    28,    29,
      -1,    31,    -1,    65,    24,    -1,    -1,    -1,    28,    29,
       3,    31,    42,    -1,    44,    -1,    46,    -1,    11,    -1,
      -1,    -1,    42,    16,    44,    -1,    46,    -1,    -1,    59,
       4,    24,     6,    -1,    -1,    65,    29,    -1,    31,    59,
      -1,    -1,    -1,    -1,    18,    65,    20,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,     4,    -1,     6,    59,     8,    -1,    -1,
      -1,    -1,    65,    -1,    48,    49,    -1,    18,    -1,    20,
      54,    22,    -1,    -1,    58,    70,    -1,    61,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    36,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    48,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    58,   103,   104,
      -1,   106
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    43,   110,   111,   115,    65,    65,     0,    89,
      89,   116,   189,   112,   189,    14,    26,    32,    57,    59,
      65,   113,   117,   118,   119,   121,   140,   190,   191,   146,
     199,    35,    65,   114,   192,    35,    65,   141,    65,   191,
      90,   108,   118,    41,   118,   114,    69,    89,   108,   114,
      17,    91,   142,   145,   146,    23,     4,     6,    10,    18,
      20,    36,    48,    54,    58,   114,   120,   122,   123,   125,
     127,   128,    65,     7,    17,    34,    37,    40,    45,    51,
      52,    53,    55,    65,    89,   114,   147,   148,   150,   151,
     152,   154,   155,   159,   160,   161,   163,   164,   184,   200,
      32,    65,   114,     9,    89,   120,   198,   145,    57,     8,
      22,    50,   122,   129,   130,   132,   134,   120,    14,    14,
     125,    91,    70,    89,    12,    33,    47,   124,    27,    38,
      62,    63,    64,    66,    67,    91,    93,    98,   104,   106,
     152,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   181,   182,   183,   184,   185,    89,   170,   114,   170,
      65,   200,    65,    13,    14,    89,   162,   170,    89,   162,
      90,    91,    89,   200,    70,    81,    82,    83,    84,    85,
      86,    87,    88,   103,   104,   106,   149,    28,   147,   190,
      65,   143,   190,     3,    11,    16,    24,    29,    31,    42,
      44,    46,    60,    91,   119,   121,   135,   136,   137,   138,
     139,   195,   196,   197,    14,    65,   133,   194,   131,   190,
     193,    89,    70,   120,   120,    47,   124,   170,   170,   126,
     170,    47,   114,   152,   170,   174,   182,    53,   170,   186,
     208,    64,    65,   187,   188,   206,   207,    23,    80,    79,
      76,    77,    78,    94,    95,    96,    74,    75,    97,    98,
      99,   100,   101,   102,    72,    73,   180,    89,    89,    19,
      90,    30,   165,   166,   169,   205,    19,    90,   170,    65,
      89,    21,    89,   160,    65,   153,   170,   201,   202,    28,
      65,   170,   208,    64,   209,   170,    89,    89,    89,    92,
      90,   135,   195,   192,   195,   138,    28,   136,   140,   108,
     123,    70,    28,   108,    90,    28,   131,   170,   126,    47,
      68,    89,    68,   126,    92,   170,   160,   210,   105,   108,
      71,    71,   107,   108,   107,   108,    13,   156,   203,   172,
     173,   175,   175,   175,   175,   175,   175,   176,   176,   177,
     177,   178,   178,   178,   178,   170,   120,   200,    28,   169,
      25,   167,   168,   126,   120,    89,   162,   200,   200,    70,
      92,   108,     5,   105,   107,   108,    89,    49,    61,   120,
     144,   195,    28,    92,    28,     8,   139,   194,   170,    22,
     133,   120,    50,    89,   126,   170,   170,    21,   105,   160,
     170,   170,   170,   187,   188,   157,   204,    28,   156,    19,
      45,    91,   200,    15,    19,    89,    28,    56,    28,   170,
     153,    64,    70,   120,    28,     8,     8,    28,    70,    89,
      92,    68,   170,    71,    39,   158,   170,     7,   170,   114,
     126,    53,   200,     5,   170,    70,     8,    22,   170,    14,
     170,    56,   200,    90,    68,    92,    15,    28,   170,    89,
     120,   170,   170,   200,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   112,   112,   113,   113,   113,
     114,   114,   115,   116,   116,   117,   118,   118,   118,   119,
     119,   119,   120,   120,   121,   121,   122,   122,   122,   123,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   125,
     125,   125,   125,   126,   126,   127,   127,   128,   129,   129,
     129,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     134,   134,   135,   136,   136,   137,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   139,   139,   140,   141,   141,
     141,   141,   142,   143,   143,   143,   143,   144,   144,   145,
     146,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   151,   152,   153,   153,   154,   154,   155,
     156,   157,   158,   158,   158,   159,   159,   160,   160,   160,
     160,   160,   160,   160,   161,   161,   161,   161,   161,   161,
     162,   163,   164,   165,   165,   165,   166,   167,   168,   169,
     170,   171,   171,   172,   172,   173,   173,   174,   174,   174,
     174,   174,   174,   174,   175,   175,   175,   176,   176,   176,
     177,   177,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   182,   182,   182,   182,   183,   183,
     183,   183,   183,   183,   184,   184,   184,   184,   185,   185,
     185,   185,   186,   186,   186,   187,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     0,     4,     6,     6,
       1,     3,     4,     2,     3,     3,     1,     1,     1,     7,
       4,     6,     1,     1,     5,     4,     1,     1,     1,     5,
       3,     4,     2,     2,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     5,     8,     3,     3,     1,     1,
       1,     4,     4,     6,     6,     4,     3,     1,     6,     5,
       5,     4,     3,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     4,     3,     2,
       2,     1,     4,     6,     5,     4,     3,     1,     1,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     4,     1,     3,     8,     6,     6,
       4,     2,     3,     1,     1,     6,     4,     6,     4,     7,
       4,     6,     5,     2,     3,     2,     5,     2,     4,     3,
       2,     3,     5,     2,     1,     1,     2,     5,     2,     2,
       1,     3,     1,     3,     1,     2,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     1,     2,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     4,     4,     3,
       3,     3,     1,     4,     6,     3,     3,     2,     0,     3,
       1,     2,     1,     3,     1,     2,     1,     3,     1,     2,
       1,     1,     0,     3,     1,     3,     0,     2,     0,     2,
       1,     1,     0,     3,     1,     2,     1,     3,     0,     2,
       0,     3,     1,     3,     1,     3,     1,     3,     1,     2,
       1
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
                                                                { printf ("  programa -> definicion_programa\n"); }
#line 1745 "chusco.tab.c"
    break;

  case 3: /* programa: definicion_libreria  */
#line 31 "chusco.y"
                                                                { printf ("  programa -> definicion_libreria\n"); }
#line 1751 "chusco.tab.c"
    break;

  case 4: /* definicion_programa: PROGRAMA IDENTIFICADOR ';' codigo_programa  */
#line 35 "chusco.y"
                                                                { printf ("  definicion_programa -> PROGRAMA IDENTIFICADOR ; codigo_programa\n"); }
#line 1757 "chusco.tab.c"
    break;

  case 5: /* codigo_programa: libreria_ast cuerpo_subprograma  */
#line 39 "chusco.y"
                                                                { printf ("  codigo_programa -> libreria_ast cuerpo_subprograma\n"); }
#line 1763 "chusco.tab.c"
    break;

  case 6: /* codigo_programa: %empty  */
#line 40 "chusco.y"
                                                                { printf ("  codigo_programa -> epsilon\n"); }
#line 1769 "chusco.tab.c"
    break;

  case 7: /* libreria: IMPORTAR LIBRERIA nombre ';'  */
#line 44 "chusco.y"
                                                                { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
#line 1775 "chusco.tab.c"
    break;

  case 8: /* libreria: IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ';'  */
#line 45 "chusco.y"
                                                                { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ;\n"); }
#line 1781 "chusco.tab.c"
    break;

  case 9: /* libreria: DE LIBRERIA nombre IMPORTAR identificador_rep_comas ';'  */
#line 46 "chusco.y"
                                                                { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR identificador_rep_comas ;\n"); }
#line 1787 "chusco.tab.c"
    break;

  case 10: /* nombre: IDENTIFICADOR  */
#line 50 "chusco.y"
                                                                { printf ("  nombre -> IDENTIFICADOR\n"); }
#line 1793 "chusco.tab.c"
    break;

  case 11: /* nombre: nombre CUATRO_PUNTOS IDENTIFICADOR  */
#line 51 "chusco.y"
                                                                { printf ("  nombre -> :: IDENTIFICADOR\n"); }
#line 1799 "chusco.tab.c"
    break;

  case 12: /* definicion_libreria: LIBRERIA IDENTIFICADOR ';' codigo_libreria  */
#line 55 "chusco.y"
                                                                { printf ("  definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
#line 1805 "chusco.tab.c"
    break;

  case 13: /* codigo_libreria: libreria_ast declaracion_rep  */
#line 59 "chusco.y"
                                                                { printf ("  codigo_libreria -> libreria_ast declaracion_rep\n"); }
#line 1811 "chusco.tab.c"
    break;

  case 14: /* codigo_libreria: libreria_ast exportaciones declaracion_rep  */
#line 60 "chusco.y"
                                                                { printf ("  codigo_libreria -> libreria_ast exportaciones declaracion_rep\n"); }
#line 1817 "chusco.tab.c"
    break;

  case 15: /* exportaciones: EXPORTAR nombre_rep_comas ';'  */
#line 64 "chusco.y"
                                                                { printf ("  exportaciones -> EXPORTAR nombre_rep_comas ;\n"); }
#line 1823 "chusco.tab.c"
    break;

  case 16: /* declaracion: declaracion_objeto  */
#line 68 "chusco.y"
                                                                { printf ("  declaracion -> declaracion_objeto\n"); }
#line 1829 "chusco.tab.c"
    break;

  case 17: /* declaracion: declaracion_tipo  */
#line 69 "chusco.y"
                                                                { printf ("  declaracion -> declaracion_tipo\n"); }
#line 1835 "chusco.tab.c"
    break;

  case 18: /* declaracion: declaracion_subprograma  */
#line 70 "chusco.y"
                                                                { printf ("  declaracion -> declaracion_subprograma\n"); }
#line 1841 "chusco.tab.c"
    break;

  case 19: /* declaracion_objeto: identificador_rep_comas ':' CONSTANTE especificacion_tipo ASIGNACION expresion ';'  */
#line 80 "chusco.y"
                                                                                                    { printf ("  declaracion_objeto -> identificador_rep_comas : CONSTANTE especificacion_tipo := expresion ;\n"); }
#line 1847 "chusco.tab.c"
    break;

  case 20: /* declaracion_objeto: identificador_rep_comas ':' especificacion_tipo ';'  */
#line 81 "chusco.y"
                                                                                                    { printf ("  declaracion_objeto -> identificador_rep_comas : especificacion_tipo ;\n"); }
#line 1853 "chusco.tab.c"
    break;

  case 21: /* declaracion_objeto: identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion ';'  */
#line 82 "chusco.y"
                                                                                                    { printf ("  declaracion_objeto -> identificador_rep_comas : especificacion_tipo := expresion ;\n"); }
#line 1859 "chusco.tab.c"
    break;

  case 22: /* especificacion_tipo: nombre  */
#line 86 "chusco.y"
                                                                                                    { printf ("  especificacion_tipo -> nombre\n"); }
#line 1865 "chusco.tab.c"
    break;

  case 23: /* especificacion_tipo: tipo_no_estructurado  */
#line 87 "chusco.y"
                                                                                                    { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1871 "chusco.tab.c"
    break;

  case 24: /* declaracion_tipo: TIPO IDENTIFICADOR ES tipo_no_estructurado ';'  */
#line 97 "chusco.y"
                                                                                                      { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1877 "chusco.tab.c"
    break;

  case 25: /* declaracion_tipo: TIPO IDENTIFICADOR ES tipo_estructurado  */
#line 98 "chusco.y"
                                                                                                      { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
#line 1883 "chusco.tab.c"
    break;

  case 29: /* tipo_escalar: SIGNO tipo_basico longitud RANGO rango  */
#line 108 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> SIGNO tipo_basico longitud RANGO rango\n"); }
#line 1889 "chusco.tab.c"
    break;

  case 30: /* tipo_escalar: SIGNO tipo_basico longitud  */
#line 109 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> SIGNO tipo_basico longitud\n"); }
#line 1895 "chusco.tab.c"
    break;

  case 31: /* tipo_escalar: SIGNO tipo_basico RANGO rango  */
#line 110 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> SIGNO tipo_basico RANGO rango\n"); }
#line 1901 "chusco.tab.c"
    break;

  case 33: /* tipo_escalar: tipo_basico longitud  */
#line 112 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> tipo_basico longitud\n"); }
#line 1907 "chusco.tab.c"
    break;

  case 35: /* tipo_escalar: tipo_basico RANGO rango  */
#line 114 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> tipo_basico RANGO rango\n"); }
#line 1913 "chusco.tab.c"
    break;

  case 36: /* tipo_escalar: tipo_basico  */
#line 115 "chusco.y"
                                                                                                      { printf ("  tipo_escalar -> tipo_basico\n"); }
#line 1919 "chusco.tab.c"
    break;

  case 37: /* longitud: CORTO  */
#line 119 "chusco.y"
                                                                                                     { printf ("  longitud -> CORTO\n"); }
#line 1925 "chusco.tab.c"
    break;

  case 38: /* longitud: LARGO  */
#line 120 "chusco.y"
                                                                                                      { printf ("  longitud -> LARGO\n"); }
#line 1931 "chusco.tab.c"
    break;

  case 39: /* tipo_basico: BOOLEANO  */
#line 124 "chusco.y"
                                                                                                     { printf ("  tipo_basico -> BOOLEANO\n"); }
#line 1937 "chusco.tab.c"
    break;

  case 40: /* tipo_basico: CARACTER  */
#line 125 "chusco.y"
                                                                                                     { printf ("  tipo_basico -> CARACTER\n"); }
#line 1943 "chusco.tab.c"
    break;

  case 41: /* tipo_basico: ENTERO  */
#line 126 "chusco.y"
                                                                                                     { printf ("  tipo_basico -> ENTERO\n"); }
#line 1949 "chusco.tab.c"
    break;

  case 42: /* tipo_basico: REAL  */
#line 127 "chusco.y"
                                                                                                     { printf ("  tipo_basico -> REAL\n"); }
#line 1955 "chusco.tab.c"
    break;

  case 43: /* rango: expresion DOS_PUNTOS expresion  */
#line 131 "chusco.y"
                                                                                                     { printf ("  rango -> expresion .. expresion\n"); }
#line 1961 "chusco.tab.c"
    break;

  case 44: /* rango: expresion DOS_PUNTOS expresion DOS_PUNTOS expresion  */
#line 132 "chusco.y"
                                                                                                     { printf ("  rango -> expresion .. expresion .. expresion\n"); }
#line 1967 "chusco.tab.c"
    break;

  case 45: /* tipo_tabla: TABLA '(' expresion DOS_PUNTOS expresion ')' DE especificacion_tipo  */
#line 136 "chusco.y"
                                                                                                       { printf ("  tipo_tabla -> TABLA ( expresion .. expresion ) DE especificacion_tipo\n"); }
#line 1973 "chusco.tab.c"
    break;

  case 46: /* tipo_tabla: LISTA DE especificacion_tipo  */
#line 137 "chusco.y"
                                                                                                      { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
#line 1979 "chusco.tab.c"
    break;

  case 47: /* tipo_diccionario: DICCIONARIO DE especificacion_tipo  */
#line 141 "chusco.y"
                                                                                                      { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
#line 1985 "chusco.tab.c"
    break;

  case 48: /* tipo_estructurado: tipo_registro  */
#line 145 "chusco.y"
                                                                                                     { printf ("  tipo_estructurado -> tipo_registro\n"); }
#line 1991 "chusco.tab.c"
    break;

  case 49: /* tipo_estructurado: tipo_enumerado  */
#line 146 "chusco.y"
                                                                                                    { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
#line 1997 "chusco.tab.c"
    break;

  case 50: /* tipo_estructurado: clase  */
#line 147 "chusco.y"
                                                                                                    { printf ("  tipo_estructurado -> clase\n"); }
#line 2003 "chusco.tab.c"
    break;

  case 51: /* tipo_registro: REGISTRO campo_rep FIN REGISTRO  */
#line 151 "chusco.y"
                                                                                                     { printf ("  tipo_registro -> REGISTRO campo_rep FIN REGISTRO\n"); }
#line 2009 "chusco.tab.c"
    break;

  case 52: /* campo: identificador_rep_comas ':' especificacion_tipo ';'  */
#line 155 "chusco.y"
                                                                                                            { printf ("  campo -> identificador_rep_comas : especificacion_tipo ;\n"); }
#line 2015 "chusco.tab.c"
    break;

  case 53: /* campo: identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion ';'  */
#line 156 "chusco.y"
                                                                                                       { printf ("  campo -> identificador_rep_comas : especificacion_tipo := expresion ;\n"); }
#line 2021 "chusco.tab.c"
    break;

  case 54: /* tipo_enumerado: ENUMERACION DE tipo_escalar elemento_enumeracion_rep_comas FIN ENUMERACION  */
#line 160 "chusco.y"
                                                                                                         { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar elemento_enumeracion_rep_comas FIN ENUMERACION\n"); }
#line 2027 "chusco.tab.c"
    break;

  case 55: /* tipo_enumerado: ENUMERACION elemento_enumeracion_rep_comas FIN ENUMERACION  */
#line 161 "chusco.y"
                                                                                                              { printf ("  tipo_enumerado -> ENUMERACION elemento_enumeracion_rep_comas FIN ENUMERACION\n"); }
#line 2033 "chusco.tab.c"
    break;

  case 56: /* elemento_enumeracion: IDENTIFICADOR ASIGNACION expresion  */
#line 165 "chusco.y"
                                                                                                     { printf ("  elemento_enumeracion -> IDENTIFICADOR := expresion\n"); }
#line 2039 "chusco.tab.c"
    break;

  case 57: /* elemento_enumeracion: IDENTIFICADOR  */
#line 166 "chusco.y"
                                                                                                        { printf ("  elemento_enumeracion -> IDENTIFICADOR\n"); }
#line 2045 "chusco.tab.c"
    break;

  case 58: /* clase: CLASE ULTIMA superclases declaracion_componente_rep FIN CLASE  */
#line 176 "chusco.y"
                                                                                               { printf ("  clase -> CLASE ULTIMA superclases declaracion_componente_rep FIN CLASE\n"); }
#line 2051 "chusco.tab.c"
    break;

  case 59: /* clase: CLASE superclases declaracion_componente_rep FIN CLASE  */
#line 177 "chusco.y"
                                                                                                      { printf ("  clase -> CLASE superclases declaracion_componente_rep FIN CLASE\n"); }
#line 2057 "chusco.tab.c"
    break;

  case 60: /* clase: CLASE ULTIMA declaracion_componente_rep FIN CLASE  */
#line 178 "chusco.y"
                                                                                                       { printf ("  clase -> CLASE ULTIMA declaracion_componente_rep FIN CLASE\n"); }
#line 2063 "chusco.tab.c"
    break;

  case 61: /* clase: CLASE declaracion_componente_rep FIN CLASE  */
#line 179 "chusco.y"
                                                                                                      { printf ("  clase -> CLASE declaracion_componente_rep FIN CLASE\n"); }
#line 2069 "chusco.tab.c"
    break;

  case 62: /* superclases: '(' nombre_rep_comas ')'  */
#line 183 "chusco.y"
                                                                                                   { printf ("  superclases -> ( nombre_rep_comas )\n"); }
#line 2075 "chusco.tab.c"
    break;

  case 63: /* declaracion_componente: visibilidad componente  */
#line 187 "chusco.y"
                                                                                                   { printf ("  declaracion_componente -> visibilidad componente\n"); }
#line 2081 "chusco.tab.c"
    break;

  case 64: /* declaracion_componente: componente  */
#line 188 "chusco.y"
                                                                                                   { printf ("  declaracion_componente -> componente\n"); }
#line 2087 "chusco.tab.c"
    break;

  case 65: /* visibilidad: PUBLICO  */
#line 192 "chusco.y"
                                                                                                   { printf ("  visibilidad -> PUBLICO\n"); }
#line 2093 "chusco.tab.c"
    break;

  case 66: /* visibilidad: PROTEGIDO  */
#line 193 "chusco.y"
                                                                                                   { printf ("  visibilidad -> PROTEGIDO\n"); }
#line 2099 "chusco.tab.c"
    break;

  case 67: /* visibilidad: PRIVADO  */
#line 194 "chusco.y"
                                                                                                   { printf ("  visibilidad -> PRIVADO\n"); }
#line 2105 "chusco.tab.c"
    break;

  case 68: /* componente: declaracion_tipo  */
#line 198 "chusco.y"
                                                                                                   { printf ("  componente -> declaracion_tipo\n"); }
#line 2111 "chusco.tab.c"
    break;

  case 69: /* componente: declaracion_objeto  */
#line 199 "chusco.y"
                                                                                                   { printf ("  componente -> declaracion_objeto\n"); }
#line 2117 "chusco.tab.c"
    break;

  case 70: /* componente: modificador_ast_comas_1 declaracion_subprograma  */
#line 200 "chusco.y"
                                                                                                     { printf ("  componente -> modificador_ast_comas declaracion_subprograma\n"); }
#line 2123 "chusco.tab.c"
    break;

  case 71: /* modificador: CONSTRUCTOR  */
#line 204 "chusco.y"
                                                                                                   { printf ("  modificador -> CONSTRUCTOR\n"); }
#line 2129 "chusco.tab.c"
    break;

  case 72: /* modificador: DESTRUCTOR  */
#line 205 "chusco.y"
                                                                                                   { printf ("  modificador -> DESTRUCTOR\n"); }
#line 2135 "chusco.tab.c"
    break;

  case 73: /* modificador: GENERICO  */
#line 206 "chusco.y"
                                                                                                   { printf ("  modificador -> GENERICO\n"); }
#line 2141 "chusco.tab.c"
    break;

  case 74: /* modificador: ABSTRACTO  */
#line 207 "chusco.y"
                                                                                                   { printf ("  modificador -> ABSTRACTO\n"); }
#line 2147 "chusco.tab.c"
    break;

  case 75: /* modificador: ESPECIFICO  */
#line 208 "chusco.y"
                                                                                                   { printf ("  modificador -> ESPECIFICO\n"); }
#line 2153 "chusco.tab.c"
    break;

  case 76: /* modificador: FINAL  */
#line 209 "chusco.y"
                                                                                                   { printf ("  modificador -> FINAL\n"); }
#line 2159 "chusco.tab.c"
    break;

  case 77: /* declaracion_subprograma: SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA  */
#line 220 "chusco.y"
                                                                                                   { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA\n"); }
#line 2165 "chusco.tab.c"
    break;

  case 78: /* cabecera_subprograma: IDENTIFICADOR parametrizacion tipo_resultado  */
#line 224 "chusco.y"
                                                                                                    { printf ("  cabecera_subprograma -> IDENTIFICADOR parametrizacion tipo_resultado\n"); }
#line 2171 "chusco.tab.c"
    break;

  case 79: /* cabecera_subprograma: IDENTIFICADOR tipo_resultado  */
#line 225 "chusco.y"
                                                                                                    { printf ("  cabecera_subprograma -> IDENTIFICADOR tipo_resultado\n"); }
#line 2177 "chusco.tab.c"
    break;

  case 80: /* cabecera_subprograma: IDENTIFICADOR parametrizacion  */
#line 226 "chusco.y"
                                                                                                    { printf ("  cabecera_subprograma -> IDENTIFICADOR parametrizacion\n"); }
#line 2183 "chusco.tab.c"
    break;

  case 81: /* cabecera_subprograma: IDENTIFICADOR  */
#line 227 "chusco.y"
                                                                                                    { printf ("  cabecera_subprograma -> IDENTIFICADOR\n"); }
#line 2189 "chusco.tab.c"
    break;

  case 82: /* parametrizacion: '(' declaracion_parametros_ast_puntocoma declaracion_parametros ')'  */
#line 231 "chusco.y"
                                                                                                    { printf ("  parametrizacion -> ( declaracion_parametros_ast_puntocoma declaracion_parametros )\n"); }
#line 2195 "chusco.tab.c"
    break;

  case 83: /* declaracion_parametros: identificador_rep_comas ':' modo especificacion_tipo ASIGNACION expresion  */
#line 235 "chusco.y"
                                                                                                    { printf ("  declaracion_parametros -> identificador_rep_comas : modo especificacion_tipo := expresion\n"); }
#line 2201 "chusco.tab.c"
    break;

  case 84: /* declaracion_parametros: identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion  */
#line 236 "chusco.y"
                                                                                                     { printf ("  declaracion_parametros -> identificador_rep_comas : especificacion_tipo := expresion\n"); }
#line 2207 "chusco.tab.c"
    break;

  case 85: /* declaracion_parametros: identificador_rep_comas ':' modo especificacion_tipo  */
#line 237 "chusco.y"
                                                                                                     { printf ("  declaracion_parametros -> identificador_rep_comas : modo especificacion_tipo\n"); }
#line 2213 "chusco.tab.c"
    break;

  case 86: /* declaracion_parametros: identificador_rep_comas ':' especificacion_tipo  */
#line 238 "chusco.y"
                                                                                                     { printf ("  declaracion_parametros -> identificador_rep_comas : especificacion_tipo\n"); }
#line 2219 "chusco.tab.c"
    break;

  case 87: /* modo: VALOR  */
#line 242 "chusco.y"
                                                                                                    { printf ("  modo -> VALOR\n"); }
#line 2225 "chusco.tab.c"
    break;

  case 88: /* modo: REFERENCIA  */
#line 243 "chusco.y"
                                                                                                    { printf ("  modo -> REFERENCIA\n"); }
#line 2231 "chusco.tab.c"
    break;

  case 89: /* tipo_resultado: DEVOLVER especificacion_tipo  */
#line 247 "chusco.y"
                                                                                                   { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2237 "chusco.tab.c"
    break;

  case 90: /* cuerpo_subprograma: declaracion_ast PRINCIPIO instruccion_rep FIN  */
#line 251 "chusco.y"
                                                                                                    { printf ("  cuerpo_subprograma -> declaracion_ast PRINCIPIO instruccion_rep FIN\n"); }
#line 2243 "chusco.tab.c"
    break;

  case 91: /* instruccion: instruccion_asignacion  */
#line 260 "chusco.y"
                                                                                                       { printf ("  instruccion -> instruccion_asignacion\n"); }
#line 2249 "chusco.tab.c"
    break;

  case 92: /* instruccion: instruccion_devolver  */
#line 261 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_devolver\n"); }
#line 2255 "chusco.tab.c"
    break;

  case 93: /* instruccion: instruccion_llamada  */
#line 262 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_llamada\n"); }
#line 2261 "chusco.tab.c"
    break;

  case 94: /* instruccion: instruccion_si  */
#line 263 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_si\n"); }
#line 2267 "chusco.tab.c"
    break;

  case 95: /* instruccion: instruccion_casos  */
#line 264 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_casos\n"); }
#line 2273 "chusco.tab.c"
    break;

  case 96: /* instruccion: instruccion_bucle  */
#line 265 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_bucle\n"); }
#line 2279 "chusco.tab.c"
    break;

  case 97: /* instruccion: instruccion_interrupcion  */
#line 266 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_interrupcion\n"); }
#line 2285 "chusco.tab.c"
    break;

  case 98: /* instruccion: instruccion_lanzamiento_excepcion  */
#line 267 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2291 "chusco.tab.c"
    break;

  case 99: /* instruccion: instruccion_captura_excepcion  */
#line 268 "chusco.y"
                                                                                                      { printf ("  instruccion -> instruccion_captura_excepcion\n"); }
#line 2297 "chusco.tab.c"
    break;

  case 100: /* instruccion: ';'  */
#line 269 "chusco.y"
                                                                                                       { printf ("  instruccion -> ;\n"); }
#line 2303 "chusco.tab.c"
    break;

  case 101: /* instruccion_asignacion: objeto op_asignacion expresion ';'  */
#line 273 "chusco.y"
                                                                                                      { printf ("  instruccion_asignacion -> objeto op_asignacion expresion ;\n"); }
#line 2309 "chusco.tab.c"
    break;

  case 102: /* op_asignacion: ASIGNACION  */
#line 277 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :=\n"); }
#line 2315 "chusco.tab.c"
    break;

  case 103: /* op_asignacion: ASIG_SUMA  */
#line 278 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :+\n"); }
#line 2321 "chusco.tab.c"
    break;

  case 104: /* op_asignacion: ASIG_RESTA  */
#line 279 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :-\n"); }
#line 2327 "chusco.tab.c"
    break;

  case 105: /* op_asignacion: ASIG_MULT  */
#line 280 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :*\n"); }
#line 2333 "chusco.tab.c"
    break;

  case 106: /* op_asignacion: ASIG_DIV  */
#line 281 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :/\n"); }
#line 2339 "chusco.tab.c"
    break;

  case 107: /* op_asignacion: ASIG_RESTO  */
#line 282 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :\\\n"); }
#line 2345 "chusco.tab.c"
    break;

  case 108: /* op_asignacion: ASIG_POT  */
#line 283 "chusco.y"
                                                                                                       { printf("  op_asignacion -> :^\n"); }
#line 2351 "chusco.tab.c"
    break;

  case 109: /* op_asignacion: ASIG_DESPI  */
#line 284 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :<\n"); }
#line 2357 "chusco.tab.c"
    break;

  case 110: /* op_asignacion: ASIG_DESPD  */
#line 285 "chusco.y"
                                                                                                       { printf ("  op_asignacion -> :>\n"); }
#line 2363 "chusco.tab.c"
    break;

  case 111: /* instruccion_devolver: DEVOLVER expresion ';'  */
#line 289 "chusco.y"
                                                                        {printf ( " instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2369 "chusco.tab.c"
    break;

  case 112: /* instruccion_devolver: DEVOLVER ';'  */
#line 290 "chusco.y"
                                                                {printf ( " instruccion_devolver -> DEVOLVER ;\n"); }
#line 2375 "chusco.tab.c"
    break;

  case 113: /* instruccion_llamada: llamada_subprograma ';'  */
#line 295 "chusco.y"
                                                                                                      { printf ("  instruccion_llamada -> llamada_subprograma ;\n"); }
#line 2381 "chusco.tab.c"
    break;

  case 114: /* llamada_subprograma: nombre '(' definicion_parametro_ast_comas_1 ')'  */
#line 299 "chusco.y"
                                                                                                        { printf ("  llamada_subprograma -> nombre ( definicion_parametro_ast_comas )\n"); }
#line 2387 "chusco.tab.c"
    break;

  case 115: /* definicion_parametro: expresion  */
#line 303 "chusco.y"
                                                                                                      { printf ("  definicion_parametro -> expresion\n"); }
#line 2393 "chusco.tab.c"
    break;

  case 116: /* definicion_parametro: IDENTIFICADOR ASIGNACION expresion  */
#line 304 "chusco.y"
                                                                                                      { printf ("  definicion_parametro -> IDENTIFICADOR := expresion\n"); }
#line 2399 "chusco.tab.c"
    break;

  case 117: /* instruccion_si: SI expresion ENTONCES instruccion_rep SINO instruccion_rep FIN SI  */
#line 308 "chusco.y"
                                                                                                       { printf ("  instruccion_si -> SI expresion ENTONCES instruccion_rep SINO instruccion_rep FIN SI\n"); }
#line 2405 "chusco.tab.c"
    break;

  case 118: /* instruccion_si: SI expresion ENTONCES instruccion_rep FIN SI  */
#line 309 "chusco.y"
                                                                                                      { printf ("  instruccion_si -> SI expresion ENTONCES instruccion_rep FIN SI\n"); }
#line 2411 "chusco.tab.c"
    break;

  case 119: /* instruccion_casos: CASOS expresion ES caso_rep FIN CASOS  */
#line 313 "chusco.y"
                                                                                                      { printf ("  instruccion_casos -> CASOS expresion ES caso_rep FIN CASOS\n"); }
#line 2417 "chusco.tab.c"
    break;

  case 120: /* caso: CUANDO entradas FLECHA instruccion_rep  */
#line 317 "chusco.y"
                                                                                                      { printf ("  caso -> CUANDO entradas => instruccion_rep\n"); }
#line 2423 "chusco.tab.c"
    break;

  case 121: /* entradas: entrada_rep_dospuntos entrada  */
#line 321 "chusco.y"
                                                                                                      { printf ("  entradas -> entrada_rep_dospuntos entrada\n"); }
#line 2429 "chusco.tab.c"
    break;

  case 122: /* entrada: expresion DOS_PUNTOS expresion  */
#line 325 "chusco.y"
                                                                                                      { printf ("  entrada -> expresion .. expresion\n"); }
#line 2435 "chusco.tab.c"
    break;

  case 123: /* entrada: expresion  */
#line 326 "chusco.y"
                                                                                                      { printf ("  entrada -> expresion\n"); }
#line 2441 "chusco.tab.c"
    break;

  case 124: /* entrada: OTRO  */
#line 327 "chusco.y"
                                                                                                      { printf ("  entrada -> OTRO\n"); }
#line 2447 "chusco.tab.c"
    break;

  case 125: /* instruccion_bucle: IDENTIFICADOR ':' clausula_iteracion instruccion_rep FIN BUCLE  */
#line 331 "chusco.y"
                                                                                                       { printf ("  instruccion_bucle -> IDENTIFICADOR : clausula_iteracion instruccion_rep FIN BUCLE\n"); }
#line 2453 "chusco.tab.c"
    break;

  case 126: /* instruccion_bucle: clausula_iteracion instruccion_rep FIN BUCLE  */
#line 332 "chusco.y"
                                                                                                      { printf ("  instruccion_bucle -> clausula_iteracion instruccion_rep FIN BUCLE\n"); }
#line 2459 "chusco.tab.c"
    break;

  case 127: /* clausula_iteracion: PARA IDENTIFICADOR ':' especificacion_tipo EN expresion  */
#line 336 "chusco.y"
                                                                                                       { printf ("  clausula_iteracion -> PARA IDENTIFICADOR : especificacion_tipo EN expresion\n"); }
#line 2465 "chusco.tab.c"
    break;

  case 128: /* clausula_iteracion: PARA IDENTIFICADOR EN expresion  */
#line 337 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> PARA IDENTIFICADOR EN expresion\n"); }
#line 2471 "chusco.tab.c"
    break;

  case 129: /* clausula_iteracion: REPETIR IDENTIFICADOR ':' especificacion_tipo EN rango DESCENDENTE  */
#line 338 "chusco.y"
                                                                                                        { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR : especificacion_tipo EN rango DESCENDENTE\n"); }
#line 2477 "chusco.tab.c"
    break;

  case 130: /* clausula_iteracion: REPETIR IDENTIFICADOR EN rango  */
#line 339 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR EN rango\n"); }
#line 2483 "chusco.tab.c"
    break;

  case 131: /* clausula_iteracion: REPETIR IDENTIFICADOR ':' especificacion_tipo EN rango  */
#line 340 "chusco.y"
                                                                                                       { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR : especificacion_tipo EN rango\n"); }
#line 2489 "chusco.tab.c"
    break;

  case 132: /* clausula_iteracion: REPETIR IDENTIFICADOR EN rango DESCENDENTE  */
#line 341 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR EN rango DESCENDENTE\n"); }
#line 2495 "chusco.tab.c"
    break;

  case 133: /* clausula_iteracion: MIENTRAS expresion  */
#line 342 "chusco.y"
                                                                                                      { printf ("  clausula_iteracion -> MIENTRAS expresion\n"); }
#line 2501 "chusco.tab.c"
    break;

  case 134: /* instruccion_interrupcion: SIGUIENTE cuando ';'  */
#line 346 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SIGUIENTE cuando ;\n"); }
#line 2507 "chusco.tab.c"
    break;

  case 135: /* instruccion_interrupcion: SIGUIENTE ';'  */
#line 347 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SIGUIENTE ;\n"); }
#line 2513 "chusco.tab.c"
    break;

  case 136: /* instruccion_interrupcion: SALIR DE IDENTIFICADOR cuando ';'  */
#line 348 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SALIR DE IDENTIFICADOR cuando ;\n"); }
#line 2519 "chusco.tab.c"
    break;

  case 137: /* instruccion_interrupcion: SALIR ';'  */
#line 349 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SALIR ;\n"); }
#line 2525 "chusco.tab.c"
    break;

  case 138: /* instruccion_interrupcion: SALIR DE IDENTIFICADOR ';'  */
#line 350 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SALIR DE IDENTIFICADOR ;\n"); }
#line 2531 "chusco.tab.c"
    break;

  case 139: /* instruccion_interrupcion: SALIR cuando ';'  */
#line 351 "chusco.y"
                                                                                                      { printf ("  instruccion_interrupcion -> SALIR cuando ;\n"); }
#line 2537 "chusco.tab.c"
    break;

  case 140: /* cuando: CUANDO expresion  */
#line 355 "chusco.y"
                                                                                                      { printf ("  cuando -> CUANDO expresion\n"); }
#line 2543 "chusco.tab.c"
    break;

  case 141: /* instruccion_lanzamiento_excepcion: LANZA nombre ';'  */
#line 359 "chusco.y"
                                                                                                      { printf ("  instruccion_lanzamiento_excepcion -> LANZA nombre ;\n"); }
#line 2549 "chusco.tab.c"
    break;

  case 142: /* instruccion_captura_excepcion: PRUEBA instruccion_rep clausulas FIN PRUEBA  */
#line 363 "chusco.y"
                                                                                                      { printf ("  instruccion_captura_excepcion -> PRUEBA instruccion_rep clausulas FIN PRUEBA\n"); }
#line 2555 "chusco.tab.c"
    break;

  case 143: /* clausulas: clausulas_excepcion clausula_finalmente  */
#line 367 "chusco.y"
                                                                                                      { printf ("  clausulas -> clausulas_excepcion clausula_finalmente\n"); }
#line 2561 "chusco.tab.c"
    break;

  case 144: /* clausulas: clausulas_excepcion  */
#line 368 "chusco.y"
                                                                                                      { printf ("  clausulas -> clausulas_excepcion\n"); }
#line 2567 "chusco.tab.c"
    break;

  case 145: /* clausulas: clausula_finalmente  */
#line 369 "chusco.y"
                                                                                                      { printf ("  clausulas -> clausula_finalmente\n"); }
#line 2573 "chusco.tab.c"
    break;

  case 146: /* clausulas_excepcion: clausulas_excepcion_especifica_ast clausula_excepcion_general  */
#line 373 "chusco.y"
                                                                                                       { printf ("  clausulas_excepcion -> clausulas_excepcion_especifica_ast clausula_excepcion_general\n"); }
#line 2579 "chusco.tab.c"
    break;

  case 147: /* clausula_excepcion_especifica: EXCEPCION '(' nombre ')' instruccion_rep  */
#line 377 "chusco.y"
                                                                                                      { printf ("  clausula_excepcion_especifica -> EXCEPCION ( nombre ) instruccion_rep\n"); }
#line 2585 "chusco.tab.c"
    break;

  case 148: /* clausula_excepcion_general: EXCEPCION instruccion_rep  */
#line 381 "chusco.y"
                                                                                                     { printf ("  clausula_excepcion_general -> EXCEPCION instruccion_rep\n"); }
#line 2591 "chusco.tab.c"
    break;

  case 149: /* clausula_finalmente: FINALMENTE instruccion_rep  */
#line 385 "chusco.y"
                                                                                                     { printf ("  clausula_finalmente -> FINALMENTE instruccion_rep\n"); }
#line 2597 "chusco.tab.c"
    break;

  case 150: /* expresion: expresion_OR  */
#line 394 "chusco.y"
                                                                                {printf ( "expresion -> expresion_OR \n"); }
#line 2603 "chusco.tab.c"
    break;

  case 151: /* expresion_OR: expresion_OR OR expresion_AND  */
#line 398 "chusco.y"
                                                                                {printf ( "expresion_OR -> expresion_OR OR expresion_AND\n"); }
#line 2609 "chusco.tab.c"
    break;

  case 152: /* expresion_OR: expresion_AND  */
#line 399 "chusco.y"
                                                                                {printf ( "expresion_OR -> expresion_AND\n"); }
#line 2615 "chusco.tab.c"
    break;

  case 153: /* expresion_AND: expresion_AND AND expresion_neg  */
#line 403 "chusco.y"
                                                                                        {printf ( "expresion_AND -> expresion_AND AND expresion_neg\n"); }
#line 2621 "chusco.tab.c"
    break;

  case 154: /* expresion_AND: expresion_neg  */
#line 404 "chusco.y"
                                                                                        {printf ( "expresion_AND -> expresion_neg\n"); }
#line 2627 "chusco.tab.c"
    break;

  case 155: /* expresion_neg: '~' operador_relacional  */
#line 408 "chusco.y"
                                                                                {printf ( "expresion_neg -> ~ operador_relacional\n"); }
#line 2633 "chusco.tab.c"
    break;

  case 156: /* expresion_neg: operador_relacional  */
#line 409 "chusco.y"
                                                                                {printf ( "expresion_neg -> operador_relacional\n"); }
#line 2639 "chusco.tab.c"
    break;

  case 157: /* operador_relacional: operador_relacional '<' operador_desplazamiento  */
#line 413 "chusco.y"
                                                                        {printf ( "operador_relacional-> operador_relacionales < operador_desplazamiento\n"); }
#line 2645 "chusco.tab.c"
    break;

  case 158: /* operador_relacional: operador_relacional '>' operador_desplazamiento  */
#line 414 "chusco.y"
                                                                {printf ( "operador_relacional-> operador_relacionales > operador_desplazamiento\n"); }
#line 2651 "chusco.tab.c"
    break;

  case 159: /* operador_relacional: operador_relacional LEQ operador_desplazamiento  */
#line 415 "chusco.y"
                                                                {printf ( "operador_relacional-> operador_relacionales <= operador_desplazamiento\n"); }
#line 2657 "chusco.tab.c"
    break;

  case 160: /* operador_relacional: operador_relacional GEQ operador_desplazamiento  */
#line 416 "chusco.y"
                                                                {printf ( "operador_relacional-> operador_relacionales >= operador_desplazamiento\n"); }
#line 2663 "chusco.tab.c"
    break;

  case 161: /* operador_relacional: operador_relacional '=' operador_desplazamiento  */
#line 417 "chusco.y"
                                                                {printf ( "operador_relacional-> operador_relacionales = operador_desplazamiento\n"); }
#line 2669 "chusco.tab.c"
    break;

  case 162: /* operador_relacional: operador_relacional NEQ operador_desplazamiento  */
#line 418 "chusco.y"
                                                                {printf ( "operador_relacional-> operador_relacionales ~= operador_desplazamiento\n"); }
#line 2675 "chusco.tab.c"
    break;

  case 163: /* operador_relacional: operador_desplazamiento  */
#line 419 "chusco.y"
                                                                {printf ( "operador_relacional-> operador_desplazamiento\n"); }
#line 2681 "chusco.tab.c"
    break;

  case 164: /* operador_desplazamiento: operador_desplazamiento DESPI expresion_aritmetica_  */
#line 424 "chusco.y"
                                                                        {printf ( "expresion_desplazamiento-> operador_desplazamiento <- expresion_aritmetica_\n"); }
#line 2687 "chusco.tab.c"
    break;

  case 165: /* operador_desplazamiento: operador_desplazamiento DESPD expresion_aritmetica_  */
#line 425 "chusco.y"
                                                                        {printf ( "expresion_desplazamiento-> operador_desplazamiento -> expresion_aritmetica_\n"); }
#line 2693 "chusco.tab.c"
    break;

  case 166: /* operador_desplazamiento: expresion_aritmetica_  */
#line 426 "chusco.y"
                                                                        {printf ( "expresion_desplazamiento-> expresion_aritmetica_\n"); }
#line 2699 "chusco.tab.c"
    break;

  case 167: /* expresion_aritmetica_: expresion_aritmetica_ '+' expresion_aritmetica_fundamental  */
#line 430 "chusco.y"
                                                                        {printf ( "expresion_aritmetica_ -> expresion_aritmetica_ + expresion_aritmetica_fundamental\n"); }
#line 2705 "chusco.tab.c"
    break;

  case 168: /* expresion_aritmetica_: expresion_aritmetica_ '-' expresion_aritmetica_fundamental  */
#line 431 "chusco.y"
                                                                        {printf ( "expresion_aritmetica_ -> expresion_aritmetica_ - expresion_aritmetica_fundamental\n"); }
#line 2711 "chusco.tab.c"
    break;

  case 169: /* expresion_aritmetica_: expresion_aritmetica_fundamental  */
#line 432 "chusco.y"
                                                                {printf ( "expresion_aritmetica_ -> expresion_aritmetica_fundamental\n"); }
#line 2717 "chusco.tab.c"
    break;

  case 170: /* expresion_aritmetica_fundamental: expresion_aritmetica_fundamental '*' expresion_potencia  */
#line 436 "chusco.y"
                                                                  {printf ( "expresion_aritmetica_fundamental-> expresion_aritmetica_fundamental * expresion_potencia\n"); }
#line 2723 "chusco.tab.c"
    break;

  case 171: /* expresion_aritmetica_fundamental: expresion_aritmetica_fundamental '/' expresion_potencia  */
#line 437 "chusco.y"
                                                                      {printf ( "expresion_aritmetica_fundamental-> expresion_aritmetica_fundamental / expresion_potencia\n"); }
#line 2729 "chusco.tab.c"
    break;

  case 172: /* expresion_aritmetica_fundamental: expresion_aritmetica_fundamental '\\' expresion_potencia  */
#line 438 "chusco.y"
                                                                      {printf ( "expresion_aritmetica_fundamental-> expresion_aritmetica_fundamental \\ expresion_potencia\n"); }
#line 2735 "chusco.tab.c"
    break;

  case 173: /* expresion_aritmetica_fundamental: expresion_potencia  */
#line 439 "chusco.y"
                                                                              {printf ( "expresion_aritmetica_fundamental-> expresion_potencia\n"); }
#line 2741 "chusco.tab.c"
    break;

  case 174: /* expresion_potencia: expresion_posfija '^' expresion_potencia  */
#line 444 "chusco.y"
                                                                {printf ( " expresion_potencia -> expresion_posfija ^ expresion_potencia\n"); }
#line 2747 "chusco.tab.c"
    break;

  case 175: /* expresion_potencia: expresion_posfija  */
#line 445 "chusco.y"
                                                                {printf ( " expresion_potencia -> expresion_posfija\n"); }
#line 2753 "chusco.tab.c"
    break;

  case 176: /* expresion_posfija: expresion_unaria operador_posfijo  */
#line 450 "chusco.y"
                                                                {printf ( " expresion_posfija -> expresion_unaria operador_posfijo\n"); }
#line 2759 "chusco.tab.c"
    break;

  case 177: /* expresion_posfija: expresion_unaria  */
#line 451 "chusco.y"
                                                                {printf ( " expresion_posfija -> expresion_unaria\n"); }
#line 2765 "chusco.tab.c"
    break;

  case 178: /* operador_posfijo: INC  */
#line 456 "chusco.y"
                                                                {printf ( " operador_posfijo -> INC\n"); }
#line 2771 "chusco.tab.c"
    break;

  case 179: /* operador_posfijo: DEC  */
#line 457 "chusco.y"
                                                                {printf ( " operador_posfijo -> DEC\n"); }
#line 2777 "chusco.tab.c"
    break;

  case 180: /* expresion_unaria: primario  */
#line 461 "chusco.y"
                                        {printf ( " expresion_unaria -> primario\n"); }
#line 2783 "chusco.tab.c"
    break;

  case 181: /* expresion_unaria: '-' primario  */
#line 462 "chusco.y"
                                                {printf ( " expresion_unaria -> - primario\n"); }
#line 2789 "chusco.tab.c"
    break;

  case 182: /* primario: literal  */
#line 466 "chusco.y"
                                                                {printf ( " primario -> literal\n"); }
#line 2795 "chusco.tab.c"
    break;

  case 183: /* primario: objeto  */
#line 467 "chusco.y"
                                                                        {printf ( " primario -> objeto\n"); }
#line 2801 "chusco.tab.c"
    break;

  case 184: /* primario: llamada_subprograma  */
#line 468 "chusco.y"
                                                                        {printf ( " primario -> llamada_subprograma\n"); }
#line 2807 "chusco.tab.c"
    break;

  case 185: /* primario: OBJETO llamada_subprograma  */
#line 469 "chusco.y"
                                                                        {printf ( " primario -> OBJETO llamada_subprograma\n"); }
#line 2813 "chusco.tab.c"
    break;

  case 186: /* primario: enumeraciones  */
#line 470 "chusco.y"
                                                                {printf ( " primario -> enumeraciones\n"); }
#line 2819 "chusco.tab.c"
    break;

  case 187: /* primario: '(' expresion ')'  */
#line 471 "chusco.y"
                                                                        {printf ( " primario -> ( expresion )\n"); }
#line 2825 "chusco.tab.c"
    break;

  case 188: /* literal: VERDADERO  */
#line 475 "chusco.y"
                                                                        {printf ( " literal -> VERDADERO\n"); }
#line 2831 "chusco.tab.c"
    break;

  case 189: /* literal: FALSO  */
#line 476 "chusco.y"
                                                                        {printf ( " literal -> FALSO\n"); }
#line 2837 "chusco.tab.c"
    break;

  case 190: /* literal: CTC_ENTERA  */
#line 477 "chusco.y"
                                                                        {printf ( " literal -> CTC_ENTERA\n"); }
#line 2843 "chusco.tab.c"
    break;

  case 191: /* literal: CTC_REAL  */
#line 478 "chusco.y"
                                                                        {printf ( " literal -> CTC_REAL\n"); }
#line 2849 "chusco.tab.c"
    break;

  case 192: /* literal: CTC_CARACTER  */
#line 479 "chusco.y"
                                                                        {printf ( " literal -> CTC_CARACTER\n"); }
#line 2855 "chusco.tab.c"
    break;

  case 193: /* literal: CTC_CADENA  */
#line 480 "chusco.y"
                                                                        {printf ( " literal -> CTC_CADENA\n"); }
#line 2861 "chusco.tab.c"
    break;

  case 194: /* objeto: nombre  */
#line 484 "chusco.y"
                                                                                {printf ( " objeto -> nombre\n"); }
#line 2867 "chusco.tab.c"
    break;

  case 195: /* objeto: objeto '.' IDENTIFICADOR  */
#line 485 "chusco.y"
                                                                                {printf ( " objeto -> objeto . IDENTIFICADOR\n"); }
#line 2873 "chusco.tab.c"
    break;

  case 196: /* objeto: objeto '[' expresion_rep_comas ']'  */
#line 486 "chusco.y"
                                                                                        {printf ( " objeto -> objeto [ list_expr ]\n"); }
#line 2879 "chusco.tab.c"
    break;

  case 197: /* objeto: objeto '{' ctc_cadena_rep_comas '}'  */
#line 487 "chusco.y"
                                                                                        {printf ( " objeto -> objeto { lista_cadena }\n"); }
#line 2885 "chusco.tab.c"
    break;

  case 198: /* enumeraciones: '[' expresion_condicional clausula_iteracion_rep ']'  */
#line 491 "chusco.y"
                                                                        {printf ( " enumeraciones -> [ expresion_condicional lista_clausula_iteracion ]\n"); }
#line 2891 "chusco.tab.c"
    break;

  case 199: /* enumeraciones: '[' expresion_rep_comas ']'  */
#line 492 "chusco.y"
                                                                        {printf ( " enumeraciones -> [ list_expr ]\n"); }
#line 2897 "chusco.tab.c"
    break;

  case 200: /* enumeraciones: '{' clave_valor_rep_comas '}'  */
#line 493 "chusco.y"
                                                                        {printf ( " enumeraciones -> { lista_clave_valor }\n"); }
#line 2903 "chusco.tab.c"
    break;

  case 201: /* enumeraciones: '{' campo_valor_rep_comas '}'  */
#line 494 "chusco.y"
                                                                        {printf ( " enumeraciones -> { lista_campo_valor }\n"); }
#line 2909 "chusco.tab.c"
    break;

  case 202: /* expresion_condicional: expresion  */
#line 498 "chusco.y"
                                                        {printf ( " expresion_condicional -> expresion\n"); }
#line 2915 "chusco.tab.c"
    break;

  case 203: /* expresion_condicional: SI expresion ENTONCES expresion  */
#line 499 "chusco.y"
                                                                {printf ( " expresion_condicional -> SI expresion ENTONCES expresion\n"); }
#line 2921 "chusco.tab.c"
    break;

  case 204: /* expresion_condicional: SI expresion ENTONCES expresion SINO expresion  */
#line 500 "chusco.y"
                                                                        {printf ( " expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
#line 2927 "chusco.tab.c"
    break;

  case 205: /* clave_valor: CTC_CADENA FLECHA expresion  */
#line 505 "chusco.y"
                                                                        {printf ( " clave_valor -> CTC_CADENA FLECHA expresion\n"); }
#line 2933 "chusco.tab.c"
    break;

  case 206: /* campo_valor: IDENTIFICADOR FLECHA expresion  */
#line 509 "chusco.y"
                                                                        {printf ( " campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
#line 2939 "chusco.tab.c"
    break;

  case 207: /* libreria_ast: libreria_ast libreria  */
#line 519 "chusco.y"
                                                                                                      { printf ("  libreria_ast -> libreria_ast libreria\n"); }
#line 2945 "chusco.tab.c"
    break;

  case 209: /* identificador_rep_comas: identificador_rep_comas ',' IDENTIFICADOR  */
#line 524 "chusco.y"
                                                                                                      { printf ("  identificador_rep_comas -> identificador_rep_comas , IDENTIFICADOR\n"); }
#line 2951 "chusco.tab.c"
    break;

  case 210: /* identificador_rep_comas: IDENTIFICADOR  */
#line 525 "chusco.y"
                                                                                                      { printf ("  identificador_rep_comas -> IDENTIFICADOR\n"); }
#line 2957 "chusco.tab.c"
    break;

  case 211: /* declaracion_rep: declaracion_rep declaracion  */
#line 529 "chusco.y"
                                                                                                      { printf ("  declaracion_rep -> declaracion_rep declaracion\n"); }
#line 2963 "chusco.tab.c"
    break;

  case 212: /* declaracion_rep: declaracion  */
#line 530 "chusco.y"
                                                                                                     { printf ("  declaracion_rep -> declaracion\n"); }
#line 2969 "chusco.tab.c"
    break;

  case 213: /* nombre_rep_comas: nombre_rep_comas ',' nombre  */
#line 534 "chusco.y"
                                                                                                     { printf ("  nombre_rep_comas -> nombre_rep_comas , nombre\n"); }
#line 2975 "chusco.tab.c"
    break;

  case 214: /* nombre_rep_comas: nombre  */
#line 535 "chusco.y"
                                                                                                     { printf ("  nombre_rep_comas -> nombre\n"); }
#line 2981 "chusco.tab.c"
    break;

  case 215: /* campo_rep: campo_rep campo  */
#line 539 "chusco.y"
                                                                                                      { printf ("  campo_rep -> campo_rep campo\n"); }
#line 2987 "chusco.tab.c"
    break;

  case 216: /* campo_rep: campo  */
#line 540 "chusco.y"
                                                                                                     { printf ("  campo_rep -> campo\n"); }
#line 2993 "chusco.tab.c"
    break;

  case 217: /* elemento_enumeracion_rep_comas: elemento_enumeracion_rep_comas ',' elemento_enumeracion  */
#line 544 "chusco.y"
                                                                                                      { printf ("  elemento_enumeracion_rep_comas -> elemento_enumeracion_rep_comas , elemento_enumeracion\n"); }
#line 2999 "chusco.tab.c"
    break;

  case 218: /* elemento_enumeracion_rep_comas: elemento_enumeracion  */
#line 545 "chusco.y"
                                                                                                     { printf ("  elemento_enumeracion_rep_comas -> elemento_enumeracion\n"); }
#line 3005 "chusco.tab.c"
    break;

  case 219: /* declaracion_componente_rep: declaracion_componente_rep declaracion_componente  */
#line 549 "chusco.y"
                                                                                                      { printf ("  declaracion_componente_rep -> declaracion_componente_rep declaracion_componente\n"); }
#line 3011 "chusco.tab.c"
    break;

  case 220: /* declaracion_componente_rep: declaracion_componente  */
#line 550 "chusco.y"
                                                                                                     { printf ("  declaracion_componente_rep -> declaracion_componente\n"); }
#line 3017 "chusco.tab.c"
    break;

  case 221: /* modificador_ast_comas_1: modificador_ast_comas  */
#line 554 "chusco.y"
                                                                                                       { printf ("  definicion_parametro_ast_comas_1 -> modificador_ast_comas\n"); }
#line 3023 "chusco.tab.c"
    break;

  case 222: /* modificador_ast_comas_1: %empty  */
#line 555 "chusco.y"
                                                                                                       { printf ("  modificador_ast_comas_1 -> epsilon\n"); }
#line 3029 "chusco.tab.c"
    break;

  case 223: /* modificador_ast_comas: modificador_ast_comas ',' modificador  */
#line 559 "chusco.y"
                                                                                                     { printf ("  modificador_ast_comas -> modificador_ast_comas , modificador\n"); }
#line 3035 "chusco.tab.c"
    break;

  case 224: /* modificador_ast_comas: modificador  */
#line 560 "chusco.y"
                                                                                                        { printf ("  modificador_ast_comas -> modificador\n"); }
#line 3041 "chusco.tab.c"
    break;

  case 225: /* declaracion_parametros_ast_puntocoma: declaracion_parametros_ast_puntocoma declaracion_parametros ';'  */
#line 564 "chusco.y"
                                                                                                      { printf ("  declaracion_parametros_ast_puntocoma -> declaracion_parametros_ast_puntocoma declaracion_parametros ;\n"); }
#line 3047 "chusco.tab.c"
    break;

  case 227: /* declaracion_ast: declaracion_ast declaracion  */
#line 569 "chusco.y"
                                                                                                      { printf ("  declaracion_ast -> declaracion_ast declaracion\n"); }
#line 3053 "chusco.tab.c"
    break;

  case 229: /* instruccion_rep: instruccion_rep instruccion  */
#line 574 "chusco.y"
                                                                                                      { printf ("  instruccion_rep -> instruccion_rep instruccion\n"); }
#line 3059 "chusco.tab.c"
    break;

  case 230: /* instruccion_rep: instruccion  */
#line 575 "chusco.y"
                                                                                                     { printf ("  instruccion_rep -> instruccion\n"); }
#line 3065 "chusco.tab.c"
    break;

  case 231: /* definicion_parametro_ast_comas_1: definicion_parametro_ast_comas  */
#line 579 "chusco.y"
                                                                                                        { printf ("  definicion_parametro_ast_comas_1 -> definicion_parametro_ast_comas\n"); }
#line 3071 "chusco.tab.c"
    break;

  case 232: /* definicion_parametro_ast_comas_1: %empty  */
#line 580 "chusco.y"
                                                                                                        { printf ("  definicion_parametro_ast_comas_1 -> epsilon\n"); }
#line 3077 "chusco.tab.c"
    break;

  case 233: /* definicion_parametro_ast_comas: definicion_parametro_ast_comas ',' definicion_parametro  */
#line 584 "chusco.y"
                                                                                                      { printf ("  definicion_parametro_ast_comas -> definicion_parametro_ast_comas , definicion_parametro\n"); }
#line 3083 "chusco.tab.c"
    break;

  case 234: /* definicion_parametro_ast_comas: definicion_parametro  */
#line 585 "chusco.y"
                                                                                                         { printf ("  definicion_parametro_ast_comas -> definicion_parametro\n"); }
#line 3089 "chusco.tab.c"
    break;

  case 235: /* caso_rep: caso_rep caso  */
#line 589 "chusco.y"
                                                                                                      { printf ("  caso_rep -> caso_rep caso\n"); }
#line 3095 "chusco.tab.c"
    break;

  case 236: /* caso_rep: caso  */
#line 590 "chusco.y"
                                                                                                      { printf ("  caso_rep -> caso\n"); }
#line 3101 "chusco.tab.c"
    break;

  case 237: /* entrada_rep_dospuntos: entrada_rep_dospuntos entrada ':'  */
#line 594 "chusco.y"
                                                                                                     { printf ("  entrada_rep_dospuntos -> entrada_rep_dospuntos entrada :\n"); }
#line 3107 "chusco.tab.c"
    break;

  case 239: /* clausulas_excepcion_especifica_ast: clausulas_excepcion_especifica_ast clausula_excepcion_especifica  */
#line 599 "chusco.y"
                                                                                                      { printf ("  clausulas_excepcion_especifica_ast -> clausulas_excepcion_especifica_ast clausula_excepcion_especifica\n"); }
#line 3113 "chusco.tab.c"
    break;

  case 241: /* clave_valor_rep_comas: clave_valor_rep_comas ',' clave_valor  */
#line 604 "chusco.y"
                                                                                                     { printf ("  clave_valor_rep_comas -> clave_valor_rep_comas , clave_valor\n"); }
#line 3119 "chusco.tab.c"
    break;

  case 242: /* clave_valor_rep_comas: clave_valor  */
#line 605 "chusco.y"
                                                                                                     { printf ("  clave_valor_rep_comas -> clave_valor\n"); }
#line 3125 "chusco.tab.c"
    break;

  case 243: /* campo_valor_rep_comas: campo_valor_rep_comas ',' campo_valor  */
#line 609 "chusco.y"
                                                                                                     { printf ("  campo_valor_rep_comas -> campo_valor_rep_comas , campo_valor\n"); }
#line 3131 "chusco.tab.c"
    break;

  case 244: /* campo_valor_rep_comas: campo_valor  */
#line 610 "chusco.y"
                                                                                                     { printf ("  campo_valor_rep_comas -> campo_valor\n"); }
#line 3137 "chusco.tab.c"
    break;

  case 245: /* expresion_rep_comas: expresion_rep_comas ',' expresion  */
#line 614 "chusco.y"
                                                                                                     { printf ("  expresion_rep_comas -> expresion_rep_comas , expresion\n"); }
#line 3143 "chusco.tab.c"
    break;

  case 246: /* expresion_rep_comas: expresion  */
#line 615 "chusco.y"
                                                                                                   { printf ("  expresion_rep_comas -> expresion\n"); }
#line 3149 "chusco.tab.c"
    break;

  case 247: /* ctc_cadena_rep_comas: ctc_cadena_rep_comas ',' CTC_CADENA  */
#line 619 "chusco.y"
                                                                                                    { printf ("  ctc_cadena_rep_comas -> ctc_cadena_rep_comas , CTC_CADENA\n"); }
#line 3155 "chusco.tab.c"
    break;

  case 248: /* ctc_cadena_rep_comas: CTC_CADENA  */
#line 620 "chusco.y"
                                                                                                    { printf ("  ctc_cadena_rep_comas -> CTC_CADENA\n"); }
#line 3161 "chusco.tab.c"
    break;

  case 249: /* clausula_iteracion_rep: clausula_iteracion_rep clausula_iteracion  */
#line 624 "chusco.y"
                                                                                                     { printf ("  clausula_iteracion_rep -> clausula_iteracion_rep clausula_iteracion\n"); }
#line 3167 "chusco.tab.c"
    break;

  case 250: /* clausula_iteracion_rep: clausula_iteracion  */
#line 625 "chusco.y"
                                                                                                     { printf ("  clausula_iteracion_rep -> clausula_iteracion\n"); }
#line 3173 "chusco.tab.c"
    break;


#line 3177 "chusco.tab.c"

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

#line 630 "chusco.y"


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

