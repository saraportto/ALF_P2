%option yylineno
%option case-insensitive
%{
#include <stdio.h>
#include <stdlib.h>
#include "chusco.h"
#include "chusco.tab.h"
%}

%%

"abstracto"                                       { printf("linea %d, palabra reservada: ABSTRACTO\n", yylineno); return ABSTRACTO; }
"booleano"                                        { printf("linea %d, palabra reservada: BOOLEANO\n", yylineno); return BOOLEANO; }
"bucle"                                           { printf("linea %d, palabra reservada: BUCLE\n", yylineno); return BUCLE; }
"caracter"                                        { printf("linea %d, palabra reservada: CARACTER\n", yylineno); return CARACTER; }
"casos"                                           { printf("linea %d, palabra reservada: CASOS\n", yylineno); return CASOS; }
"clase"                                           { printf("linea %d, palabra reservada: CLASE\n", yylineno); return CLASE; }
"como"                                            { printf("linea %d, palabra reservada: COMO\n", yylineno); return COMO; }
"constante"                                       { printf("linea %d, palabra reservada: CONSTANTE\n", yylineno); return CONSTANTE; }
"constructor"                                     { printf("linea %d, palabra reservada: CONSTRUCTOR\n", yylineno); return CONSTRUCTOR; }
"corto"                                           { printf("linea %d, palabra reservada: CORTO\n", yylineno); return CORTO; }
"cuando"                                          { printf("linea %d, palabra reservada: CUANDO\n", yylineno); return CUANDO; }
"de"                                              { printf("linea %d, palabra reservada: DE\n", yylineno); return DE; }
"descendente"                                     { printf("linea %d, palabra reservada: DESCENDENTE\n", yylineno); return DESCENDENTE; }
"destructor"                                      { printf("linea %d, palabra reservada: DESTRUCTOR\n", yylineno); return DESTRUCTOR; }
"devolver"                                        { printf("linea %d, palabra reservada: DEVOLVER\n", yylineno); return DEVOLVER; }
"diccionario"                                     { printf("linea %d, palabra reservada: DICCIONARIO\n", yylineno); return DICCIONARIO; }
"en"                                              { printf("linea %d, palabra reservada: EN\n", yylineno); return EN; }
"entero"                                          { printf("linea %d, palabra reservada: ENTERO\n", yylineno); return ENTERO; }
"entonces"                                        { printf("linea %d, palabra reservada: ENTONCES\n", yylineno); return ENTONCES; }
"enumeracion"                                     { printf("linea %d, palabra reservada: ENUMERACION\n", yylineno); return ENUMERACION; }
"es"                                              { printf("linea %d, palabra reservada: ES\n", yylineno); return ES; }
"especifico"                                      { printf("linea %d, palabra reservada: ESPECIFICO\n", yylineno); return ESPECIFICO; }
"excepcion"                                       { printf("linea %d, palabra reservada: EXCEPCION\n", yylineno); return EXCEPCION; }
"exportar"                                        { printf("linea %d, palabra reservada: EXPORTAR\n", yylineno); return EXPORTAR; }
"falso"                                           { printf("linea %d, palabra reservada: FALSO\n", yylineno); return FALSO; }
"fin"                                             { printf("linea %d, palabra reservada: FIN\n", yylineno); return FIN; }
"final"                                           { printf("linea %d, palabra reservada: FINAL\n", yylineno); return FINAL; }
"finalmente"                                      { printf("linea %d, palabra reservada: FINALMENTE\n", yylineno); return FINALMENTE; }
"generico"                                        { printf("linea %d, palabra reservada: GENERICO\n", yylineno); return GENERICO; }
"importar"                                        { printf("linea %d, palabra reservada: IMPORTAR\n", yylineno); return IMPORTAR; }
"largo"                                           { printf("linea %d, palabra reservada: LARGO\n", yylineno); return LARGO; }
"lanza"                                           { printf("linea %d, palabra reservada: LANZA\n", yylineno); return LANZA; }
"libreria"                                        { printf("linea %d, palabra reservada: LIBRERIA\n", yylineno); return LIBRERIA; }
"lista"                                           { printf("linea %d, palabra reservada: LISTA\n", yylineno); return LISTA; }
"mientras"                                        { printf("linea %d, palabra reservada: MIENTRAS\n", yylineno); return MIENTRAS; }
"objeto"                                          { printf("linea %d, palabra reservada: OBJETO\n", yylineno); return OBJETO; }
"otro"                                            { printf("linea %d, palabra reservada: OTRO\n", yylineno); return OTRO; }
"para"                                            { printf("linea %d, palabra reservada: PARA\n", yylineno); return PARA; }
"principio"                                       { printf("linea %d, palabra reservada: PRINCIPIO\n", yylineno); return PRINCIPIO; }
"privado"                                         { printf("linea %d, palabra reservada: PRIVADO\n", yylineno); return PRIVADO; }
"programa"                                        { printf("linea %d, palabra reservada: PROGRAMA\n", yylineno); return PROGRAMA; }
"protegido"                                       { printf("linea %d, palabra reservada: PROTEGIDO\n", yylineno); return PROTEGIDO; }
"prueba"                                          { printf("linea %d, palabra reservada: PRUEBA\n", yylineno); return PRUEBA; }
"publico"                                         { printf("linea %d, palabra reservada: PUBLICO\n", yylineno); return PUBLICO; }
"rango"                                           { printf("linea %d, palabra reservada: RANGO\n", yylineno); return RANGO; }
"real"                                            { printf("linea %d, palabra reservada: REAL\n", yylineno); return REAL; }
"referencia"                                      { printf("linea %d, palabra reservada: REFERENCIA\n", yylineno); return REFERENCIA; }
"registro"                                        { printf("linea %d, palabra reservada: REGISTRO\n", yylineno); return REGISTRO; }
"repetir"                                         { printf("linea %d, palabra reservada: REPETIR\n", yylineno); return REPETIR; }
"salir"                                           { printf("linea %d, palabra reservada: SALIR\n", yylineno); return SALIR; }
"si"                                              { printf("linea %d, palabra reservada: SI\n", yylineno); return SI; }
"signo"                                           { printf("linea %d, palabra reservada: SIGNO\n", yylineno); return SIGNO; }
"siguiente"                                       { printf("linea %d, palabra reservada: SIGUIENTE\n", yylineno); return SIGUIENTE; }
"sino"                                            { printf("linea %d, palabra reservada: SINO\n", yylineno); return SINO; }
"subprograma"                                     { printf("linea %d, palabra reservada: SUBPROGRAMA\n", yylineno); return SUBPROGRAMA; }
"tabla"                                           { printf("linea %d, palabra reservada: TABLA\n", yylineno); return TABLA; }
"tipo"                                            { printf("linea %d, palabra reservada: TIPO\n", yylineno); return TIPO; }
"ultima"                                          { printf("linea %d, palabra reservada: ULTIMA\n", yylineno); return ULTIMA; }
"valor"                                           { printf("linea %d, palabra reservada: VALOR\n", yylineno); return VALOR; }
"verdadero"                                       { printf("linea %d, palabra reservada: VERDADERO\n", yylineno); return VERDADERO; }


\"(%['\"%nrt])*\"                                 { printf("linea %d, cadena: %s\n", yylineno, yytext); return CTC_CADENA; }
\"(%([01]?[0-9]{1,2}|2[0-4][0-9]|25[0-5]))*\"     { printf("linea %d, cadena: %s\n", yylineno, yytext); return CTC_CADENA; }
\"(%o[0-3]?[0-7]?[0-7])*\"                        { printf("linea %d, cadena: %s\n", yylineno, yytext); return CTC_CADENA; }
\"(%x[0-9a-f]?[0-9a-f])*\"                        { printf("linea %d, cadena: %s\n", yylineno, yytext); return CTC_CADENA; }
\"([^"]*(%\n)?)*\"                                { printf("linea %d, cadena: %s\n", yylineno, yytext); return CTC_CADENA; }
\".*\"                                            { printf("linea %d, cadena: %s\n", yylineno, yytext); return CTC_CADENA; }
\"([^\"\\]|\\.|\%\")*\"                           { printf("linea %d, cadena: %s\n", yylineno, yytext); return CTC_CADENA; }


'''                                               ;
'%'                                               ;
'\n'                                              ;


'%['"%nrt]'                                       { printf("linea %d, caracter: %s\n", yylineno, yytext); return CTC_CARACTER; }
'%([01]?[0-9]{1,2}|2[0-4][0-9]|25[0-5])'          { printf("linea %d, caracter: %s\n", yylineno, yytext); return CTC_CARACTER; }
'%o[0-3]?[0-7]?[0-7]'                             { printf("linea %d, caracter: %s\n", yylineno, yytext); return CTC_CARACTER; }
'%x[0-9a-f]?[0-9a-f]'                             { printf("linea %d, caracter: %s\n", yylineno, yytext); return CTC_CARACTER; }


'.'                                               { printf("linea %d, caracter: %s\n", yylineno, yytext); return CTC_CARACTER; }


"%o"                                              ;
"%x"                                              ;


"%o"[1-7]+                                        { printf("linea %d, ctc entero: %s\n", yylineno, yytext); return CTC_ENTERA; }
"%x"[0-9a-f]+                                     { printf("linea %d, ctc entero: %s\n", yylineno, yytext); return CTC_ENTERA; }
[0-9]+                                            { printf("linea %d, ctc entero: %s\n", yylineno, yytext); return CTC_ENTERA; }

"%o"[1-7]*("."[1-7]+)?("^"[+-]?[1-7]+)?           { printf("linea %d, ctc real: %s\n", yylineno, yytext); return CTC_REAL; }
"%x"[0-9a-f]*("."[0-9a-f]+)?("^"[+-]?[0-9a-f]+)?  { printf("linea %d, ctc real: %s\n", yylineno, yytext); return CTC_REAL; }
[0-9]*("."[0-9]+)?("^"[+-]?[0-9]+)?               { printf("linea %d, ctc real: %s\n", yylineno, yytext); return CTC_REAL; }


[0-9][[:alnum:]_]+                                ;
[[:alpha:]_][[:alnum:]_]*                         { printf("linea %d, Identificador: %s\n", yylineno, yytext); return IDENTIFICADOR; }


[ \t]+                                            { /* Ignorar espacios y tabulaciones */ }
\n                                                ;


[/\\\^]                                           { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
"*"                                               { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
"++"                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return INC; }
"+"                                               { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
"--"                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return DEC; }
"-"                                               { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
"->"                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return DESPD; }
"<-"                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return DESPI; }
":\*"                                             { printf("linea %d, operador: %s\n", yylineno, yytext); return ASIG_MULT; }
":="                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return ASIGNACION; }
":+"                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return ASIG_SUMA; }
":\^"                                             { printf("linea %d, operador: %s\n", yylineno, yytext); return ASIG_POT; }
":/"                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return ASIG_DIV; }
":\\"                                             { printf("linea %d, operador: %s\n", yylineno, yytext); return ASIG_RESTO; }
":-"                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return ASIG_RESTA; }
":<"                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return ASIG_DESPI; }
":>"                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return ASIG_DESPD; }
[\.\[\]\{\}]                                      { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
::                                                { printf("linea %d, operador: %s\n", yylineno, yytext); return CUATRO_PUNTOS; }
"<="                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return LEQ; }
"<"                                               { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
">="                                              { printf("linea %d, operador: %s\n", yylineno, yytext); return GEQ; }
">"                                               { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
=                                                 { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
~=                                                { printf("linea %d, operador: %s\n", yylineno, yytext); return NEQ;}
~                                                 { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
"/\\"                                             { printf("linea %d, operador: %s\n", yylineno, yytext); return AND; }
"\\/"                                             { printf("linea %d, operador: %s\n", yylineno, yytext); return OR; }


[():;,|]                                          { printf("linea %d, delimitador: %s\n", yylineno, yytext); return yytext[0]; }
=>                                                { printf("linea %d, delimitador: %s\n", yylineno, yytext); return FLECHA; }
\.\.                                              { printf("linea %d, delimitador: %s\n", yylineno, yytext); return DOS_PUNTOS; }


#\{([^#\{#\}]|\n)*#\}                             ;
##.*                                              ;


.                                                 { printf("linea %d, ERROR: %s\n", yylineno, yytext); }


%%

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("Uso: ./chusco NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    while (yylex());
    }
  }
