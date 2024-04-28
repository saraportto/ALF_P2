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
  YYSYMBOL_codigo_programa_ast = 181,      /* codigo_programa_ast  */
  YYSYMBOL_libreria = 182,                 /* libreria  */
  YYSYMBOL_libreria_rep_comas = 183,       /* libreria_rep_comas  */
  YYSYMBOL_nombre = 184,                   /* nombre  */
  YYSYMBOL_nombre_ast = 185,               /* nombre_ast  */
  YYSYMBOL_definicion_libreria = 186,      /* definicion_libreria  */
  YYSYMBOL_codigo_libreria = 187,          /* codigo_libreria  */
  YYSYMBOL_codigo_libreria_ast = 188,      /* codigo_libreria_ast  */
  YYSYMBOL_codigo_libreria_rep = 189,      /* codigo_libreria_rep  */
  YYSYMBOL_exportaciones = 190,            /* exportaciones  */
  YYSYMBOL_exportaciones_rep_comas = 191,  /* exportaciones_rep_comas  */
  YYSYMBOL_declaracion = 192,              /* declaracion  */
  YYSYMBOL_declaracion_objeto = 193,       /* declaracion_objeto  */
  YYSYMBOL_declaracion_objeto_rep_comas = 194, /* declaracion_objeto_rep_comas  */
  YYSYMBOL_especificacion_tipo = 195,      /* especificacion_tipo  */
  YYSYMBOL_declaracion_tipo = 196,         /* declaracion_tipo  */
  YYSYMBOL_tipo_no_estructurado = 197,     /* tipo_no_estructurado  */
  YYSYMBOL_tipo_escalar = 198,             /* tipo_escalar  */
  YYSYMBOL_longitud = 199,                 /* longitud  */
  YYSYMBOL_tipo_basico = 200,              /* tipo_basico  */
  YYSYMBOL_rango = 201,                    /* rango  */
  YYSYMBOL_tipo_tabla = 202,               /* tipo_tabla  */
  YYSYMBOL_tipo_diccionario = 203,         /* tipo_diccionario  */
  YYSYMBOL_tipo_registro = 204,            /* tipo_registro  */
  YYSYMBOL_campo_rep = 205,                /* campo_rep  */
  YYSYMBOL_campo = 206,                    /* campo  */
  YYSYMBOL_identificador_rep = 207,        /* identificador_rep  */
  YYSYMBOL_tipo_estructurado = 208,        /* tipo_estructurado  */
  YYSYMBOL_tipo_enumerado = 209,           /* tipo_enumerado  */
  YYSYMBOL_elemento_enumeracion_rep = 210, /* elemento_enumeracion_rep  */
  YYSYMBOL_elemento_enumeracion = 211,     /* elemento_enumeracion  */
  YYSYMBOL_clase = 212,                    /* clase  */
  YYSYMBOL_declaracion_componente_rep = 213, /* declaracion_componente_rep  */
  YYSYMBOL_superclases = 214,              /* superclases  */
  YYSYMBOL_nombre_rep = 215,               /* nombre_rep  */
  YYSYMBOL_declaracion_componente = 216,   /* declaracion_componente  */
  YYSYMBOL_visibilidad = 217,              /* visibilidad  */
  YYSYMBOL_componente = 218,               /* componente  */
  YYSYMBOL_modificador_asterisco = 219,    /* modificador_asterisco  */
  YYSYMBOL_modificador = 220,              /* modificador  */
  YYSYMBOL_declaracion_subprograma = 221,  /* declaracion_subprograma  */
  YYSYMBOL_cabecera_subprograma = 222,     /* cabecera_subprograma  */
  YYSYMBOL_parametrizacion = 223,          /* parametrizacion  */
  YYSYMBOL_parametrizacion_rep_ast = 224,  /* parametrizacion_rep_ast  */
  YYSYMBOL_declaracion_parametros = 225,   /* declaracion_parametros  */
  YYSYMBOL_declaracion_parametros_rep_comas = 226, /* declaracion_parametros_rep_comas  */
  YYSYMBOL_modo = 227,                     /* modo  */
  YYSYMBOL_tipo_resultado = 228,           /* tipo_resultado  */
  YYSYMBOL_cuerpo_subprograma = 229,       /* cuerpo_subprograma  */
  YYSYMBOL_cuerpo_subprograma_ast = 230,   /* cuerpo_subprograma_ast  */
  YYSYMBOL_instruccion = 231,              /* instruccion  */
  YYSYMBOL_instruccion_asignacion = 232,   /* instruccion_asignacion  */
  YYSYMBOL_op_asignacion = 233,            /* op_asignacion  */
  YYSYMBOL_instruccion_devolver = 234,     /* instruccion_devolver  */
  YYSYMBOL_instruccion_llamada = 235,      /* instruccion_llamada  */
  YYSYMBOL_llamada_subprograma = 236,      /* llamada_subprograma  */
  YYSYMBOL_mi_llamada_subprograma = 237,   /* mi_llamada_subprograma  */
  YYSYMBOL_definicion_parametro = 238,     /* definicion_parametro  */
  YYSYMBOL_instruccion_rep = 239,          /* instruccion_rep  */
  YYSYMBOL_instruccion_si = 240,           /* instruccion_si  */
  YYSYMBOL_caso_rep = 241,                 /* caso_rep  */
  YYSYMBOL_instruccion_casos = 242,        /* instruccion_casos  */
  YYSYMBOL_caso = 243,                     /* caso  */
  YYSYMBOL_entrada_rep = 244,              /* entrada_rep  */
  YYSYMBOL_entradas = 245,                 /* entradas  */
  YYSYMBOL_entrada = 246,                  /* entrada  */
  YYSYMBOL_instruccion_bucle = 247,        /* instruccion_bucle  */
  YYSYMBOL_clausula_iteracion = 248,       /* clausula_iteracion  */
  YYSYMBOL_instruccion_interrupcion = 249, /* instruccion_interrupcion  */
  YYSYMBOL_cuando = 250,                   /* cuando  */
  YYSYMBOL_instruccion_lanzamiento_excepcion = 251, /* instruccion_lanzamiento_excepcion  */
  YYSYMBOL_instruccion_captura_excepcion = 252, /* instruccion_captura_excepcion  */
  YYSYMBOL_clausulas = 253,                /* clausulas  */
  YYSYMBOL_clausula_finalmente = 254,      /* clausula_finalmente  */
  YYSYMBOL_expresion = 255,                /* expresion  */
  YYSYMBOL_expresion_or = 256,             /* expresion_or  */
  YYSYMBOL_expresion_and = 257,            /* expresion_and  */
  YYSYMBOL_expresion_neg = 258,            /* expresion_neg  */
  YYSYMBOL_expresion_comparacion = 259,    /* expresion_comparacion  */
  YYSYMBOL_operador_comparacion = 260,     /* operador_comparacion  */
  YYSYMBOL_expresion_desp = 261,           /* expresion_desp  */
  YYSYMBOL_operador_desp = 262,            /* operador_desp  */
  YYSYMBOL_expresion_add = 263,            /* expresion_add  */
  YYSYMBOL_operador_add = 264,             /* operador_add  */
  YYSYMBOL_expresion_mult_div = 265,       /* expresion_mult_div  */
  YYSYMBOL_operador_mult_div = 266,        /* operador_mult_div  */
  YYSYMBOL_expresion_potencia = 267,       /* expresion_potencia  */
  YYSYMBOL_expresion_posfija = 268,        /* expresion_posfija  */
  YYSYMBOL_operador_posfijo = 269,         /* operador_posfijo  */
  YYSYMBOL_expresion_unaria = 270,         /* expresion_unaria  */
  YYSYMBOL_primario = 271,                 /* primario  */
  YYSYMBOL_literal = 272,                  /* literal  */
  YYSYMBOL_objeto = 273,                   /* objeto  */
  YYSYMBOL_campo_valor = 274               /* campo_valor  */
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
#define YYLAST   717

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  177
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  425

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
       0,    26,    26,    27,    30,    31,    34,    35,    38,    39,
      42,    43,    44,    47,    48,    51,    53,    54,    57,    59,
      60,    62,    63,    66,    67,    70,    72,    73,    76,    77,
      78,    85,    86,    87,    90,    91,    94,    94,   101,   102,
     105,   105,   105,   108,   109,   110,   111,   112,   115,   115,
     118,   118,   118,   118,   121,   122,   125,   126,   129,   132,
     134,   135,   138,   139,   142,   143,   146,   146,   146,   148,
     149,   152,   153,   155,   156,   163,   164,   165,   166,   168,
     169,   172,   175,   176,   179,   179,   182,   182,   182,   185,
     186,   187,   189,   190,   193,   193,   193,   193,   193,   193,
     200,   203,   204,   205,   206,   209,   212,   213,   216,   217,
     218,   219,   222,   223,   226,   226,   229,   232,   235,   236,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     255,   258,   258,   259,   259,   259,   259,   260,   260,   260,
     263,   264,   267,   270,   271,   274,   275,   278,   279,   282,
     283,   286,   287,   290,   291,   293,   296,   299,   300,   303,
     306,   307,   308,   311,   312,   315,   316,   317,   318,   319,
     320,   321,   324,   325,   326,   327,   328,   329,   332,   335,
     338,   343,   357,   366,   369,   370,   373,   374,   377,   378,
     381,   382,   385,   385,   385,   385,   385,   385,   388,   389,
     392,   392,   395,   396,   399,   399,   402,   403,   406,   406,
     406,   409,   410,   413,   414,   417,   417,   420,   421,   424,
     425,   426,   427,   428,   429,   430,   433,   433,   433,   433,
     433,   433,   436,   437,   438,   439,   456
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
  "campo_valor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-259)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-236)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     147,   -24,    18,    95,  -259,  -259,     7,    36,  -259,   114,
    -259,  -259,   -41,  -259,   165,    47,    62,  -259,  -259,   -42,
    -259,  -259,   116,   132,  -259,   -14,   -14,  -259,  -259,    96,
    -259,  -259,  -259,  -259,   389,  -259,  -259,   137,   100,    68,
     -27,  -259,  -259,   -14,   144,   491,   176,   124,   508,   508,
     125,  -259,   484,   170,   186,   508,   -84,    37,  -259,   389,
     154,  -259,  -259,  -259,  -259,   164,   153,  -259,  -259,  -259,
     389,  -259,  -259,  -259,   453,   173,  -259,  -259,   103,  -259,
     282,   172,  -259,   181,  -259,   282,   221,  -259,  -259,  -259,
    -259,   196,   238,   248,  -259,    58,  -259,  -259,     3,  -259,
    -259,  -259,   280,   284,  -259,  -259,  -259,  -259,  -259,  -259,
     508,   554,  -259,  -259,  -259,  -259,  -259,  -259,   110,  -259,
     324,   199,   200,  -259,  -259,    15,   -39,    63,   141,  -259,
     184,   117,  -259,  -259,   106,   333,     1,  -259,   261,    22,
      26,  -259,  -259,   508,   262,  -259,   294,   268,   269,     8,
     386,  -259,  -259,  -259,   281,  -259,  -259,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,   300,   508,   302,   508,  -259,  -259,
      11,   307,    24,   286,  -259,  -259,  -259,  -259,   315,  -259,
    -259,  -259,   283,   207,   508,   282,   282,  -259,   508,  -259,
    -259,   278,   295,  -259,    97,   267,  -259,  -259,   387,   508,
     508,   -39,  -259,  -259,    15,  -259,  -259,    15,  -259,  -259,
    -259,    15,    15,  -259,  -259,  -259,   336,   508,   253,   389,
     389,  -259,   282,   508,   282,   508,  -259,  -259,   -80,  -259,
    -259,   389,   288,  -259,   301,  -259,   -69,  -259,  -259,   398,
    -259,   233,   235,   316,  -259,  -259,  -259,   140,  -259,  -259,
    -259,     2,    59,  -259,   -32,  -259,     5,  -259,   -56,  -259,
     -34,   311,   212,   -45,  -259,  -259,  -259,    -3,   -77,   508,
     508,   309,   303,  -259,  -259,   327,   508,  -259,  -259,   353,
    -259,  -259,    30,  -259,   200,  -259,    63,   141,  -259,  -259,
     111,   247,   256,   296,   259,   317,   341,   298,  -259,   299,
     304,   328,  -259,   342,   389,   293,   508,   497,  -259,  -259,
    -259,  -259,  -259,    92,    59,  -259,   326,   447,  -259,   206,
    -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,   339,
    -259,  -259,   282,   508,   394,   343,  -259,  -259,  -259,   401,
     565,   377,  -259,   508,   508,  -259,  -259,  -259,   530,   331,
     463,  -259,   120,   167,   508,  -259,   351,   466,   508,   508,
    -259,   508,  -259,  -259,  -259,  -259,   465,   213,  -259,  -259,
    -259,   467,  -259,    79,  -259,   -25,  -259,  -259,  -259,  -259,
     373,   282,  -259,  -259,   361,  -259,   355,   365,   389,  -259,
    -259,   428,   378,  -259,  -259,   345,   379,  -259,   485,  -259,
    -259,   508,   381,   508,   402,   407,  -259,   508,   389,  -259,
     367,  -259,   508,  -259,   416,  -259,  -259,   508,   282,  -259,
    -259,  -259,  -259,  -259,  -259
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     2,     3,     0,     0,     1,     9,
      22,     5,   119,    18,     0,     0,     0,     8,     6,     0,
      35,    17,     0,     0,    21,    19,     0,    24,    28,     0,
      29,    30,    17,    17,     0,   118,    27,     0,     0,     0,
     104,   119,    23,    20,     0,    17,     0,     0,    17,    17,
       0,   129,    17,     0,     0,    17,     0,     0,    17,     0,
     232,   150,   120,   121,   122,     0,     0,   123,   124,   125,
       0,   126,   127,   128,     0,    15,    25,    17,     0,   107,
      17,   103,   102,     0,    34,    17,     0,    50,    51,    52,
      53,     0,     0,     0,    36,     0,    37,    40,    47,    41,
      42,    10,     0,     0,   227,   226,   230,   231,   228,   229,
      17,    17,   192,   193,   194,   195,   196,   197,    17,   232,
       0,   183,   185,   187,   189,    17,   191,   199,   203,   207,
     212,   214,   218,   219,   220,     0,     0,   140,     0,     0,
       0,   171,   173,    17,     0,   175,     0,     0,     0,     0,
       0,   142,   117,   149,     0,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,    17,     0,    17,    16,    26,
      93,     0,     0,     0,    66,    39,    67,    68,     0,   116,
     101,   100,     0,     0,    17,    17,    17,    32,    17,    48,
      49,     0,     0,    14,     0,     0,   188,   217,     0,    17,
      17,   190,   200,   201,    17,   204,   205,    17,   208,   209,
     210,    17,    17,   215,   216,   213,     0,    17,     0,     0,
       0,   141,    17,    17,    17,    17,   178,   172,     0,   177,
     179,     0,     0,   181,     0,   144,     0,   146,   147,     0,
     233,     0,     0,     0,    88,    87,    86,    93,    17,    90,
      89,    93,    93,    80,    93,    85,     0,    65,     0,    61,
       0,    74,     0,     0,    72,    38,   113,     0,     0,    17,
      17,    46,     0,    57,    58,     0,    17,    11,    12,     0,
     225,   158,     0,   154,   184,   186,   198,   202,   206,   211,
     221,     0,     0,     0,     0,     0,     0,     0,   166,     0,
     168,     0,   176,     0,   182,     0,    17,     0,   143,   164,
     234,   235,   130,    93,    93,    83,    17,     0,    79,    93,
      84,    97,    94,    95,    98,    99,    96,    92,    91,     0,
      60,    64,    17,    17,     0,     0,    71,   106,   105,     0,
      17,     0,    45,    17,    17,    33,    44,    13,    17,     0,
       0,   153,   222,   223,    17,   224,     0,     0,    17,    17,
     170,    17,   174,   180,   148,   145,     0,    93,    81,    82,
      78,     0,    59,     0,    73,     0,    70,   112,   114,   115,
     111,    17,    31,    43,     0,   162,   159,   161,     0,   155,
     236,     0,     0,   163,   165,   169,    55,    77,     0,    76,
      63,    17,     0,    17,   110,     0,   157,    17,   156,   152,
       0,   167,    17,    75,     0,    69,   109,    17,    17,   160,
     151,    54,    62,   108,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -259,  -259,  -259,  -259,  -259,   494,  -259,   -21,  -259,  -259,
    -259,  -259,   483,  -259,  -259,    73,   203,  -259,   -79,   219,
     432,   250,   330,   429,  -244,  -259,  -259,  -259,  -259,   260,
    -259,  -259,  -259,   180,  -258,  -259,  -230,   273,  -259,  -226,
    -259,   275,  -259,  -259,   271,  -259,  -259,  -259,  -259,  -259,
    -259,   450,   511,  -259,   -64,  -259,  -259,  -259,  -259,  -259,
    -259,   231,   -52,  -259,  -259,  -259,   274,  -259,  -259,  -259,
    -259,   417,  -259,   -53,  -259,  -259,  -259,  -259,    20,  -259,
     356,   358,   454,  -259,   441,  -259,   363,  -259,   366,  -259,
     130,  -259,  -259,  -259,   458,  -259,   -31,  -259
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,    11,    12,    17,   194,   119,    37,     5,
      13,    14,    25,    26,    38,    27,   249,    29,    95,   250,
      96,    97,   191,    98,   300,    99,   100,   174,   258,   259,
     260,   175,   176,   263,   264,   177,   251,   252,   316,   253,
     254,   255,   256,   327,    31,    41,    81,   178,   267,   268,
     381,    82,    18,    19,    61,    62,   167,    63,    64,    65,
     236,   237,    66,    67,   282,    68,   283,   348,   349,   386,
      69,    70,    71,   144,    72,    73,   232,   233,   301,   121,
     122,   123,   124,   125,   126,   204,   127,   207,   128,   211,
     129,   130,   215,   131,   132,   133,   134,   294
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   179,   153,    74,   147,   336,   182,   149,   321,   257,
     142,    46,    47,    60,   302,    48,   322,   313,   154,   339,
     261,   323,   319,    20,    94,   318,   342,   307,    74,   324,
     317,   331,   346,    20,   325,    74,   326,   148,    60,    74,
     261,     6,   104,   281,   244,    60,   245,   340,   246,    60,
      15,    20,   308,   244,    16,   245,   169,   246,   350,    94,
      22,    49,   143,   329,    94,   332,   143,    20,   120,   135,
      22,   247,   138,    50,   335,   141,    20,   105,   106,   107,
      23,   108,   109,     7,   367,   153,    34,   318,    22,   261,
     153,   337,    35,   318,   402,     8,    79,     9,    42,   383,
      80,   244,    51,   245,    22,   246,   273,   274,    23,   189,
     190,   170,   338,    22,    -7,   395,    42,   336,    74,   262,
     366,   202,   203,    74,    20,   248,    10,    23,    60,   110,
     195,   145,   146,    60,   244,    52,   245,   104,   246,    32,
      53,   318,    54,   297,    55,   299,   222,    53,   187,    54,
     224,    55,    56,    57,    33,    58,    59,    20,   231,   188,
      48,    22,   223,   226,    94,    94,   225,   295,   296,   400,
     238,    78,   105,   106,   107,   303,   108,   109,   118,   304,
     401,    39,   244,   143,   245,   241,   246,   243,    74,    74,
      76,   278,    44,   279,    22,    45,    77,    40,    60,    60,
      74,    94,    75,    94,   272,    20,    49,    86,   275,    84,
      60,    87,    88,    89,    90,   103,    91,    28,    50,    92,
      93,   171,    28,   172,   110,   205,   206,   315,    28,    28,
      20,   153,   153,    30,   371,   139,     1,   291,    30,     2,
     153,   398,    22,   298,    30,    30,    28,    51,   244,   136,
     245,   140,   246,   373,   248,   244,    15,   245,   151,   246,
      16,   380,    30,    21,    74,    74,   101,    22,   150,   102,
     168,    20,   152,    74,    60,    60,   216,   217,    20,   218,
      52,  -233,  -233,    60,  -233,   213,   214,    23,    48,   341,
    -234,  -234,    53,  -234,    54,   369,    55,    56,    57,    80,
      58,    59,   404,   181,   392,   208,   209,   210,    22,   239,
     184,    94,   270,   189,   190,    22,    86,   292,   293,    94,
      87,    88,    89,    90,    48,    74,   364,   238,   153,    87,
      88,    89,    90,   185,    49,    60,   408,  -235,  -235,   424,
    -235,   288,   289,   186,   153,   192,    50,   198,    48,   193,
     199,   212,   200,   374,   219,   221,   227,    74,    48,   228,
      94,    74,   229,   230,   384,   240,   242,    60,   387,   357,
      49,    60,   257,   356,   390,    51,   265,    74,   394,   391,
     266,   396,    50,   276,   269,    48,    86,    60,   280,   277,
      87,    88,    89,    90,    49,    91,    48,    94,    92,    93,
     281,   290,   306,   309,    49,   310,    50,   305,    52,   311,
     312,    51,   333,   104,   343,   344,    50,   345,   347,   352,
      53,   414,    54,   416,    55,    56,    57,   419,    58,    59,
     353,    49,   421,   355,   354,    51,   362,   423,   358,   359,
     361,   363,    49,    50,    52,    51,   360,   368,   105,   106,
     107,   234,   108,   109,    50,   370,    53,   372,    54,   261,
      55,    56,    57,   376,    58,    59,   377,   382,    52,   388,
     389,   393,    51,   397,   403,   399,   405,   407,    52,   406,
      53,   409,    54,    51,    55,    56,    57,   411,    58,    59,
      53,   412,    54,   413,    55,    56,    57,   410,    58,    59,
     110,   415,   418,   417,   420,    52,   422,   235,    24,    43,
     173,   104,   334,   271,   375,   183,    52,    53,   330,    54,
     314,    55,    56,    57,   104,    58,    59,   328,    53,   320,
      54,   180,    55,    56,    57,   104,    58,    59,   365,   111,
     112,   113,   114,   115,   116,   117,   105,   106,   107,   118,
     108,   109,    83,   220,   155,   284,   351,   104,   285,   105,
     106,   107,   234,   108,   109,   196,   201,   286,     0,   385,
     105,   106,   107,   287,   108,   109,   197,     0,   137,     0,
       0,   104,   156,   157,   158,   159,   160,   161,   162,   163,
       0,    85,   105,   106,   107,    86,   108,   109,   110,    87,
      88,    89,    90,     0,    91,     0,     0,    92,    93,     0,
       0,   110,     0,     0,     0,     0,   105,   106,   107,     0,
     108,   109,   110,   164,   165,     0,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   112,   113,
     114,   115,   116,   117,   110,     0,     0,   118,     0,     0,
     111,   112,   113,   114,   115,   116,   117,     0,     0,     0,
     118,   111,   112,   113,   114,   115,   116,   117,   110,    86,
       0,   118,     0,    87,    88,    89,    90,     0,    91,     0,
       0,    92,    93,   111,   112,   113,   114,   115,   116,   117,
     378,   379,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     114,   115,   116,   117,     0,     0,     0,   118
};

static const yytype_int16 yycheck[] =
{
      21,    80,    66,    34,    57,   263,    85,    59,     3,    65,
      94,    32,    33,    34,    94,     7,    11,   247,    70,    96,
      65,    16,   252,    65,    45,   251,   270,    96,    59,    24,
      28,    65,   276,    65,    29,    66,    31,    58,    59,    70,
      65,    65,    27,    13,    42,    66,    44,   124,    46,    70,
      91,    65,   121,    42,    95,    44,    77,    46,    28,    80,
     102,    53,   146,   119,    85,    99,   146,    65,    48,    49,
     102,    60,    52,    65,   119,    55,    65,    62,    63,    64,
     122,    66,    67,    65,   314,   149,   128,   313,   102,    65,
     154,    94,    19,   319,   119,     0,   123,    90,    25,   343,
     127,    42,    94,    44,   102,    46,   185,   186,   122,   106,
     107,     8,   115,   102,     0,   359,    43,   375,   149,    95,
      28,   160,   161,   154,    65,   114,    90,   122,   149,   114,
     110,    94,    95,   154,    42,   127,    44,    27,    46,    92,
     139,   367,   141,   222,   143,   224,   124,   139,    90,   141,
     124,   143,   144,   145,    92,   147,   148,    65,   150,   101,
       7,   102,   140,   143,   185,   186,   140,   219,   220,    90,
     150,   103,    62,    63,    64,   228,    66,    67,   163,   231,
     101,    65,    42,   146,    44,   165,    46,   167,   219,   220,
      90,    94,    96,    96,   102,    99,    96,    65,   219,   220,
     231,   222,    65,   224,   184,    65,    53,   104,   188,    65,
     231,   108,   109,   110,   111,    91,   113,    14,    65,   116,
     117,   118,    19,   120,   114,   162,   163,   248,    25,    26,
      65,   295,   296,    14,    28,    65,    89,   217,    19,    92,
     304,    28,   102,   223,    25,    26,    43,    94,    42,   124,
      44,    65,    46,   332,   114,    42,    91,    44,    94,    46,
      95,   340,    43,    98,   295,   296,    90,   102,   114,    93,
      97,    65,   119,   304,   295,   296,   170,   171,    65,   173,
     127,   170,   171,   304,   173,   168,   169,   122,     7,   269,
     170,   171,   139,   173,   141,   316,   143,   144,   145,   127,
     147,   148,   381,   122,   356,   164,   165,   166,   102,    28,
     114,   332,   105,   106,   107,   102,   104,    64,    65,   340,
     108,   109,   110,   111,     7,   356,   306,   307,   392,   108,
     109,   110,   111,    95,    53,   356,   388,   170,   171,   418,
     173,   211,   212,    95,   408,    65,    65,    23,     7,    65,
     151,   167,   152,   333,    21,    94,    94,   388,     7,    65,
     381,   392,    94,    94,   344,    65,    64,   388,   348,    28,
      53,   392,    65,    56,   354,    94,    90,   408,   358,    28,
      65,   361,    65,   105,   101,     7,   104,   408,   121,    94,
     108,   109,   110,   111,    53,   113,     7,   418,   116,   117,
      13,    65,   101,     5,    53,   172,    65,   119,   127,   174,
      94,    94,   101,    27,   105,   112,    65,    90,    65,   172,
     139,   401,   141,   403,   143,   144,   145,   407,   147,   148,
     174,    53,   412,   174,   138,    94,    94,   417,   140,   140,
     112,   148,    53,    65,   127,    94,   142,   121,    62,    63,
      64,    65,    66,    67,    65,     8,   139,   118,   141,    65,
     143,   144,   145,   120,   147,   148,    65,    90,   127,   138,
       7,     5,    94,     8,   101,     8,   115,   112,   127,   124,
     139,    53,   141,    94,   143,   144,   145,   142,   147,   148,
     139,   112,   141,     8,   143,   144,   145,   119,   147,   148,
     114,   120,    95,   101,   137,   127,    90,   121,    14,    26,
      78,    27,   262,   183,   334,    86,   127,   139,   258,   141,
     247,   143,   144,   145,    27,   147,   148,   256,   139,   254,
     141,    81,   143,   144,   145,    27,   147,   148,   307,   153,
     154,   155,   156,   157,   158,   159,    62,    63,    64,   163,
      66,    67,    41,   136,   101,   199,   282,    27,   200,    62,
      63,    64,    65,    66,    67,   111,   125,   204,    -1,    39,
      62,    63,    64,   207,    66,    67,   118,    -1,    94,    -1,
      -1,    27,   129,   130,   131,   132,   133,   134,   135,   136,
      -1,   100,    62,    63,    64,   104,    66,    67,   114,   108,
     109,   110,   111,    -1,   113,    -1,    -1,   116,   117,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,
      66,    67,   114,   170,   171,    -1,   173,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,   154,   155,
     156,   157,   158,   159,   114,    -1,    -1,   163,    -1,    -1,
     153,   154,   155,   156,   157,   158,   159,    -1,    -1,    -1,
     163,   153,   154,   155,   156,   157,   158,   159,   114,   104,
      -1,   163,    -1,   108,   109,   110,   111,    -1,   113,    -1,
      -1,   116,   117,   153,   154,   155,   156,   157,   158,   159,
     125,   126,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,   155,
     156,   157,   158,   159,    -1,    -1,    -1,   163
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    89,    92,   178,   179,   186,    65,    65,     0,    90,
      90,   180,   181,   187,   188,    91,    95,   182,   229,   230,
      65,    98,   102,   122,   182,   189,   190,   192,   193,   194,
     196,   221,    92,    92,   128,   192,   184,   185,   191,    65,
      65,   222,   192,   189,    96,    99,   184,   184,     7,    53,
      65,    94,   127,   139,   141,   143,   144,   145,   147,   148,
     184,   231,   232,   234,   235,   236,   239,   240,   242,   247,
     248,   249,   251,   252,   273,    65,    90,    96,   103,   123,
     127,   223,   228,   229,    65,   100,   104,   108,   109,   110,
     111,   113,   116,   117,   184,   195,   197,   198,   200,   202,
     203,    90,    93,    91,    27,    62,    63,    64,    66,    67,
     114,   153,   154,   155,   156,   157,   158,   159,   163,   184,
     255,   256,   257,   258,   259,   260,   261,   263,   265,   267,
     268,   270,   271,   272,   273,   255,   124,    94,   255,    65,
      65,   255,    94,   146,   250,    94,    95,   250,   184,   239,
     114,    94,   119,   231,   239,   101,   129,   130,   131,   132,
     133,   134,   135,   136,   170,   171,   173,   233,    97,   184,
       8,   118,   120,   197,   204,   208,   209,   212,   224,   195,
     228,   122,   195,   200,   114,    95,    95,    90,   101,   106,
     107,   199,    65,    65,   183,   255,   259,   271,    23,   151,
     152,   261,   160,   161,   262,   162,   163,   264,   164,   165,
     166,   266,   167,   168,   169,   269,   170,   171,   173,    21,
     248,    94,   124,   140,   124,   140,   255,    94,    65,    94,
      94,   150,   253,   254,    65,   121,   237,   238,   255,    28,
      65,   255,    64,   255,    42,    44,    46,    60,   114,   193,
     196,   213,   214,   216,   217,   218,   219,    65,   205,   206,
     207,    65,    95,   210,   211,    90,    65,   225,   226,   101,
     105,   199,   255,   195,   195,   255,   105,    94,    94,    96,
     121,    13,   241,   243,   257,   258,   263,   265,   267,   267,
      65,   255,    64,    65,   274,   239,   239,   195,   255,   195,
     201,   255,    94,   250,   239,   119,   101,    96,   121,     5,
     172,   174,    94,   213,   214,   184,   215,    28,   216,   213,
     218,     3,    11,    16,    24,    29,    31,   220,   221,   119,
     206,    65,    99,   101,   198,   119,   211,    94,   115,    96,
     124,   255,   201,   105,   112,    90,   201,    65,   244,   245,
      28,   243,   172,   174,   138,   174,    56,    28,   140,   140,
     142,   112,    94,   148,   255,   238,    28,   213,   121,   184,
       8,    28,   118,   195,   255,   210,   120,    65,   125,   126,
     195,   227,    90,   201,   255,    39,   246,   255,   138,     7,
     255,    28,   239,     5,   255,   201,   255,     8,    28,     8,
      90,   101,   119,   101,   195,   115,   124,   112,   239,    53,
     119,   142,   112,     8,   255,   120,   255,   101,    95,   255,
     137,   255,    90,   255,   195
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   177,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   182,   183,   183,   184,   185,   185,   186,   187,
     187,   188,   188,   189,   189,   190,   191,   191,   192,   192,
     192,   193,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   197,   198,   198,   198,   198,   198,   199,   199,
     200,   200,   200,   200,   201,   201,   202,   202,   203,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   212,   212,   212,   213,
     213,   214,   215,   215,   216,   216,   217,   217,   217,   218,
     218,   218,   219,   219,   220,   220,   220,   220,   220,   220,
     221,   222,   222,   222,   222,   223,   224,   224,   225,   225,
     225,   225,   226,   226,   227,   227,   228,   229,   230,   230,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     232,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     234,   234,   235,   236,   236,   237,   237,   238,   238,   239,
     239,   240,   240,   241,   241,   242,   243,   244,   244,   245,
     246,   246,   246,   247,   247,   248,   248,   248,   248,   248,
     248,   248,   249,   249,   249,   249,   249,   249,   250,   251,
     252,   253,   254,   255,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   260,   260,   260,   260,   260,   261,   261,
     262,   262,   263,   263,   264,   264,   265,   265,   266,   266,
     266,   267,   267,   268,   268,   269,   269,   270,   270,   271,
     271,   271,   271,   271,   271,   271,   272,   272,   272,   272,
     272,   272,   273,   273,   273,   273,   274
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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

#line 1754 "chusco.tab.c"

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

#line 459 "chusco.y"


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
