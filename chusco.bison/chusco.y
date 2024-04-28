%{
#include <stdio.h>
#include "chusco.tab.h"
extern FILE *yyin;
extern int yylex();

#define YYDEBUG 1

%}

%token ABSTRACTO BOOLEANO BUCLE CARACTER CASOS CLASE COMO CONSTANTE CONSTRUCTOR CORTO
%token CUANDO DE DESCENDENTE DESTRUCTOR DEVOLVER DICCIONARIO EN ENTERO ENTONCES 
%token ENUMERACION ES ESPECIFICO EXCEPCION EXPORTAR FALSO FIN FINAL FINALMENTE GENERICO
%token IMPORTAR LARGO LANZA LIBRERIA LISTA MIENTRAS OBJETO OTRO PARA PRINCIPIO PRIVADO
%token PROGRAMA PROTEGIDO PRUEBA PUBLICO RANGO REAL REFERENCIA REGISTRO REPETIR SALIR
%token SI SIGNO SIGUIENTE SINO SUBPROGRAMA TABLA TIPO ULTIMA VALOR VERDADERO CTC_CARACTER
%token CTC_CADENA IDENTIFICADOR CTC_ENTERA CTC_REAL DOS_PUNTOS CUATRO_PUNTOS
%token ASIGNACION FLECHA INC DEC DESPI DESPD LEQ GEQ NEQ AND OR ASIG_SUMA ASIG_RESTA
%token ASIG_MULT ASIG_DIV ASIG_RESTO ASIG_POT ASIG_DESPI ASIG_DESPD

%%

/************/
/* programa */
/************/


/**************************/
/* declaracion de objetos */
/**************************/


/************************/
/* declaracion de tipos */
/************************/


/*************************/
/* declaracion de clases */
/*************************/


/*******************************/
/* declaracion de subprogramas */
/*******************************/


/*****************/
/* instrucciones */
/*****************/


/***************/
/* expresiones */
/***************/

expresion_potencia ::= expresion_posfija [ ’^’ expresion_potencia ]?

expresion_posfija ::= expresion_unaria [ operador_posfijo ]?

operador_posfijo ::= ’++’ | ’--’

expresion_unaria ::= [ ’-’ ]? primario

primario ::= literal
           | objeto
           | [ ’objeto’ ]? llamada_subprograma
           | enumeraciones
           | ’(’ expresion ’)’

literal ::= VERDADERO | FALSO | CTC_ENTERA | CTC_REAL | CTC_CARACTER | CTC_CADENA

objeto ::= nombre
         | objeto ’.’ IDENTIFICADOR
         | objeto ’[’ ( expresion )+ ’]’
         | objeto ’{’ ( CTC_CADENA )+ ’}’

enumeraciones ::= ’[’ expresion_condicional [ clausula_iteracion ]+ ’]’
                | ’[’ ( expresion )+ ’]’
                | ’{’ ( clave_valor )+ ’}’
                | ’{’ ( campo_valor )+ ’}’

expresion_condicional ::= expresion
                        | ’si’ expresion ’entonces’ expresion [ ’sino’ expresion ]?

clave_valor ::= CTC_CADENA ’=>’ expresion

campo_valor ::= IDENTIFICADOR ’=>’ expresion

%%

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
