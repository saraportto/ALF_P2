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
#define YYDEBUG 1

extern FILE *yyin;
extern int yylex();


#line 80 "chusco.tab.c"

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
  YYSYMBOL_89_programa_ = 89,              /* "programa"  */
  YYSYMBOL_90_ = 90,                       /* ';'  */
  YYSYMBOL_91_importar_ = 91,              /* "importar"  */
  YYSYMBOL_92_libreria_ = 92,              /* "libreria"  */
  YYSYMBOL_93_como_ = 93,                  /* "como"  */
  YYSYMBOL_94_ = 94,                       /* ";"  */
  YYSYMBOL_95_de_ = 95,                    /* "de"  */
  YYSYMBOL_96_ = 96,                       /* ','  */
  YYSYMBOL_97_ = 97,                       /* "::"  */
  YYSYMBOL_98_exportar_ = 98,              /* "exportar"  */
  YYSYMBOL_99_ = 99,                       /* ':'  */
  YYSYMBOL_100_constante_ = 100,           /* "constante"  */
  YYSYMBOL_101_ = 101,                     /* ":="  */
  YYSYMBOL_102_tipo_ = 102,                /* "tipo"  */
  YYSYMBOL_103_es_ = 103,                  /* "es"  */
  YYSYMBOL_104_signo_ = 104,               /* "signo"  */
  YYSYMBOL_105_rango_ = 105,               /* "rango"  */
  YYSYMBOL_106_corto_ = 106,               /* "corto"  */
  YYSYMBOL_107_largo_ = 107,               /* "largo"  */
  YYSYMBOL_108_booleano_ = 108,            /* "booleano"  */
  YYSYMBOL_109_caracter_ = 109,            /* "caracter"  */
  YYSYMBOL_110_entero_ = 110,              /* "entero"  */
  YYSYMBOL_111_real_ = 111,                /* "real"  */
  YYSYMBOL_112_ = 112,                     /* ".."  */
  YYSYMBOL_113_tabla_ = 113,               /* "tabla"  */
  YYSYMBOL_114_ = 114,                     /* '('  */
  YYSYMBOL_115_ = 115,                     /* ")"  */
  YYSYMBOL_116_lista_ = 116,               /* "lista"  */
  YYSYMBOL_117_diccionario_ = 117,         /* "diccionario"  */
  YYSYMBOL_118_registro_ = 118,            /* "registro"  */
  YYSYMBOL_119_fin_ = 119,                 /* "fin"  */
  YYSYMBOL_120_enumeracion_ = 120,         /* "enumeracion"  */
  YYSYMBOL_121_ = 121,                     /* ')'  */
  YYSYMBOL_122_subprograma_ = 122,         /* "subprograma"  */
  YYSYMBOL_123_ = 123,                     /* "("  */
  YYSYMBOL_124_ = 124,                     /* ":"  */
  YYSYMBOL_125_valor_ = 125,               /* "valor"  */
  YYSYMBOL_126_referencia_ = 126,          /* "referencia"  */
  YYSYMBOL_127_devolver_ = 127,            /* "devolver"  */
  YYSYMBOL_128_principio_ = 128,           /* "principio"  */
  YYSYMBOL_129_ = 129,                     /* ":+"  */
  YYSYMBOL_130_ = 130,                     /* ":-"  */
  YYSYMBOL_131_ = 131,                     /* ":*"  */
  YYSYMBOL_132_ = 132,                     /* ":/"  */
  YYSYMBOL_133_ = 133,                     /* ":\\"  */
  YYSYMBOL_134_ = 134,                     /* ":^"  */
  YYSYMBOL_135_ = 135,                     /* ":<"  */
  YYSYMBOL_136_ = 136,                     /* ":>"  */
  YYSYMBOL_137_si_ = 137,                  /* "si"  */
  YYSYMBOL_138_ = 138,                     /* "=>"  */
  YYSYMBOL_139_para_ = 139,                /* "para"  */
  YYSYMBOL_140_en_ = 140,                  /* "en"  */
  YYSYMBOL_141_repetir_ = 141,             /* "repetir"  */
  YYSYMBOL_142_descendente_ = 142,         /* "descendente"  */
  YYSYMBOL_143_mientras_ = 143,            /* "mientras"  */
  YYSYMBOL_144_siguiente_ = 144,           /* "siguiente"  */
  YYSYMBOL_145_salir_ = 145,               /* "salir"  */
  YYSYMBOL_146_cuando_ = 146,              /* "cuando"  */
  YYSYMBOL_147_lanza_ = 147,               /* "lanza"  */
  YYSYMBOL_148_prueba_ = 148,              /* "prueba"  */
  YYSYMBOL_149_excepcion_ = 149,           /* "excepcion"  */
  YYSYMBOL_150_finalmente_ = 150,          /* "finalmente"  */
  YYSYMBOL_151_ = 151,                     /* "\\/"  */
  YYSYMBOL_152_ = 152,                     /* "/\\"  */
  YYSYMBOL_153_ = 153,                     /* '~'  */
  YYSYMBOL_154_ = 154,                     /* '<'  */
  YYSYMBOL_155_ = 155,                     /* '>'  */
  YYSYMBOL_156_ = 156,                     /* "<="  */
  YYSYMBOL_157_ = 157,                     /* ">="  */
  YYSYMBOL_158_ = 158,                     /* '='  */
  YYSYMBOL_159_ = 159,                     /* "~="  */
  YYSYMBOL_160_ = 160,                     /* "<-"  */
  YYSYMBOL_161_ = 161,                     /* "->"  */
  YYSYMBOL_162_ = 162,                     /* '+'  */
  YYSYMBOL_163_ = 163,                     /* '-'  */
  YYSYMBOL_164_ = 164,                     /* '*'  */
  YYSYMBOL_165_ = 165,                     /* '/'  */
  YYSYMBOL_166_ = 166,                     /* '\\'  */
  YYSYMBOL_167_ = 167,                     /* '^'  */
  YYSYMBOL_168_ = 168,                     /* "++"  */
  YYSYMBOL_169_ = 169,                     /* "--"  */
  YYSYMBOL_170_ = 170,                     /* '.'  */
  YYSYMBOL_171_ = 171,                     /* '['  */
  YYSYMBOL_172_ = 172,                     /* ']'  */
  YYSYMBOL_173_ = 173,                     /* '{'  */
  YYSYMBOL_174_ = 174,                     /* '}'  */
  YYSYMBOL_175_entonces_ = 175,            /* "entonces"  */
  YYSYMBOL_176_sino_ = 176,                /* "sino"  */
  YYSYMBOL_YYACCEPT = 177,                 /* $accept  */
  YYSYMBOL_programa = 178,                 /* programa  */
  YYSYMBOL_definicion_programa = 179,      /* definicion_programa  */
  YYSYMBOL_codigo_programa = 180,          /* codigo_programa  */
  YYSYMBOL_libreria = 181,                 /* libreria  */
  YYSYMBOL_libreria_rep_comas = 182,       /* libreria_rep_comas  */
  YYSYMBOL_nombre = 183,                   /* nombre  */
  YYSYMBOL_nombre_ast = 184,               /* nombre_ast  */
  YYSYMBOL_definicion_libreria = 185,      /* definicion_libreria  */
  YYSYMBOL_codigo_libreria = 186,          /* codigo_libreria  */
  YYSYMBOL_codigo_libreria_ast = 187,      /* codigo_libreria_ast  */
  YYSYMBOL_codigo_libreria_rep = 188,      /* codigo_libreria_rep  */
  YYSYMBOL_exportaciones = 189,            /* exportaciones  */
  YYSYMBOL_exportaciones_rep_comas = 190,  /* exportaciones_rep_comas  */
  YYSYMBOL_declaracion = 191,              /* declaracion  */
  YYSYMBOL_declaracion_objeto = 192,       /* declaracion_objeto  */
  YYSYMBOL_declaracion_objeto_rep_comas = 193, /* declaracion_objeto_rep_comas  */
  YYSYMBOL_especificacion_tipo = 194,      /* especificacion_tipo  */
  YYSYMBOL_declaracion_tipo = 195,         /* declaracion_tipo  */
  YYSYMBOL_tipo_no_estructurado = 196,     /* tipo_no_estructurado  */
  YYSYMBOL_tipo_escalar = 197,             /* tipo_escalar  */
  YYSYMBOL_longitud = 198,                 /* longitud  */
  YYSYMBOL_tipo_basico = 199,              /* tipo_basico  */
  YYSYMBOL_rango = 200,                    /* rango  */
  YYSYMBOL_tipo_tabla = 201,               /* tipo_tabla  */
  YYSYMBOL_tipo_diccionario = 202,         /* tipo_diccionario  */
  YYSYMBOL_tipo_registro = 203,            /* tipo_registro  */
  YYSYMBOL_campo_rep = 204,                /* campo_rep  */
  YYSYMBOL_campo = 205,                    /* campo  */
  YYSYMBOL_identificador_rep = 206,        /* identificador_rep  */
  YYSYMBOL_tipo_estructurado = 207,        /* tipo_estructurado  */
  YYSYMBOL_tipo_enumerado = 208,           /* tipo_enumerado  */
  YYSYMBOL_elemento_enumeracion_rep = 209, /* elemento_enumeracion_rep  */
  YYSYMBOL_elemento_enumeracion = 210,     /* elemento_enumeracion  */
  YYSYMBOL_clase = 211,                    /* clase  */
  YYSYMBOL_declaracion_componente_rep = 212, /* declaracion_componente_rep  */
  YYSYMBOL_superclases = 213,              /* superclases  */
  YYSYMBOL_nombre_rep = 214,               /* nombre_rep  */
  YYSYMBOL_declaracion_componente = 215,   /* declaracion_componente  */
  YYSYMBOL_visibilidad = 216,              /* visibilidad  */
  YYSYMBOL_componente = 217,               /* componente  */
  YYSYMBOL_modificador_asterisco = 218,    /* modificador_asterisco  */
  YYSYMBOL_modificador = 219,              /* modificador  */
  YYSYMBOL_declaracion_subprograma = 220,  /* declaracion_subprograma  */
  YYSYMBOL_cabecera_subprograma = 221,     /* cabecera_subprograma  */
  YYSYMBOL_parametrizacion = 222,          /* parametrizacion  */
  YYSYMBOL_parametrizacion_rep_ast = 223,  /* parametrizacion_rep_ast  */
  YYSYMBOL_declaracion_parametros = 224,   /* declaracion_parametros  */
  YYSYMBOL_declaracion_parametros_rep_comas = 225, /* declaracion_parametros_rep_comas  */
  YYSYMBOL_modo = 226,                     /* modo  */
  YYSYMBOL_tipo_resultado = 227,           /* tipo_resultado  */
  YYSYMBOL_cuerpo_subprograma = 228,       /* cuerpo_subprograma  */
  YYSYMBOL_instruccion = 229,              /* instruccion  */
  YYSYMBOL_instruccion_asignacion = 230,   /* instruccion_asignacion  */
  YYSYMBOL_op_asignacion = 231,            /* op_asignacion  */
  YYSYMBOL_instruccion_devolver = 232,     /* instruccion_devolver  */
  YYSYMBOL_instruccion_llamada = 233,      /* instruccion_llamada  */
  YYSYMBOL_llamada_subprograma = 234,      /* llamada_subprograma  */
  YYSYMBOL_mi_llamada_subprograma = 235,   /* mi_llamada_subprograma  */
  YYSYMBOL_definicion_parametro = 236,     /* definicion_parametro  */
  YYSYMBOL_instruccion_rep = 237,          /* instruccion_rep  */
  YYSYMBOL_instruccion_si = 238,           /* instruccion_si  */
  YYSYMBOL_caso_rep = 239,                 /* caso_rep  */
  YYSYMBOL_instruccion_casos = 240,        /* instruccion_casos  */
  YYSYMBOL_caso = 241,                     /* caso  */
  YYSYMBOL_entrada_rep = 242,              /* entrada_rep  */
  YYSYMBOL_entradas = 243,                 /* entradas  */
  YYSYMBOL_entrada = 244,                  /* entrada  */
  YYSYMBOL_instruccion_bucle = 245,        /* instruccion_bucle  */
  YYSYMBOL_clausula_iteracion = 246,       /* clausula_iteracion  */
  YYSYMBOL_instruccion_interrupcion = 247, /* instruccion_interrupcion  */
  YYSYMBOL_cuando = 248,                   /* cuando  */
  YYSYMBOL_instruccion_lanzamiento_excepcion = 249, /* instruccion_lanzamiento_excepcion  */
  YYSYMBOL_instruccion_captura_excepcion = 250, /* instruccion_captura_excepcion  */
  YYSYMBOL_clausulas = 251,                /* clausulas  */
  YYSYMBOL_clausula_finalmente = 252,      /* clausula_finalmente  */
  YYSYMBOL_expresion = 253,                /* expresion  */
  YYSYMBOL_expresion_or = 254,             /* expresion_or  */
  YYSYMBOL_expresion_and = 255,            /* expresion_and  */
  YYSYMBOL_expresion_neg = 256,            /* expresion_neg  */
  YYSYMBOL_expresion_comparacion = 257,    /* expresion_comparacion  */
  YYSYMBOL_operador_comparacion = 258,     /* operador_comparacion  */
  YYSYMBOL_expresion_desp = 259,           /* expresion_desp  */
  YYSYMBOL_operador_desp = 260,            /* operador_desp  */
  YYSYMBOL_expresion_add = 261,            /* expresion_add  */
  YYSYMBOL_operador_add = 262,             /* operador_add  */
  YYSYMBOL_expresion_mult_div = 263,       /* expresion_mult_div  */
  YYSYMBOL_operador_mult_div = 264,        /* operador_mult_div  */
  YYSYMBOL_expresion_potencia = 265,       /* expresion_potencia  */
  YYSYMBOL_expresion_posfija = 266,        /* expresion_posfija  */
  YYSYMBOL_operador_posfijo = 267,         /* operador_posfijo  */
  YYSYMBOL_expresion_unaria = 268,         /* expresion_unaria  */
  YYSYMBOL_primario = 269,                 /* primario  */
  YYSYMBOL_literal = 270,                  /* literal  */
  YYSYMBOL_objeto = 271,                   /* objeto  */
  YYSYMBOL_campo_valor = 272               /* campo_valor  */
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
#define YYLAST   709

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  177
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  232
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  420

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   411


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     114,   121,   164,   162,    96,   163,   170,   165,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,    90,
     154,   158,   155,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   171,   166,   172,   167,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   173,     2,   174,   153,     2,     2,     2,
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
      85,    86,    87,    88,    89,    91,    92,    93,    94,    95,
      97,    98,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   115,   116,   117,   118,
     119,   120,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   156,   157,   159,   160,   161,   168,   169,
     175,   176
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    26,    26,    27,    30,    31,    35,    40,    41,    42,
      45,    46,    49,    51,    52,    55,    57,    58,    60,    61,
      64,    65,    68,    70,    71,    74,    75,    76,    83,    84,
      85,    86,    89,    90,    93,    93,   100,   101,   104,   104,
     104,   107,   108,   109,   110,   111,   114,   114,   117,   117,
     117,   117,   120,   121,   124,   125,   128,   131,   133,   134,
     137,   138,   141,   142,   145,   145,   145,   147,   148,   151,
     152,   154,   155,   162,   163,   164,   165,   167,   168,   171,
     174,   175,   178,   178,   181,   181,   181,   184,   185,   186,
     188,   189,   192,   192,   192,   192,   192,   192,   199,   202,
     203,   204,   205,   208,   211,   212,   215,   216,   217,   218,
     221,   222,   225,   225,   228,   231,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   258,   261,   261,   262,
     262,   262,   262,   263,   263,   263,   266,   267,   270,   273,
     274,   277,   278,   281,   282,   285,   286,   289,   290,   293,
     294,   296,   299,   302,   303,   306,   309,   310,   311,   314,
     315,   318,   319,   320,   321,   322,   323,   324,   327,   328,
     329,   330,   331,   332,   335,   338,   341,   346,   360,   369,
     372,   373,   376,   377,   380,   381,   384,   385,   388,   388,
     388,   388,   388,   388,   391,   392,   395,   395,   398,   399,
     402,   402,   405,   406,   409,   409,   409,   412,   413,   416,
     417,   420,   420,   423,   424,   427,   428,   429,   430,   431,
     432,   433,   436,   436,   436,   436,   436,   436,   439,   440,
     441,   442,   459
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
  "ASIG_DESPI", "ASIG_DESPD", "\"programa\"", "';'", "\"importar\"",
  "\"libreria\"", "\"como\"", "\";\"", "\"de\"", "','", "\"::\"",
  "\"exportar\"", "':'", "\"constante\"", "\":=\"", "\"tipo\"", "\"es\"",
  "\"signo\"", "\"rango\"", "\"corto\"", "\"largo\"", "\"booleano\"",
  "\"caracter\"", "\"entero\"", "\"real\"", "\"..\"", "\"tabla\"", "'('",
  "\")\"", "\"lista\"", "\"diccionario\"", "\"registro\"", "\"fin\"",
  "\"enumeracion\"", "')'", "\"subprograma\"", "\"(\"", "\":\"",
  "\"valor\"", "\"referencia\"", "\"devolver\"", "\"principio\"", "\":+\"",
  "\":-\"", "\":*\"", "\":/\"", "\":\\\\\"", "\":^\"", "\":<\"", "\":>\"",
  "\"si\"", "\"=>\"", "\"para\"", "\"en\"", "\"repetir\"",
  "\"descendente\"", "\"mientras\"", "\"siguiente\"", "\"salir\"",
  "\"cuando\"", "\"lanza\"", "\"prueba\"", "\"excepcion\"",
  "\"finalmente\"", "\"\\\\/\"", "\"/\\\\\"", "'~'", "'<'", "'>'",
  "\"<=\"", "\">=\"", "'='", "\"~=\"", "\"<-\"", "\"->\"", "'+'", "'-'",
  "'*'", "'/'", "'\\\\'", "'^'", "\"++\"", "\"--\"", "'.'", "'['", "']'",
  "'{'", "'}'", "\"entonces\"", "\"sino\"", "$accept", "programa",
  "definicion_programa", "codigo_programa", "libreria",
  "libreria_rep_comas", "nombre", "nombre_ast", "definicion_libreria",
  "codigo_libreria", "codigo_libreria_ast", "codigo_libreria_rep",
  "exportaciones", "exportaciones_rep_comas", "declaracion",
  "declaracion_objeto", "declaracion_objeto_rep_comas",
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
  "tipo_resultado", "cuerpo_subprograma", "instruccion",
  "instruccion_asignacion", "op_asignacion", "instruccion_devolver",
  "instruccion_llamada", "llamada_subprograma", "mi_llamada_subprograma",
  "definicion_parametro", "instruccion_rep", "instruccion_si", "caso_rep",
  "instruccion_casos", "caso", "entrada_rep", "entradas", "entrada",
  "instruccion_bucle", "clausula_iteracion", "instruccion_interrupcion",
  "cuando", "instruccion_lanzamiento_excepcion",
  "instruccion_captura_excepcion", "clausulas", "clausula_finalmente",
  "expresion", "expresion_or", "expresion_and", "expresion_neg",
  "expresion_comparacion", "operador_comparacion", "expresion_desp",
  "operador_desp", "expresion_add", "operador_add", "expresion_mult_div",
  "operador_mult_div", "expresion_potencia", "expresion_posfija",
  "operador_posfijo", "expresion_unaria", "primario", "literal", "objeto",
  "campo_valor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-180)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-232)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      62,   -19,    11,    88,  -180,  -180,     8,    15,  -180,  -180,
    -180,  -180,  -180,    67,  -180,    27,    38,  -180,    69,    81,
    -180,   -32,   -32,  -180,  -180,   -58,  -180,  -180,  -180,  -180,
    -180,   109,     3,    92,    20,   -32,  -180,   -32,  -180,   264,
      73,   100,    87,  -180,  -180,   294,  -180,   347,    70,  -180,
      71,    85,   347,   105,  -180,  -180,  -180,  -180,    89,   122,
     132,  -180,   124,  -180,  -180,   141,  -180,  -180,  -180,   167,
     180,  -180,  -180,   192,   194,   -40,   171,  -180,  -180,  -180,
    -180,   198,  -180,  -180,   394,  -180,   164,   242,   527,   347,
     347,   406,  -180,  -180,   169,   173,  -180,    77,  -180,  -180,
    -180,    66,  -180,  -180,  -180,    37,    79,  -180,   -20,  -180,
       7,  -180,   -50,  -180,   -52,   176,   232,   -48,  -180,  -180,
    -180,   -28,   -38,   527,   527,   145,  -180,   462,   214,   216,
     527,   -66,   -55,  -180,   394,   178,   186,  -180,  -180,  -180,
     205,  -180,  -180,  -180,   394,  -180,  -180,  -180,   521,   527,
     527,   209,  -180,  -180,  -180,  -180,  -180,  -180,   527,   546,
    -180,  -180,  -180,  -180,  -180,  -180,    -3,  -180,   210,   159,
     203,  -180,  -180,   -13,  -104,    93,   187,  -180,   172,   162,
    -180,  -180,   120,  -180,  -180,  -180,   265,   527,  -180,  -180,
     295,    50,    79,  -180,   240,   354,  -180,    94,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,   252,  -180,  -180,
     347,   527,   306,   256,  -180,  -180,  -180,   313,   523,   361,
     367,    -6,  -180,   296,   -98,   -27,  -180,  -180,   527,   297,
    -180,   327,   300,   302,  -180,    61,   360,  -180,  -180,    96,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,   343,
     527,   351,   527,   326,  -180,   305,   527,   298,  -180,  -180,
     527,   527,   527,  -104,  -180,  -180,   -13,  -180,  -180,   -13,
    -180,  -180,  -180,   -13,   -13,  -180,  -180,  -180,   355,   527,
     269,  -180,  -180,  -180,   421,   184,  -180,  -180,  -180,   429,
    -180,   -53,  -180,   -45,  -180,  -180,  -180,  -180,   340,   347,
     430,   394,   394,  -180,   347,   527,   347,   527,  -180,  -180,
     -62,  -180,  -180,   394,  -180,   333,  -180,   352,  -180,   -21,
    -180,  -180,   449,  -180,   289,   288,   371,  -180,   527,  -180,
    -180,   362,   203,  -180,    93,   187,  -180,  -180,   130,   304,
     292,   329,   308,  -180,   470,  -180,  -180,   527,   359,   527,
     379,  -180,     6,  -180,   168,   291,   344,  -180,   345,   348,
    -180,   392,   394,   339,   527,   444,  -180,  -180,  -180,  -180,
    -180,   380,   396,   147,   155,   527,  -180,  -180,   403,  -180,
    -180,   527,   516,   364,   487,  -180,   301,   493,   527,   527,
    -180,  -180,  -180,  -180,  -180,   527,   347,  -180,  -180,  -180,
    -180,   381,   400,   394,  -180,   469,   356,  -180,  -180,   385,
    -180,  -180,  -180,   527,   394,  -180,   393,  -180,  -180,  -180
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     2,     3,     0,     0,     1,     6,
      19,     5,    15,     0,    33,     0,     0,    14,     0,     0,
      18,    16,     0,    21,    25,     0,    26,    27,    14,    14,
      24,     0,     0,     0,   102,     0,    20,    17,    32,    14,
       0,     0,    12,    22,    14,     0,   105,    14,   101,   100,
       0,     0,    14,     0,    48,    49,    50,    51,     0,     0,
       0,    34,     0,    35,    38,    45,    39,    40,     7,     0,
       0,    13,    23,    91,     0,     0,     0,    64,    37,    65,
      66,     0,   114,    99,     0,    98,     0,     0,    14,    14,
      14,    14,    46,    47,     0,     0,    11,     0,    86,    85,
      84,    91,    14,    88,    87,    91,    91,    78,    91,    83,
       0,    63,     0,    59,     0,    72,     0,     0,    70,    36,
     111,     0,     0,    14,    14,     0,   125,    14,     0,     0,
      14,     0,     0,    14,     0,   228,     0,   116,   117,   118,
       0,   119,   120,   121,     0,   122,   123,   124,     0,    14,
      14,    44,   223,   222,   226,   227,   224,   225,    14,    14,
     188,   189,   190,   191,   192,   193,    14,   228,     0,   179,
     181,   183,   185,    14,   187,   195,   199,   203,   208,   210,
     214,   215,   216,    55,    56,    30,     0,    14,     8,     9,
       0,    91,    91,    81,    14,     0,    77,    91,    82,    95,
      92,    93,    96,    97,    94,    90,    89,     0,    58,    62,
      14,    14,     0,     0,    69,   104,   103,     0,    14,     0,
       0,     0,   136,     0,     0,     0,   167,   169,    14,     0,
     171,     0,     0,     0,   146,     0,     0,   115,   138,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,     0,
      14,     0,    14,     0,    43,     0,    14,     0,   184,   213,
      14,    14,    14,   186,   196,   197,    14,   200,   201,    14,
     204,   205,   206,    14,    14,   211,   212,   209,     0,    14,
       0,    31,    42,    10,     0,    91,    79,    80,    76,     0,
      57,     0,    71,     0,    68,   110,   112,   113,   109,    14,
       0,     0,     0,   137,    14,    14,    14,    14,   174,   168,
       0,   173,   175,     0,   145,     0,   177,     0,   140,     0,
     142,   143,     0,   229,     0,     0,     0,    28,    14,    41,
     221,     0,   180,   182,   194,   198,   202,   207,   217,     0,
       0,     0,     0,    75,     0,    74,    61,    14,     0,    14,
     108,   154,     0,   150,     0,     0,     0,   162,     0,   164,
     172,     0,   178,     0,    14,     0,   139,   160,   230,   231,
     126,    53,     0,   218,   219,    14,   220,    73,     0,    67,
     107,    14,    14,     0,     0,   149,     0,     0,    14,    14,
     166,   170,   176,   144,   141,    14,    14,   232,    60,   106,
     158,   155,   157,     0,   151,     0,     0,   159,   161,   165,
      52,    54,   153,    14,   152,   148,     0,   163,   156,   147
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,  -180,  -180,  -180,   -17,  -180,  -180,  -180,
    -180,   509,  -180,  -180,    83,   157,  -180,   -46,   229,   489,
     416,   453,   483,  -179,  -180,  -180,  -180,  -180,   432,  -180,
    -180,  -180,   334,  -108,  -180,   -85,   446,  -180,  -102,  -180,
     437,  -180,  -180,   438,  -180,  -180,  -180,  -180,  -180,  -180,
     501,  -180,   -79,  -180,  -180,  -180,  -180,  -180,  -180,   185,
    -115,  -180,  -180,  -180,   199,  -180,  -180,  -180,  -180,   331,
    -180,  -128,  -180,  -180,  -180,  -180,    18,  -180,   307,   309,
     398,  -180,   397,  -180,   287,  -180,   303,  -180,    84,  -180,
    -180,  -180,   401,  -180,   -82,  -180
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,    11,    20,    97,   167,    31,     5,    12,
      13,    21,    22,    32,    23,   103,    25,    62,   104,    63,
      64,    94,    65,   254,    66,    67,    77,   112,   113,   114,
      78,    79,   117,   118,    80,   105,   106,   194,   107,   108,
     109,   110,   205,    27,    35,    48,    81,   121,   122,   299,
      49,    51,   234,   137,   252,   138,   139,   140,   319,   320,
     235,   141,   352,   142,   353,   382,   383,   401,   143,   144,
     145,   229,   146,   147,   315,   316,   255,   169,   170,   171,
     172,   173,   174,   266,   175,   269,   176,   273,   177,   178,
     277,   179,   180,   181,   182,   342
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    82,   148,   196,   232,   136,    86,    38,   282,   214,
     199,    40,    41,   209,   152,   111,   191,   115,   200,   351,
     115,   197,    61,   201,   152,   115,   304,    72,   227,   239,
      61,   202,   360,    14,   384,    61,   203,   346,   204,   230,
     231,    39,   305,   183,   184,    14,     6,   210,   347,   153,
     154,   155,   148,   156,   157,   116,   264,   265,   217,   153,
     154,   155,   148,   156,   157,   195,   215,   135,   123,   207,
      18,   213,    61,    61,   348,   365,     7,   329,   284,    98,
     228,    99,    18,   100,   228,   193,   218,   216,     8,   196,
      19,   228,    98,    43,    99,   196,   100,   306,     9,    44,
     366,   158,    14,   123,    36,    10,   168,   285,    98,   186,
      99,   158,   100,   307,   124,    14,   233,   135,    50,    28,
      36,    98,   289,    99,   322,   100,   125,   135,   359,    19,
      29,    14,    14,   128,    33,   129,    98,   130,    99,    18,
     100,   219,   220,    46,    14,   223,    34,    47,   226,   124,
     166,     1,    18,   148,     2,   126,   314,   148,    15,    14,
     314,   125,    16,    68,   291,    17,    69,   253,    18,    18,
      24,   189,   298,   190,    42,   123,   257,   287,    24,    24,
     102,    18,   361,   196,    71,   214,   354,   355,   127,    19,
     126,    70,    24,    61,    24,    45,    18,    47,   362,    84,
     128,    61,   129,    88,   130,   131,   132,    85,   133,   134,
     409,   313,   344,    54,    55,    56,    57,    89,   135,   148,
     148,   124,   135,   127,   386,    91,    98,    90,    99,   292,
     100,   148,    95,   125,    98,   128,    99,   129,   100,   130,
     131,   132,    26,   133,   134,    96,   308,    92,    93,    14,
      26,    26,   101,   350,   321,   267,   268,    14,   356,   111,
     358,   119,   126,   120,    26,   149,    26,   188,   324,   221,
     326,   406,   148,   148,   187,   314,   314,   211,   331,   224,
     148,   225,    61,   314,   135,   135,    18,    61,   414,    61,
     278,   279,   236,   280,    18,   127,   135,   339,   123,   238,
    -229,  -229,    73,  -229,   148,   237,   102,   128,   123,   129,
     261,   130,   131,   132,   256,   133,   134,  -230,  -230,   387,
    -230,   148,   260,   357,   148,  -231,  -231,   314,  -231,   405,
     275,   276,   148,   340,   341,   314,    53,   135,   135,   274,
      54,    55,    56,    57,   124,   135,   371,   150,    92,    93,
     411,   270,   271,   272,   124,   262,   125,   336,   337,   281,
     283,   286,   288,   123,    52,   378,   125,   380,    53,   135,
     290,   115,    54,    55,    56,    57,   294,    58,   295,    61,
      59,    60,   393,   321,   300,   126,   135,   152,   301,   135,
     303,   309,   310,   397,   311,   126,   312,   135,    53,   399,
     402,   123,    54,    55,    56,    57,   408,    58,   323,   124,
      59,    60,    74,   410,    75,   325,   327,   328,   127,   330,
     338,   125,   153,   154,   155,   317,   156,   157,   127,   343,
     128,   418,   129,   152,   130,   131,   132,   345,   133,   134,
     128,   349,   129,   351,   130,   131,   132,   124,   133,   134,
     126,    53,   363,   364,   367,    54,    55,    56,    57,   125,
      58,   368,   369,    59,    60,   370,   374,   375,   153,   154,
     155,   152,   156,   157,   158,   416,   373,   372,   377,   379,
     381,   318,   376,   127,   388,   389,   391,   392,   126,   152,
     390,   396,   395,   398,   404,   128,   185,   129,   407,   130,
     131,   132,   403,   133,   134,   412,   153,   154,   155,   317,
     156,   157,   413,   159,   160,   161,   162,   163,   164,   165,
     158,   127,   415,   166,   153,   154,   155,   417,   156,   157,
     419,    37,   212,   128,    76,   129,    87,   130,   131,   132,
     151,   133,   134,   152,   208,   198,   293,   192,   206,    83,
     394,   385,   302,   334,   152,   400,   222,   258,   158,   159,
     160,   161,   162,   163,   164,   165,     0,   259,   332,   166,
     263,   333,   335,   152,     0,     0,   158,     0,   153,   154,
     155,     0,   156,   157,     0,     0,     0,     0,     0,   153,
     154,   155,     0,   156,   157,     0,     0,   159,   160,   161,
     162,   163,   164,   165,     0,     0,     0,   166,   153,   154,
     155,     0,   156,   157,     0,   159,   160,   161,   162,   163,
     164,   165,   240,     0,     0,   166,     0,    53,     0,     0,
     158,    54,    55,    56,    57,     0,    58,     0,     0,    59,
      60,   158,     0,     0,     0,     0,     0,     0,   296,   297,
     241,   242,   243,   244,   245,   246,   247,   248,     0,     0,
     158,     0,     0,     0,     0,     0,     0,     0,     0,   159,
     160,   161,   162,   163,   164,   165,     0,     0,     0,   166,
     159,   160,   161,   162,   163,   164,   165,     0,     0,     0,
     166,   249,   250,     0,   251,     0,     0,     0,     0,     0,
     160,   161,   162,   163,   164,   165,     0,     0,     0,   166
};

static const yytype_int16 yycheck[] =
{
      17,    47,    84,   105,   132,    84,    52,    65,   187,   117,
       3,    28,    29,    65,    27,    65,   101,    65,    11,    13,
      65,   106,    39,    16,    27,    65,   124,    44,    94,   144,
      47,    24,    94,    65,    28,    52,    29,    90,    31,    94,
      95,    99,   140,    89,    90,    65,    65,    99,   101,    62,
      63,    64,   134,    66,    67,    95,   160,   161,    96,    62,
      63,    64,   144,    66,    67,    28,    94,    84,     7,   119,
     102,   119,    89,    90,   119,    96,    65,   256,    28,    42,
     146,    44,   102,    46,   146,   102,   124,   115,     0,   191,
     122,   146,    42,    90,    44,   197,    46,   124,    90,    96,
     121,   114,    65,     7,    21,    90,    88,   192,    42,    91,
      44,   114,    46,   140,    53,    65,   133,   134,    35,    92,
      37,    42,    28,    44,    28,    46,    65,   144,   307,   122,
      92,    65,    65,   139,    65,   141,    42,   143,    44,   102,
      46,   123,   124,   123,    65,   127,    65,   127,   130,    53,
     163,    89,   102,   235,    92,    94,   235,   239,    91,    65,
     239,    65,    95,    90,   210,    98,    93,   149,   102,   102,
      13,    94,   218,    96,    65,     7,   158,   194,    21,    22,
     114,   102,   310,   285,    97,   293,   301,   302,   127,   122,
      94,    91,    35,   210,    37,   103,   102,   127,   313,   128,
     139,   218,   141,   114,   143,   144,   145,   122,   147,   148,
     389,   150,    28,   108,   109,   110,   111,    95,   235,   301,
     302,    53,   239,   127,    56,   101,    42,    95,    44,   211,
      46,   313,    65,    65,    42,   139,    44,   141,    46,   143,
     144,   145,    13,   147,   148,    65,   228,   106,   107,    65,
      21,    22,    60,   299,   236,   162,   163,    65,   304,    65,
     306,    90,    94,    65,    35,   101,    37,    94,   250,   124,
     252,   386,   354,   355,   105,   354,   355,   101,   260,    65,
     362,    65,   299,   362,   301,   302,   102,   304,   403,   306,
     170,   171,   114,   173,   102,   127,   313,   279,     7,    94,
     170,   171,     8,   173,   386,   119,   114,   139,     7,   141,
     151,   143,   144,   145,   105,   147,   148,   170,   171,    28,
     173,   403,   112,   305,   406,   170,   171,   406,   173,    28,
     168,   169,   414,    64,    65,   414,   104,   354,   355,   167,
     108,   109,   110,   111,    53,   362,   328,   105,   106,   107,
     396,   164,   165,   166,    53,   152,    65,   273,   274,    94,
      65,   121,     8,     7,   100,   347,    65,   349,   104,   386,
     118,    65,   108,   109,   110,   111,   120,   113,    65,   396,
     116,   117,   364,   365,    23,    94,   403,    27,    21,   406,
      94,    94,    65,   375,    94,    94,    94,   414,   104,   381,
     382,     7,   108,   109,   110,   111,   388,   113,    65,    53,
     116,   117,   118,   395,   120,    64,    90,   112,   127,   121,
      65,    65,    62,    63,    64,    65,    66,    67,   127,     8,
     139,   413,   141,    27,   143,   144,   145,     8,   147,   148,
     139,   101,   141,    13,   143,   144,   145,    53,   147,   148,
      94,   104,   119,   101,     5,   108,   109,   110,   111,    65,
     113,   172,   174,   116,   117,    94,   174,   138,    62,    63,
      64,    27,    66,    67,   114,   119,   172,   115,     8,   120,
     101,   121,   174,   127,   140,   140,    94,   148,    94,    27,
     142,    95,   112,    90,     7,   139,    90,   141,     5,   143,
     144,   145,   138,   147,   148,   124,    62,    63,    64,    65,
      66,    67,   112,   153,   154,   155,   156,   157,   158,   159,
     114,   127,    53,   163,    62,    63,    64,   142,    66,    67,
     137,    22,   116,   139,    45,   141,    53,   143,   144,   145,
      87,   147,   148,    27,   112,   108,   212,   101,   110,    48,
     365,   352,   221,   266,    27,    39,    94,   159,   114,   153,
     154,   155,   156,   157,   158,   159,    -1,   166,   261,   163,
     173,   262,   269,    27,    -1,    -1,   114,    -1,    62,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,   153,   154,   155,
     156,   157,   158,   159,    -1,    -1,    -1,   163,    62,    63,
      64,    -1,    66,    67,    -1,   153,   154,   155,   156,   157,
     158,   159,   101,    -1,    -1,   163,    -1,   104,    -1,    -1,
     114,   108,   109,   110,   111,    -1,   113,    -1,    -1,   116,
     117,   114,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
     129,   130,   131,   132,   133,   134,   135,   136,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
     154,   155,   156,   157,   158,   159,    -1,    -1,    -1,   163,
     153,   154,   155,   156,   157,   158,   159,    -1,    -1,    -1,
     163,   170,   171,    -1,   173,    -1,    -1,    -1,    -1,    -1,
     154,   155,   156,   157,   158,   159,    -1,    -1,    -1,   163
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    89,    92,   178,   179,   185,    65,    65,     0,    90,
      90,   180,   186,   187,    65,    91,    95,    98,   102,   122,
     181,   188,   189,   191,   192,   193,   195,   220,    92,    92,
     183,   184,   190,    65,    65,   221,   191,   188,    65,    99,
     183,   183,    65,    90,    96,   103,   123,   127,   222,   227,
     191,   228,   100,   104,   108,   109,   110,   111,   113,   116,
     117,   183,   194,   196,   197,   199,   201,   202,    90,    93,
      91,    97,   183,     8,   118,   120,   196,   203,   207,   208,
     211,   223,   194,   227,   128,   122,   194,   199,   114,    95,
      95,   101,   106,   107,   198,    65,    65,   182,    42,    44,
      46,    60,   114,   192,   195,   212,   213,   215,   216,   217,
     218,    65,   204,   205,   206,    65,    95,   209,   210,    90,
      65,   224,   225,     7,    53,    65,    94,   127,   139,   141,
     143,   144,   145,   147,   148,   183,   229,   230,   232,   233,
     234,   238,   240,   245,   246,   247,   249,   250,   271,   101,
     105,   198,    27,    62,    63,    64,    66,    67,   114,   153,
     154,   155,   156,   157,   158,   159,   163,   183,   253,   254,
     255,   256,   257,   258,   259,   261,   263,   265,   266,   268,
     269,   270,   271,   194,   194,    90,   253,   105,    94,    94,
      96,   212,   213,   183,   214,    28,   215,   212,   217,     3,
      11,    16,    24,    29,    31,   219,   220,   119,   205,    65,
      99,   101,   197,   119,   210,    94,   115,    96,   124,   253,
     253,   124,    94,   253,    65,    65,   253,    94,   146,   248,
      94,    95,   248,   183,   229,   237,   114,   119,    94,   237,
     101,   129,   130,   131,   132,   133,   134,   135,   136,   170,
     171,   173,   231,   253,   200,   253,   105,   253,   257,   269,
     112,   151,   152,   259,   160,   161,   260,   162,   163,   262,
     164,   165,   166,   264,   167,   168,   169,   267,   170,   171,
     173,    94,   200,    65,    28,   212,   121,   183,     8,    28,
     118,   194,   253,   209,   120,    65,   125,   126,   194,   226,
      23,    21,   246,    94,   124,   140,   124,   140,   253,    94,
      65,    94,    94,   150,   229,   251,   252,    65,   121,   235,
     236,   253,    28,    65,   253,    64,   253,    90,   112,   200,
     121,   253,   255,   256,   261,   263,   265,   265,    65,   253,
      64,    65,   272,     8,    28,     8,    90,   101,   119,   101,
     194,    13,   239,   241,   237,   237,   194,   253,   194,   200,
      94,   248,   237,   119,   101,    96,   121,     5,   172,   174,
      94,   253,   115,   172,   174,   138,   174,     8,   253,   120,
     253,   101,   242,   243,    28,   241,    56,    28,   140,   140,
     142,    94,   148,   253,   236,   112,    95,   253,    90,   253,
      39,   244,   253,   138,     7,    28,   237,     5,   253,   200,
     253,   194,   124,   112,   237,    53,   119,   142,   253,   137
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   177,   178,   178,   179,   179,   180,   181,   181,   181,
     182,   182,   183,   184,   184,   185,   186,   186,   187,   187,
     188,   188,   189,   190,   190,   191,   191,   191,   192,   192,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     196,   197,   197,   197,   197,   197,   198,   198,   199,   199,
     199,   199,   200,   200,   201,   201,   202,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   211,   211,   212,   212,   213,
     214,   214,   215,   215,   216,   216,   216,   217,   217,   217,
     218,   218,   219,   219,   219,   219,   219,   219,   220,   221,
     221,   221,   221,   222,   223,   223,   224,   224,   224,   224,
     225,   225,   226,   226,   227,   228,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   230,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   232,   232,   233,   234,
     234,   235,   235,   236,   236,   237,   237,   238,   238,   239,
     239,   240,   241,   242,   242,   243,   244,   244,   244,   245,
     245,   246,   246,   246,   246,   246,   246,   246,   247,   247,
     247,   247,   247,   247,   248,   249,   250,   251,   252,   253,
     254,   254,   255,   255,   256,   256,   257,   257,   258,   258,
     258,   258,   258,   258,   259,   259,   260,   260,   261,   261,
     262,   262,   263,   263,   264,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   269,   269,   269,   269,   269,
     269,   269,   270,   270,   270,   270,   270,   270,   271,   271,
     271,   271,   272
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,     4,     0,     4,     6,     6,
       3,     1,     2,     3,     0,     4,     2,     3,     2,     0,
       2,     1,     3,     3,     1,     1,     1,     1,     7,     7,
       5,     6,     2,     1,     1,     1,     5,     4,     1,     1,
       1,     5,     4,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     5,     3,     8,     3,     3,     4,     2,     1,
       6,     4,     2,     1,     1,     1,     1,     6,     4,     2,
       1,     3,     1,     6,     5,     5,     4,     2,     1,     3,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     4,     3,
       2,     2,     1,     4,     3,     0,     6,     5,     4,     3,
       3,     1,     1,     1,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     4,
       3,     3,     1,     1,     3,     2,     1,     8,     7,     2,
       1,     6,     4,     3,     0,     2,     3,     1,     1,     6,
       4,     6,     4,     7,     4,     6,     5,     2,     3,     2,
       5,     2,     4,     3,     2,     3,     5,     1,     2,     1,
       3,     1,     3,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     3,     4,     4,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     3
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

#line 1746 "chusco.tab.c"

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

#line 462 "chusco.y"


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
