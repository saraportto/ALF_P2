/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

