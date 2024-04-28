%{
#include <stdio.h>
#define YYDEBUG 1

extern FILE *yyin;
extern int yylex();

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

instruccion : instruccion_asignacion
              | instruccion_devolver
              | instruccion_llamada
              | instruccion_si
              | instruccion_casos
              | instruccion_bucle
              | instruccion_interrupcion
              | instruccion_lanzamiento_excepcion
              | instruccion_captura_excepcion
              | ";"
    ;

instruccion_asignacion : objeto op_asignacion expresion ";"
    ;

op_asignacion : ":=" | ":+"
              | ":-" | ":*" | ":/" | ":\\"
              | ":^" | ":<" | ":>"
    ;

instruccion_devolver : "devolver" [ expresion ]? ";"
    ;

instruccion_llamada : llamada_subprograma ";"
    ;

llamada_subprograma : nombre "(" ( definicion_parametro )* ")"
    ;

definicion_parametro : [ IDENTIFICADOR ":=" ]? expresion
    ;

instruccion_si : "si" expresion "entonces" [ instruccion ]+
                    [ "sino" [ instruccion ]+ ]? "fin" "si"
    ;

instruccion_casos : "casos" expresion "es" [ caso ]+ "fin" "casos"
    ;

caso : "cuando" entradas "=>" [ instruccion ]+
    ;

entradas : [ entrada ":" ]* entrada
    ;

entrada : expresion [ ".." expresion ]? | "otro"
    ;

instruccion_bucle : [ IDENTIFICADOR ":" ]? clausula_iteracion [ instruccion ]+ "fin" "bucle"
    ;

clausula_iteracion : "para" IDENTIFICADOR [ ":" especificacion_tipo ]? "en" expresion
                    | "repetir" IDENTIFICADOR [ ":" especificacion_tipo ]?
                      "en" rango [ "descendente" ]?
                    | "mientras" expresion
    ;

instruccion_interrupcion : "siguiente" [ cuando ]? ";"
                            | "salir" [ "de" IDENTIFICADOR ]? [ cuando ]? ";"
    ;

cuando : "cuando" expresion
    ;

instruccion_lanzamiento_excepcion : "lanza" nombre ";"
    ;

instruccion_captura_excepcion : "prueba" [ instruccion ]+ clausulas "fin" "prueba"
    ;

clausulas : clausulas_excepcion [ clausula_finalmente ]?
            | clausula_finalmente
    ;

clausulas_excepcion : [ clausula_excepcion_especifica ]* clausula_excepcion_general
    ;

clausula_excepcion_especifica : "excepcion" "(" nombre ")" [ instruccion ]+
    ;

clausula_excepcion_general : "excepcion" [ instruccion ]+
    ;

clausula_finalmente : "finalmente" [ instruccion ]+
    ;




/***************/
/* expresiones */
/***************/

expresion : expresion_or
    ;

expresion_or : expresion_or "\\/" expresion_and
    | expresion_and
    ;

expresion_and : expresion_and "/\\" expresion_neg
    | expresion_neg
    ;

expresion_neg : '~' expresion_comparacion
    | expresion_comparacion
    ;

expresion_comparacion : operador_comparacion expresion_desp
    | expresion_desp
    ;

operador_comparacion : '<' | '>' | "<=" | ">=" | '=' | "~="
    ;

expresion_desp : expresion_desp operador_desp expresion_add
    | expresion_add
    ;

operador_desp : "<-" | "->"
    ;

expresion_add : expresion_add operador_add expresion_mult_div
    | expresion_mult_div
    ;

operador_add : '+' | '-'
    ;

expresion_mult_div : expresion_mult_div operador_mult_div expresion_potencia
    | expresion_potencia
    ;

operador_mult_div : '*' | '/' | '\\' 
    ;

expresion_potencia : expresion_posfija '^' expresion_potencia
    | expresion_posfija
    ;

expresion_posfija : expresion_unaria operador_posfijo
    | expresion_unaria
    ;

operador_posfijo : "++" | "--"
    ;

expresion_unaria : '-' primario
    | primario
    ;

primario : literal
    | objeto
    | objeto '.' IDENTIFICADOR
    | objeto '[' expresion ']'
    | objeto '{' CTC_CADENA '}'
    | objeto '{' campo_valor '}'
    | '(' expresion ')'
    ;

literal : VERDADERO | FALSO | CTC_ENTERA | CTC_REAL | CTC_CARACTER | CTC_CADENA
    ;

objeto : nombre
    | objeto '.' IDENTIFICADOR
    | objeto '[' expresion ']'
    | objeto '{' CTC_CADENA '}'
    ;

enumeraciones : '[' expresion_condicional clausula_iteracion ']'
    | '[' expresion ']'
    | '{' clave_valor '}'
    | '{' campo_valor '}'
    ;

expresion_condicional : expresion
    | "si" expresion "entonces" expresion "sino" expresion
    | "si" expresion "entonces" expresion
    ;

clave_valor : CTC_CADENA "=>" expresion
    ;

campo_valor : IDENTIFICADOR "=>" expresion
    ;

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
