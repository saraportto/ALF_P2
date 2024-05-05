/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_CHUSCO_TAB_H_INCLUDED
# define YY_YY_CHUSCO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ABSTRACTO = 258,               /* ABSTRACTO  */
    BOOLEANO = 259,                /* BOOLEANO  */
    BUCLE = 260,                   /* BUCLE  */
    CARACTER = 261,                /* CARACTER  */
    CASOS = 262,                   /* CASOS  */
    CLASE = 263,                   /* CLASE  */
    COMO = 264,                    /* COMO  */
    CONSTANTE = 265,               /* CONSTANTE  */
    CONSTRUCTOR = 266,             /* CONSTRUCTOR  */
    CORTO = 267,                   /* CORTO  */
    CUANDO = 268,                  /* CUANDO  */
    DE = 269,                      /* DE  */
    DESCENDENTE = 270,             /* DESCENDENTE  */
    DESTRUCTOR = 271,              /* DESTRUCTOR  */
    DEVOLVER = 272,                /* DEVOLVER  */
    DICCIONARIO = 273,             /* DICCIONARIO  */
    EN = 274,                      /* EN  */
    ENTERO = 275,                  /* ENTERO  */
    ENTONCES = 276,                /* ENTONCES  */
    ENUMERACION = 277,             /* ENUMERACION  */
    ES = 278,                      /* ES  */
    ESPECIFICO = 279,              /* ESPECIFICO  */
    EXCEPCION = 280,               /* EXCEPCION  */
    EXPORTAR = 281,                /* EXPORTAR  */
    FALSO = 282,                   /* FALSO  */
    FIN = 283,                     /* FIN  */
    FINAL = 284,                   /* FINAL  */
    FINALMENTE = 285,              /* FINALMENTE  */
    GENERICO = 286,                /* GENERICO  */
    IMPORTAR = 287,                /* IMPORTAR  */
    LARGO = 288,                   /* LARGO  */
    LANZA = 289,                   /* LANZA  */
    LIBRERIA = 290,                /* LIBRERIA  */
    LISTA = 291,                   /* LISTA  */
    MIENTRAS = 292,                /* MIENTRAS  */
    OBJETO = 293,                  /* OBJETO  */
    OTRO = 294,                    /* OTRO  */
    PARA = 295,                    /* PARA  */
    PRINCIPIO = 296,               /* PRINCIPIO  */
    PRIVADO = 297,                 /* PRIVADO  */
    PROGRAMA = 298,                /* PROGRAMA  */
    PROTEGIDO = 299,               /* PROTEGIDO  */
    PRUEBA = 300,                  /* PRUEBA  */
    PUBLICO = 301,                 /* PUBLICO  */
    RANGO = 302,                   /* RANGO  */
    REAL = 303,                    /* REAL  */
    REFERENCIA = 304,              /* REFERENCIA  */
    REGISTRO = 305,                /* REGISTRO  */
    REPETIR = 306,                 /* REPETIR  */
    SALIR = 307,                   /* SALIR  */
    SI = 308,                      /* SI  */
    SIGNO = 309,                   /* SIGNO  */
    SIGUIENTE = 310,               /* SIGUIENTE  */
    SINO = 311,                    /* SINO  */
    SUBPROGRAMA = 312,             /* SUBPROGRAMA  */
    TABLA = 313,                   /* TABLA  */
    TIPO = 314,                    /* TIPO  */
    ULTIMA = 315,                  /* ULTIMA  */
    VALOR = 316,                   /* VALOR  */
    VERDADERO = 317,               /* VERDADERO  */
    CTC_CARACTER = 318,            /* CTC_CARACTER  */
    CTC_CADENA = 319,              /* CTC_CADENA  */
    IDENTIFICADOR = 320,           /* IDENTIFICADOR  */
    CTC_ENTERA = 321,              /* CTC_ENTERA  */
    CTC_REAL = 322,                /* CTC_REAL  */
    DOS_PUNTOS = 323,              /* DOS_PUNTOS  */
    CUATRO_PUNTOS = 324,           /* CUATRO_PUNTOS  */
    ASIGNACION = 325,              /* ASIGNACION  */
    FLECHA = 326,                  /* FLECHA  */
    INC = 327,                     /* INC  */
    DEC = 328,                     /* DEC  */
    DESPI = 329,                   /* DESPI  */
    DESPD = 330,                   /* DESPD  */
    LEQ = 331,                     /* LEQ  */
    GEQ = 332,                     /* GEQ  */
    NEQ = 333,                     /* NEQ  */
    AND = 334,                     /* AND  */
    OR = 335,                      /* OR  */
    ASIG_SUMA = 336,               /* ASIG_SUMA  */
    ASIG_RESTA = 337,              /* ASIG_RESTA  */
    ASIG_MULT = 338,               /* ASIG_MULT  */
    ASIG_DIV = 339,                /* ASIG_DIV  */
    ASIG_RESTO = 340,              /* ASIG_RESTO  */
    ASIG_POT = 341,                /* ASIG_POT  */
    ASIG_DESPI = 342,              /* ASIG_DESPI  */
    ASIG_DESPD = 343               /* ASIG_DESPD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_CHUSCO_TAB_H_INCLUDED  */
