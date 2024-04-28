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

programa : definicion_programa 
    | definicion_libreria
    ;

definicion_programa :
    |"programa" IDENTIFICADOR ';' codigo_programa
    ;

codigo_programa : codigo_programa_ast cuerpo_subprograma
    |
    ;

codigo_programa_ast : codigo_programa_ast libreria
    |
    ;

libreria : "importar" "libreria" nombre ';'
    |"importar" "libreria" nombre "como" IDENTIFICADOR ";"
    | "de" "libreria" nombre "importar" libreria_rep_comas ";"
    ;

libreria_rep_comas: libreria_rep_comas ',' IDENTIFICADOR
    | IDENTIFICADOR
    ;

nombre : nombre_ast IDENTIFICADOR

nombre_ast : nombre_ast IDENTIFICADOR "::"
    |
    ;

definicion_libreria : "libreria" IDENTIFICADOR ';' codigo_libreria

codigo_libreria : codigo_libreria_ast codigo_libreria_rep
    | codigo_libreria_ast exportaciones codigo_libreria_rep

codigo_libreria_ast : codigo_libreria_ast libreria
    | 
    ;

codigo_libreria_rep : codigo_libreria_rep declaracion
    | declaracion
    ;

exportaciones : "exportar" exportaciones_rep_comas ';'

exportaciones_rep_comas : exportaciones_rep_comas ',' nombre
    | nombre
    ;

declaracion : declaracion_objeto 
    | declaracion_tipo 
    | declaracion_subprograma
    ;

/**************************/
/* declaracion de objetos */
/**************************/

declaracion_objeto : declaracion_objeto_rep_comas ':' "constante" especificacion_tipo ":=" expresion ';'
                    | declaracion_objeto_rep_comas ':' especificacion_tipo ';'
                    | declaracion_objeto_rep_comas ':' especificacion_tipo ":=" expresion ';'
    ;

declaracion_objeto_rep_comas : declaracion_objeto_rep_comas ',' IDENTIFICADOR
    | IDENTIFICADOR
    ;

especificacion_tipo : nombre | tipo_no_estructurado
    ;

/************************/
/* declaracion de tipos */
/************************/

declaracion_tipo : "tipo" IDENTIFICADOR "es" tipo_no_estructurado ';'
                    | "tipo" IDENTIFICADOR "es" tipo_estructurado
    ;

tipo_no_estructurado : tipo_escalar | tipo_tabla | tipo_diccionario
    ;

tipo_escalar : "signo" tipo_basico  longitud "rango" rango
	| tipo_basico longitud  "rango" rango 
	| "signo"  tipo_basico  "rango" rango
	| "signo"  tipo_basico longitud
	| tipo_basico
    ;

longitud : "corto" | "largo"
    ;

tipo_basico : "booleano" | "caracter" | "entero" | "real"
    ;

rango : expresion ".." expresion ".." expresion
| expresion ".." expresion
    ;

tipo_tabla : "tabla" '(' expresion ".." expresion ")" "de" especificacion_tipo
              | "lista" "de" especificacion_tipo
    ;

tipo_diccionario : "diccionario" "de" especificacion_tipo
    ;

tipo_registro : "registro" campo_rep "fin" "registro";

campo_rep : campo_rep campo
	| campo
	;
	
campo : identificador_rep ':' especificacion_tipo ":=" expresion ';' 
	| identificador_rep ':' especificacion_tipo ';'
	;
	
identificador_rep : identificador_rep IDENTIFICADOR
		| IDENTIFICADOR
		;

tipo_estructurado : tipo_registro | tipo_enumerado | clase ;

tipo_enumerado: "enumeracion" "de" tipo_escalar elemento_enumeracion_rep "fin" "enumeracion"
	| "enumeracion" elemento_enumeracion_rep "fin" "enumeracion"
	;

elemento_enumeracion_rep : elemento_enumeracion_rep elemento_enumeracion
			| elemento_enumeracion
			;
elemento_enumeracion : IDENTIFICADOR ":=" expresion
		| IDENTIFICADOR
		;

/*************************/
/* declaracion de clases */
/*************************/

clase : CLASE ULTIMA superclases declaracion_componente_rep FIN CLASE 
	| CLASE superclases declaracion_componente_rep FIN CLASE 
	| CLASE ULTIMA  declaracion_componente_rep FIN CLASE
	| CLASE declaracion_componente_rep FIN CLASE
    ;
declaracion_componente_rep : declaracion_componente_rep declaracion_componente
			| declaracion_componente
			;

superclases : '(' nombre_rep ')'
    ;

nombre_rep : nombre_rep nombre
	| nombre
	;

declaracion_componente : visibilidad  componente | componente
    ;

visibilidad : PUBLICO | PROTEGIDO | PRIVADO
    ;

componente : declaracion_tipo
              | declaracion_objeto
              | modificador_asterisco declaracion_subprograma
    ;
modificador_asterisco : modificador_asterisco modificador 
		|
		;

modificador : CONSTRUCTOR | DESTRUCTOR | GENERICO | ABSTRACTO | ESPECIFICO | FINAL
    ;

/*******************************/
/* declaracion de subprogramas */
/*******************************/

declaracion_subprograma : "subprograma" cabecera_subprograma cuerpo_subprograma "subprograma"
    ;

cabecera_subprograma : IDENTIFICADOR parametrizacion tipo_resultado
    | IDENTIFICADOR tipo_resultado
    | IDENTIFICADOR parametrizacion
    | IDENTIFICADOR
    ;

parametrizacion : "(" parametrizacion_rep_ast declaracion_parametros ")"
    ;

parametrizacion_rep_ast : parametrizacion_rep_ast declaracion_parametros ";"
    |
    ;

declaracion_parametros : declaracion_parametros_rep_comas ":" modo especificacion_tipo ":=" expresion
    | declaracion_parametros_rep_comas ":" especificacion_tipo ":=" expresion
    | declaracion_parametros_rep_comas ":" modo especificacion_tipo
    | declaracion_parametros_rep_comas ":" especificacion_tipo
    ;

declaracion_parametros_rep_comas : declaracion_parametros_rep_comas ',' IDENTIFICADOR
    | IDENTIFICADOR
    ;

modo : "valor" | "referencia"
    ;

tipo_resultado : "devolver" especificacion_tipo
    ;

cuerpo_subprograma : cuerpo_subprograma_ast "principio" instruccion_rep "fin"
    ;

cuerpo_subprograma_ast : cuerpo_subprograma_ast declaracion
    |
    ;

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

instruccion_devolver : "devolver" ";"
              | "devolver" expresion ";"
    ;

instruccion_llamada : llamada_subprograma ";"
    ;

llamada_subprograma : nombre '(' mi_llamada_subprograma ')'
              | nombre '(' ')'
    ;

mi_llamada_subprograma : mi_llamada_subprograma ',' definicion_parametro
              | definicion_parametro
    ;

definicion_parametro : expresion
              | IDENTIFICADOR ":=" expresion
    ;

instruccion_rep : instruccion_rep instruccion
              | instruccion
    ;

instruccion_si : SI expresion ENTONCES instruccion_rep SINO instruccion_rep "fin" "si"
              | SI expresion ENTONCES instruccion_rep SINO FIN SI
    ;

caso_rep : caso_rep caso
              | caso

instruccion_casos : CASOS expresion ES caso_rep FIN CASOS
    ;

caso : CUANDO entradas "=>" instruccion_rep
    ;

entrada_rep : entrada_rep entrada ":"
              |
    ;

entradas : entrada_rep entrada
    ;

entrada : expresion ".." expresion
              | expresion
              | OTRO
    ;

instruccion_bucle : IDENTIFICADOR ":" clausula_iteracion instruccion_rep FIN BUCLE
              | clausula_iteracion instruccion_rep FIN BUCLE
    ;

clausula_iteracion : "para" IDENTIFICADOR ":" especificacion_tipo "en" expresion
              | "para" IDENTIFICADOR "en" expresion
              | "repetir" IDENTIFICADOR ":" especificacion_tipo "en" rango "descendente"
              | "repetir" IDENTIFICADOR "en" rango
              | "repetir" IDENTIFICADOR ":" especificacion_tipo "en" rango
              | "repetir" IDENTIFICADOR "en" rango "descendente"
              | "mientras" expresion
    ;

instruccion_interrupcion : "siguiente" cuando ";"
              | "siguiente" ";"
              | "salir" "de" IDENTIFICADOR cuando ";"
              | "salir" ";"
              | "salir" "de" IDENTIFICADOR ";"
              | "salir" cuando ";"
    ;

cuando : "cuando" expresion
    ;

instruccion_lanzamiento_excepcion : "lanza" nombre ";"
    ;

instruccion_captura_excepcion : "prueba" instruccion_rep clausulas "fin" "prueba"
    ;

clausulas : clausulas_excepcion clausula_finalmente
            | clausulas_excepcion
            | clausula_finalmente
    ;

clausulas_excepcion_especifica_rep : clausulas_excepcion_especifica_rep clausula_excepcion_especifica

clausulas_excepcion : clausulas_excepcion_especifica_rep clausula_excepcion_general
    ;

clausula_excepcion_especifica : "excepcion" "(" nombre ")" instruccion_rep
    ;

clausula_excepcion_general : "excepcion" instruccion_rep
    ;

clausula_finalmente : "finalmente" instruccion_rep
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
