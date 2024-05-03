%{
#include <stdio.h>

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

programa 
    : definicion_programa                                       { printf ("  programa -> definicion_programa\n"); }
    | definicion_libreria                                       { printf ("  programa -> definicion_libreria\n"); }
    ;

definicion_programa
    : PROGRAMA IDENTIFICADOR ';' codigo_programa                { printf ("  definicion_programa -> PROGRAMA IDENTIFICADOR ; codigo_programa\n"); }
    ;

codigo_programa 
    : libreria_ast cuerpo_subprograma                           { printf ("  codigo_programa -> libreria_ast cuerpo_subprograma\n"); }
    |                                                           { printf ("  codigo_programa -> epsilon\n"); }
    ;

libreria 
    : IMPORTAR LIBRERIA nombre ';'                              { printf ("  libreria -> IMPORTAR LIBRERIA nombre ;\n"); }
    | IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ';'           { printf ("  libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ;\n"); }
    | DE LIBRERIA nombre IMPORTAR identificador_rep_comas ';'   { printf ("  libreria -> DE LIBRERIA nombre IMPORTAR identificador_rep_comas ;\n"); }
    ;

nombre 
    : IDENTIFICADOR                                             { printf ("  nombre -> IDENTIFICADOR\n"); }
    | nombre CUATRO_PUNTOS IDENTIFICADOR                        { printf ("  nombre -> :: IDENTIFICADOR\n"); }
    ;

definicion_libreria 
    : LIBRERIA IDENTIFICADOR ';' codigo_libreria                { printf ("  definicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n"); }
    ;

codigo_libreria
    : libreria_ast declaracion_rep                              { printf ("  codigo_libreria -> libreria_ast declaracion_rep\n"); }
    | libreria_ast exportaciones declaracion_rep                { printf ("  codigo_libreria -> libreria_ast exportaciones declaracion_rep\n"); }
    ;

exportaciones 
    : EXPORTAR nombre_rep_comas ';'                             { printf ("  exportaciones -> EXPORTAR nombre_rep_comas ;\n"); }
    ;

declaracion 
    : declaracion_objeto                                        { printf ("  declaracion -> declaracion_objeto\n"); }
    | declaracion_tipo                                          { printf ("  declaracion -> declaracion_tipo\n"); }
    | declaracion_subprograma                                   { printf ("  declaracion -> declaracion_subprograma\n"); }
    ;



/**************************/
/* declaracion de objetos */
/**************************/

declaracion_objeto 
    : identificador_rep_comas ':' CONSTANTE especificacion_tipo ASIGNACION expresion ';'            { printf ("  declaracion_objeto -> identificador_rep_comas : CONSTANTE especificacion_tipo := expresion ;\n"); }
    | identificador_rep_comas ':' especificacion_tipo ';'                                           { printf ("  declaracion_objeto -> identificador_rep_comas : especificacion_tipo ;\n"); }
    | identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion ';'                      { printf ("  declaracion_objeto -> identificador_rep_comas : especificacion_tipo := expresion ;\n"); }
    ;

especificacion_tipo 
    : nombre                                                                                        { printf ("  especificacion_tipo -> nombre\n"); }
    | tipo_no_estructurado                                                                          { printf ("  especificacion_tipo -> tipo_no_estructurado\n"); }
    ;



/************************/
/* declaracion de tipos */
/************************/

declaracion_tipo 
    : TIPO IDENTIFICADOR ES tipo_no_estructurado ';'                                                  { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
    | TIPO IDENTIFICADOR ES tipo_estructurado                                                         { printf ("  declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado\n"); }
    ;

tipo_no_estructurado 
    : tipo_escalar 
    | tipo_tabla 
    | tipo_diccionario
    ;

tipo_escalar 
    : SIGNO tipo_basico longitud RANGO rango                                                          { printf ("  tipo_escalar -> SIGNO tipo_basico longitud RANGO rango\n"); }
    | SIGNO tipo_basico longitud                                                                      { printf ("  tipo_escalar -> SIGNO tipo_basico longitud\n"); }
    | SIGNO tipo_basico RANGO rango                                                                   { printf ("  tipo_escalar -> SIGNO tipo_basico RANGO rango\n"); }
    | tipo_basico longitud                                                                            { printf ("  tipo_escalar -> tipo_basico longitud\n"); }
    | tipo_basico RANGO rango                                                                         { printf ("  tipo_escalar -> tipo_basico RANGO rango\n"); }
    | tipo_basico                                                                                     { printf ("  tipo_escalar -> tipo_basico\n"); }
    ;

longitud 
    : CORTO                                                                                          { printf ("  longitud -> CORTO\n"); }
    | LARGO                                                                                           { printf ("  longitud -> LARGO\n"); }
    ;

tipo_basico 
    : BOOLEANO                                                                                       { printf ("  tipo_basico -> BOOLEANO\n"); }
    | CARACTER                                                                                       { printf ("  tipo_basico -> CARACTER\n"); }
    | ENTERO                                                                                         { printf ("  tipo_basico -> ENTERO\n"); }
    | REAL                                                                                           { printf ("  tipo_basico -> REAL\n"); }
    ;

rango 
    : expresion DOS_PUNTOS expresion DOS_PUNTOS expresion                                            { printf ("  rango -> expresion DOS_PUNTOS expresion DOS_PUNTOS expresion\n"); }
    | expresion DOS_PUNTOS expresion                                                                 { printf ("  rango -> expresion DOS_PUNTOS expresion\n"); }
    ;

tipo_tabla 
    : TABLA '(' expresion DOS_PUNTOS expresion ')' DE especificacion_tipo                              { printf ("  tipo_tabla -> TABLA ( expresion DOS_PUNTOS expresion ) DE especificacion_tipo\n"); }
    | LISTA DE especificacion_tipo                                                                    { printf ("  tipo_tabla -> LISTA DE especificacion_tipo\n"); }
    ;

tipo_diccionario 
    : DICCIONARIO DE especificacion_tipo                                                              { printf ("  tipo_diccionario -> DICCIONARIO DE especificacion_tipo\n"); }
    ;

tipo_estructurado 
    : tipo_registro                                                                                  { printf ("  tipo_estructurado -> tipo_registro\n"); }
    | tipo_enumerado                                                                                { printf ("  tipo_estructurado -> tipo_enumerado\n"); }
    | clase                                                                                         { printf ("  tipo_estructurado -> clase\n"); }
    ;

tipo_registro 
    : REGISTRO campo_rep FIN REGISTRO                                                                { printf ("  tipo_registro -> REGISTRO campo_rep FIN REGISTRO\n"); }
    ;
	
campo 
    : identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion ';'                         { printf ("  campo -> identificador_rep_comas : especificacion_tipo := expresion ;\n"); }
	| identificador_rep_comas ':' especificacion_tipo ';'                                               { printf ("  campo -> identificador_rep_comas : especificacion_tipo ;\n"); }
	;

tipo_enumerado
    : ENUMERACION DE tipo_escalar elemento_enumeracion_rep_comas FIN ENUMERACION                         { printf ("  tipo_enumerado -> ENUMERACION DE tipo_escalar elemento_enumeracion_rep_comas FIN ENUMERACION\n"); }
	| ENUMERACION elemento_enumeracion_rep_comas FIN ENUMERACION                                          { printf ("  tipo_enumerado -> ENUMERACION elemento_enumeracion_rep_comas FIN ENUMERACION\n"); }
	;

elemento_enumeracion
    : IDENTIFICADOR ASIGNACION expresion                                                             { printf ("  elemento_enumeracion -> IDENTIFICADOR := expresion\n"); }
	| IDENTIFICADOR                                                                                 { printf ("  elemento_enumeracion -> IDENTIFICADOR\n"); }
	;



/*************************/
/* declaracion de clases */
/*************************/

clase 
    : CLASE ULTIMA superclases declaracion_componente_rep FIN CLASE                            { printf ("  clase -> CLASE ULTIMA superclases declaracion_componente_rep FIN CLASE\n"); }
	| CLASE superclases declaracion_componente_rep FIN CLASE                                      { printf ("  clase -> CLASE superclases declaracion_componente_rep FIN CLASE\n"); }
	| CLASE ULTIMA declaracion_componente_rep FIN CLASE                                            { printf ("  clase -> CLASE ULTIMA declaracion_componente_rep FIN CLASE\n"); }
	| CLASE declaracion_componente_rep FIN CLASE                                                  { printf ("  clase -> CLASE declaracion_componente_rep FIN CLASE\n"); }
    ;

superclases 
    : '(' nombre_rep_comas ')'                                                                     { printf ("  superclases -> ( nombre_rep_comas )\n"); }
    ;

declaracion_componente 
    : visibilidad componente                                                                       { printf ("  declaracion_componente -> visibilidad componente\n"); }
    | componente                                                                                   { printf ("  declaracion_componente -> componente\n"); }
    ;

visibilidad 
    : PUBLICO                                                                                      { printf ("  visibilidad -> PUBLICO\n"); }
    | PROTEGIDO                                                                                    { printf ("  visibilidad -> PROTEGIDO\n"); }
    | PRIVADO                                                                                      { printf ("  visibilidad -> PRIVADO\n"); }
    ;

componente 
    : declaracion_tipo                                                                             { printf ("  componente -> declaracion_tipo\n"); }
    | declaracion_objeto                                                                           { printf ("  componente -> declaracion_objeto\n"); }
    | modificador_ast_comas declaracion_subprograma                                                { printf ("  componente -> modificador_ast_comas declaracion_subprograma\n"); }
    ;

modificador 
    : CONSTRUCTOR                                                                                  { printf ("  modificador -> CONSTRUCTOR\n"); }
    | DESTRUCTOR                                                                                   { printf ("  modificador -> DESTRUCTOR\n"); }
    | GENERICO                                                                                     { printf ("  modificador -> GENERICO\n"); }
    | ABSTRACTO                                                                                    { printf ("  modificador -> ABSTRACTO\n"); }
    | ESPECIFICO                                                                                   { printf ("  modificador -> ESPECIFICO\n"); }
    | FINAL                                                                                        { printf ("  modificador -> FINAL\n"); }
    ;




/*******************************/
/* declaracion de subprogramas */
/*******************************/

declaracion_subprograma 
    : SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA                              { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA\n"); }
    ;

cabecera_subprograma 
    : IDENTIFICADOR parametrizacion tipo_resultado                                                  { printf ("  cabecera_subprograma -> IDENTIFICADOR parametrizacion tipo_resultado\n"); }
    | IDENTIFICADOR tipo_resultado                                                                  { printf ("  cabecera_subprograma -> IDENTIFICADOR tipo_resultado\n"); }
    | IDENTIFICADOR parametrizacion                                                                 { printf ("  cabecera_subprograma -> IDENTIFICADOR parametrizacion\n"); }
    | IDENTIFICADOR                                                                                 { printf ("  cabecera_subprograma -> IDENTIFICADOR\n"); }
    ;

parametrizacion 
    : '(' declaracion_parametros_ast_puntocoma declaracion_parametros ')'                           { printf ("  parametrizacion -> ( declaracion_parametros_ast_puntocoma declaracion_parametros )\n"); }
    ;

declaracion_parametros 
    : identificador_rep_comas ':' modo especificacion_tipo ASIGNACION expresion                     { printf ("  declaracion_parametros -> identificador_rep_comas : modo especificacion_tipo := expresion\n"); }
    | identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion                           { printf ("  declaracion_parametros -> identificador_rep_comas : especificacion_tipo := expresion\n"); }
    | identificador_rep_comas ':' modo especificacion_tipo                                           { printf ("  declaracion_parametros -> identificador_rep_comas : modo especificacion_tipo\n"); }
    | identificador_rep_comas ':' especificacion_tipo                                                { printf ("  declaracion_parametros -> identificador_rep_comas : especificacion_tipo\n"); }
    ;

modo
    : VALOR                                                                                         { printf ("  modo -> VALOR\n"); }
    | REFERENCIA                                                                                    { printf ("  modo -> REFERENCIA\n"); }
    ;

tipo_resultado 
    : DEVOLVER especificacion_tipo                                                                 { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
    ;

cuerpo_subprograma 
    : declaracion_ast PRINCIPIO instruccion_rep FIN                                                 { printf ("  cuerpo_subprograma -> declaracion_ast PRINCIPIO instruccion_rep FIN\n"); }
    ;


/*****************/
/* instrucciones */
/*****************/

instruccion 
    : instruccion_asignacion                                                                           { printf ("  instruccion -> instruccion_asignacion\n"); }
    | instruccion_devolver                                                                            { printf ("  instruccion -> instruccion_devolver\n"); }
    | instruccion_llamada                                                                             { printf ("  instruccion -> instruccion_llamada\n"); }
    | instruccion_si                                                                                  { printf ("  instruccion -> instruccion_si\n"); }
    | instruccion_casos                                                                               { printf ("  instruccion -> instruccion_casos\n"); }
    | instruccion_bucle                                                                               { printf ("  instruccion -> instruccion_bucle\n"); }
    | instruccion_interrupcion                                                                        { printf ("  instruccion -> instruccion_interrupcion\n"); }
    | instruccion_lanzamiento_excepcion                                                               { printf ("  instruccion -> instruccion_lanzamiento_excepcion\n"); }
    | instruccion_captura_excepcion                                                                   { printf ("  instruccion -> instruccion_captura_excepcion\n"); }
    | ';'                                                                                              { printf ("  instruccion -> ;\n"); }
    ;

instruccion_asignacion 
    : objeto op_asignacion expresion ';'                                                              { printf ("  instruccion_asignacion -> objeto op_asignacion expresion ;\n"); }
    ;

op_asignacion 
    : ASIGNACION                                                                                       { printf ("  op_asignacion -> ASIGNACION\n"); }
    | ASIG_SUMA                                                                                        { printf ("  op_asignacion -> ASIG_SUMA\n"); }
    | ASIG_RESTA                                                                                       { printf ("  op_asignacion -> ASIG_RESTA\n"); }
    | ASIG_MULT                                                                                        { printf ("  op_asignacion -> ASIG_MULT\n"); }
    | ASIG_DIV                                                                                         { printf ("  op_asignacion -> ASIG_DIV\n"); }
    | ASIG_RESTO                                                                                       { printf ("  op_asignacion -> ASIG_RESTO\n"); }
    | ASIG_POT                                                                                         { printf ("  op_asignacion -> ASIG_POT\n"); }
    | ASIG_DESPI                                                                                       { printf ("  op_asignacion -> ASIG_DESPI\n"); }
    | ASIG_DESPD                                                                                       { printf ("  op_asignacion -> ASIG_DESPD\n"); }
    ;

instruccion_devolver 
    : DEVOLVER ';'                                                                                     { printf ("  instruccion_devolver -> DEVOLVER ;\n"); }
    | DEVOLVER expresion ';'                                                                           { printf ("  instruccion_devolver -> DEVOLVER expresion ;\n"); }
    ;

instruccion_llamada 
    : llamada_subprograma ';'                                                                         { printf ("  instruccion_llamada -> llamada_subprograma ;\n"); }
    ;

llamada_subprograma 
    : nombre '(' definicion_parametro_ast_comas ')'                                                   { printf ("  llamada_subprograma -> nombre ( definicion_parametro_ast_comas )\n"); }
    ;

definicion_parametro 
    : expresion                                                                                       { printf ("  definicion_parametro -> expresion\n"); }
    | IDENTIFICADOR ASIGNACION expresion                                                              { printf ("  definicion_parametro -> IDENTIFICADOR := expresion\n"); }
    ;

instruccion_si 
    : SI expresion ENTONCES instruccion_rep SINO instruccion_rep FIN SI                                { printf ("  instruccion_si -> SI expresion ENTONCES instruccion_rep SINO instruccion_rep FIN SI\n"); }
    | SI expresion ENTONCES instruccion_rep FIN SI                                                    { printf ("  instruccion_si -> SI expresion ENTONCES instruccion_rep FIN SI\n"); }
    ;

instruccion_casos 
    : CASOS expresion ES caso_rep FIN CASOS                                                           { printf ("  instruccion_casos -> CASOS expresion ES caso_rep FIN CASOS\n"); }
    ;

caso 
    : CUANDO entradas FLECHA instruccion_rep                                                          { printf ("  caso -> CUANDO entradas FLECHA instruccion_rep\n"); }
    ;

entradas 
    : entrada_rep_dospuntos entrada                                                                   { printf ("  entradas -> entrada_rep_dospuntos entrada\n"); }
    ;

entrada 
    : expresion DOS_PUNTOS expresion                                                                  { printf ("  entrada -> expresion DOS_PUNTOS expresion\n"); }
    | expresion                                                                                       { printf ("  entrada -> expresion\n"); }
    | OTRO                                                                                            { printf ("  entrada -> OTRO\n"); }
    ;

instruccion_bucle 
    : IDENTIFICADOR ':' clausula_iteracion instruccion_rep FIN BUCLE                                   { printf ("  instruccion_bucle -> IDENTIFICADOR : clausula_iteracion instruccion_rep FIN BUCLE\n"); }
    | clausula_iteracion instruccion_rep FIN BUCLE                                                    { printf ("  instruccion_bucle -> clausula_iteracion instruccion_rep FIN BUCLE\n"); }
    ;

clausula_iteracion 
    : PARA IDENTIFICADOR ':' especificacion_tipo EN expresion                                          { printf ("  clausula_iteracion -> PARA IDENTIFICADOR : especificacion_tipo EN expresion\n"); }
    | PARA IDENTIFICADOR EN expresion                                                                 { printf ("  clausula_iteracion -> PARA IDENTIFICADOR EN expresion\n"); }
    | REPETIR IDENTIFICADOR ':' especificacion_tipo EN rango DESCENDENTE                                { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR : especificacion_tipo EN rango DESCENDENTE\n"); }
    | REPETIR IDENTIFICADOR EN rango                                                                  { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR EN rango\n"); }
    | REPETIR IDENTIFICADOR ':' especificacion_tipo EN rango                                           { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR : especificacion_tipo EN rango\n"); }
    | REPETIR IDENTIFICADOR EN rango DESCENDENTE                                                      { printf ("  clausula_iteracion -> REPETIR IDENTIFICADOR EN rango DESCENDENTE\n"); }
    | MIENTRAS expresion                                                                              { printf ("  clausula_iteracion -> MIENTRAS expresion\n"); }
    ;

instruccion_interrupcion 
    : SIGUIENTE cuando ';'                                                                            { printf ("  instruccion_interrupcion -> SIGUIENTE cuando ;\n"); }
    | SIGUIENTE ';'                                                                                   { printf ("  instruccion_interrupcion -> SIGUIENTE ;\n"); }
    | SALIR DE IDENTIFICADOR cuando ';'                                                               { printf ("  instruccion_interrupcion -> SALIR DE IDENTIFICADOR cuando ;\n"); }
    | SALIR ';'                                                                                       { printf ("  instruccion_interrupcion -> SALIR ;\n"); }
    | SALIR DE IDENTIFICADOR ';'                                                                      { printf ("  instruccion_interrupcion -> SALIR DE IDENTIFICADOR ;\n"); }
    | SALIR cuando ';'                                                                                { printf ("  instruccion_interrupcion -> SALIR cuando ;\n"); }
    ;

cuando 
    : CUANDO expresion                                                                                { printf ("  cuando -> CUANDO expresion\n"); }
    ;

instruccion_lanzamiento_excepcion 
    : LANZA nombre ';'                                                                                { printf ("  instruccion_lanzamiento_excepcion -> LANZA nombre ;\n"); }
    ;

instruccion_captura_excepcion 
    : PRUEBA instruccion_rep clausulas FIN PRUEBA                                                     { printf ("  instruccion_captura_excepcion -> PRUEBA instruccion_rep clausulas FIN PRUEBA\n"); }
    ;

clausulas 
    : clausulas_excepcion clausula_finalmente                                                         { printf ("  clausulas -> clausulas_excepcion clausula_finalmente\n"); }
    | clausulas_excepcion                                                                             { printf ("  clausulas -> clausulas_excepcion\n"); }
    | clausula_finalmente                                                                             { printf ("  clausulas -> clausula_finalmente\n"); }
    ;

clausulas_excepcion 
    : clausulas_excepcion_especifica_ast clausula_excepcion_general                                    { printf ("  clausulas_excepcion -> clausulas_excepcion_especifica_ast clausula_excepcion_general\n"); }
    ;

clausula_excepcion_especifica 
    : EXCEPCION '(' nombre ')' instruccion_rep                                                        { printf ("  clausula_excepcion_especifica -> EXCEPCION ( nombre ) instruccion_rep\n"); }
    ;

clausula_excepcion_general 
    : EXCEPCION instruccion_rep                                                                      { printf ("  clausula_excepcion_general -> EXCEPCION instruccion_rep\n"); }
    ;

clausula_finalmente 
    : FINALMENTE instruccion_rep                                                                     { printf ("  clausula_finalmente -> FINALMENTE instruccion_rep\n"); }
    ;


/***************/
/* expresiones */
/***************/

expresion
    : expresion_or                                                                                      { printf ("  expresion -> expresion_or\n"); }
    ;

expresion_or 
    : expresion_or OR expresion_and                                                                      { printf ("  expresion_or -> expresion_or OR expresion_and\n"); }
    | expresion_and                                                                                     { printf ("  expresion_or -> expresion_and\n"); }
    ;

expresion_and 
    : expresion_and AND expresion_neg                                                                   { printf ("  expresion_and -> expresion_and AND expresion_neg\n"); }
    | expresion_neg                                                                                     { printf ("  expresion_and -> expresion_neg\n"); }
    ;

expresion_neg 
    : '~' expresion_comparacion                                                                         { printf ("  expresion_neg -> ~ expresion_comparacion\n"); }
    | expresion_comparacion                                                                             { printf ("  expresion_neg -> expresion_comparacion\n"); }
    ;

expresion_comparacion
    : expresion_desp operador_comparacion expresion_desp                                                { printf ("  expresion_comparacion -> expresion_desp operador_comparacion expresion_desp\n"); }
    | expresion_desp                                                                                    { printf ("  expresion_comparacion -> expresion_desp\n"); }
    ;

operador_comparacion
    : '<'                                                                                               { printf ("  operador_comparacion -> <\n"); }
    | '>'                                                                                               { printf ("  operador_comparacion -> >\n"); }
    | LEQ                                                                                               { printf ("  operador_comparacion -> LEQ\n"); }
    | GEQ                                                                                               { printf ("  operador_comparacion -> GEQ\n"); }
    | '='                                                                                               { printf ("  operador_comparacion -> =\n"); }
    | NEQ                                                                                               { printf ("  operador_comparacion -> NEQ\n"); }
    ;

expresion_desp 
    : expresion_add operador_desp expresion_add                                                        { printf ("  expresion_desp -> expresion_add operador_desp expresion_add\n"); }
    | expresion_add                                                                                     { printf ("  expresion_desp -> expresion_add\n"); }
    ;

operador_desp 
    : DESPI                                                                                             { printf ("  operador_desp -> DESPI\n"); }
    | DESPD                                                                                             { printf ("  operador_desp -> DESPD\n"); }
    ;

expresion_add 
    : expresion_mult_div operador_add expresion_mult_div                                                { printf ("  expresion_add -> expresion_mult_div operador_add expresion_mult_div\n"); }
    | expresion_mult_div                                                                               { printf ("  expresion_add -> expresion_mult_div\n"); }
    ;

operador_add 
    : '+'                                                                                               { printf ("  operador_add -> +\n"); }
    | '-'                                                                                               { printf ("  operador_add -> -\n"); }
    ;

expresion_mult_div 
    : expresion_potencia operador_mult_div expresion_potencia                                           { printf ("  expresion_mult_div -> expresion_potencia operador_mult_div expresion_potencia\n"); }
    | expresion_potencia                                                                               { printf ("  expresion_mult_div -> expresion_potencia\n"); }
    ;

operador_mult_div 
    : '*'                                                                                               { printf ("  operador_mult_div -> *\n"); }
    | '/'                                                                                               { printf ("  operador_mult_div -> /\n"); }
    | '\\'                                                                                              { printf ("  operador_mult_div -> \\\\n"); }
    ;

expresion_potencia 
    : expresion_posfija '^' expresion_potencia                                                         { printf ("  expresion_potencia -> expresion_posfija ^ expresion_potencia\n"); }
    | expresion_posfija                                                                               { printf ("  expresion_potencia -> expresion_posfija\n"); }
    ;

expresion_posfija 
    : expresion_unaria operador_posfijo                                                               { printf ("  expresion_posfija -> expresion_unaria operador_posfijo\n"); }
    | expresion_unaria                                                                               { printf ("  expresion_posfija -> expresion_unaria\n"); }
    ;

operador_posfijo 
    : INC                                                                                             { printf ("  operador_posfijo -> INC\n"); }
    | DEC                                                                                             { printf ("  operador_posfijo -> DEC\n"); }
    ;

expresion_unaria 
    : '-' primario                                                                                    { printf ("  expresion_unaria -> - primario\n"); }
    | primario                                                                                        { printf ("  expresion_unaria -> primario\n"); }
    ;

primario 
    : literal                                                                                        { printf ("  primario -> literal\n"); }
    | objeto                                                                                        { printf ("  primario -> objeto\n"); }
    | OBJETO llamada_subprograma                                                                    { printf ("  primario -> OBJETO llamada_subprograma\n"); }
    | llamada_subprograma                                                                           { printf ("  primario -> llamada_subprograma\n"); }
    | enumeraciones                                                                                 { printf ("  primario -> enumeraciones\n"); }
    | '(' expresion ')'                                                                             { printf ("  primario -> ( expresion )\n"); }
    ;

literal 
    : VERDADERO                                                                                     { printf ("  literal -> VERDADERO\n"); }
    | FALSO                                                                                         { printf ("  literal -> FALSO\n"); }
    | CTC_ENTERA                                                                                   { printf ("  literal -> CTC_ENTERA\n"); }
    | CTC_REAL                                                                                     { printf ("  literal -> CTC_REAL\n"); }
    | CTC_CARACTER                                                                                 { printf ("  literal -> CTC_CARACTER\n"); }
    | CTC_CADENA                                                                                   { printf ("  literal -> CTC_CADENA\n"); }
    ;

objeto 
    : nombre                                                                                       { printf ("  objeto -> nombre\n"); }
    | objeto '.' IDENTIFICADOR                                                                     { printf ("  objeto -> objeto . IDENTIFICADOR\n"); }
    | objeto '[' expresion_rep_comas ']'                                                          { printf ("  objeto -> objeto [ expresion_rep_comas ]\n"); }
    | objeto '{' ctc_cadena_rep_comas '}'                                                        { printf ("  objeto -> objeto { ctc_cadena_rep_comas }\n"); }
    ;

enumeraciones 
    : '[' expresion_condicional clausula_iteracion_rep ']'                                        { printf ("  enumeraciones -> [ expresion_condicional clausula_iteracion_rep ]\n"); }
    | '[' expresion_rep_comas ']'                                                                 { printf ("  enumeraciones -> [ expresion_rep_comas ]\n"); }
    | '{' clave_valor_rep_comas '}'                                                              { printf ("  enumeraciones -> { clave_valor_rep_comas }\n"); }
    | '{' campo_valor_rep_comas '}'                                                              { printf ("  enumeraciones -> { campo_valor_rep_comas }\n"); }
    ;

expresion_condicional 
    : expresion                                                                                    { printf ("  expresion_condicional -> expresion\n"); }
    | SI expresion ENTONCES expresion SINO expresion                                               { printf ("  expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
    | SI expresion ENTONCES expresion                                                              { printf ("  expresion_condicional -> SI expresion ENTONCES expresion\n"); }
    ;

clave_valor 
    : CTC_CADENA FLECHA expresion                                                                 { printf ("  clave_valor -> CTC_CADENA FLECHA expresion\n"); }
    ;

campo_valor 
    : IDENTIFICADOR FLECHA expresion                                                               { printf ("  campo_valor -> IDENTIFICADOR FLECHA expresion\n"); }
    ;


/***************/
/* repeticiones */
/***************/
libreria_ast 
    : libreria_ast libreria                                                                           { printf ("  libreria_ast -> libreria_ast libreria\n"); }
    |
    ;

identificador_rep_comas
    : identificador_rep_comas ',' IDENTIFICADOR                                                       { printf ("  identificador_rep_comas -> identificador_rep_comas , IDENTIFICADOR\n"); }
    | IDENTIFICADOR                                                                                   { printf ("  identificador_rep_comas -> IDENTIFICADOR\n"); }
    ;

declaracion_rep 
    : declaracion_rep declaracion                                                                     { printf ("  declaracion_rep -> declaracion_rep declaracion\n"); }
    | declaracion                                                                                    { printf ("  declaracion_rep -> declaracion\n"); }
    ;

nombre_rep_comas 
    : nombre_rep_comas ',' nombre                                                                    { printf ("  nombre_rep_comas -> nombre_rep_comas , nombre\n"); }
    | nombre                                                                                         { printf ("  nombre_rep_comas -> nombre\n"); }
    ;

campo_rep 
    : campo_rep campo                                                                                 { printf ("  campo_rep -> campo_rep campo\n"); }
    | campo                                                                                          { printf ("  campo_rep -> campo\n"); }
    ;

elemento_enumeracion_rep_comas 
    : elemento_enumeracion_rep_comas ',' elemento_enumeracion                                         { printf ("  elemento_enumeracion_rep_comas -> elemento_enumeracion_rep_comas , elemento_enumeracion\n"); }
    | elemento_enumeracion                                                                           { printf ("  elemento_enumeracion_rep_comas -> elemento_enumeracion\n"); }
    ;

declaracion_componente_rep 
    : declaracion_componente_rep declaracion_componente                                               { printf ("  declaracion_componente_rep -> declaracion_componente_rep declaracion_componente\n"); }
    | declaracion_componente                                                                         { printf ("  declaracion_componente_rep -> declaracion_componente\n"); }
    ;

modificador_ast_comas 
    : modificador_ast_comas ',' modificador                                                          { printf ("  modificador_ast_comas -> modificador_ast_comas , modificador\n"); }
    |
    ;

declaracion_parametros_ast_puntocoma 
    : declaracion_parametros_ast_puntocoma declaracion_parametros ';'                                 { printf ("  declaracion_parametros_ast_puntocoma -> declaracion_parametros_ast_puntocoma declaracion_parametros ;\n"); }
    |
    ;

declaracion_ast 
    : declaracion_ast declaracion                                                                     { printf ("  declaracion_ast -> declaracion_ast declaracion\n"); }
    |
    ;

instruccion_rep 
    : instruccion_rep instruccion                                                                     { printf ("  instruccion_rep -> instruccion_rep instruccion\n"); }
    | instruccion                                                                                    { printf ("  instruccion_rep -> instruccion\n"); }
    ;

definicion_parametro_ast_comas 
    : definicion_parametro_ast_comas ',' definicion_parametro                                         { printf ("  definicion_parametro_ast_comas -> definicion_parametro_ast_comas , definicion_parametro\n"); }
    |
    ;

caso_rep 
    : caso_rep caso                                                                                   { printf ("  caso_rep -> caso_rep caso\n"); }
    | caso                                                                                            { printf ("  caso_rep -> caso\n"); }
    ;

entrada_rep_dospuntos 
    : entrada_rep_dospuntos entrada ':'                                                              { printf ("  entrada_rep_dospuntos -> entrada_rep_dospuntos entrada :\n"); }
    |
    ;

clausulas_excepcion_especifica_ast 
    : clausulas_excepcion_especifica_ast clausula_excepcion_especifica                                { printf ("  clausulas_excepcion_especifica_ast -> clausulas_excepcion_especifica_ast clausula_excepcion_especifica\n"); }
    |
    ;

clave_valor_rep_comas 
    : clave_valor_rep_comas ',' clave_valor                                                          { printf ("  clave_valor_rep_comas -> clave_valor_rep_comas , clave_valor\n"); }
    | clave_valor                                                                                    { printf ("  clave_valor_rep_comas -> clave_valor\n"); }
    ;

campo_valor_rep_comas 
    : campo_valor_rep_comas ',' campo_valor                                                          { printf ("  campo_valor_rep_comas -> campo_valor_rep_comas , campo_valor\n"); }
    | campo_valor                                                                                    { printf ("  campo_valor_rep_comas -> campo_valor\n"); }
    ;

expresion_rep_comas 
    : expresion_rep_comas ',' expresion                                                              { printf ("  expresion_rep_comas -> expresion_rep_comas , expresion\n"); }
    | campo_valor                                                                                    { printf ("  expresion_rep_comas -> campo_valor\n"); }
    ;

ctc_cadena_rep_comas 
    : ctc_cadena_rep_comas ',' CTC_CADENA                                                           { printf ("  ctc_cadena_rep_comas -> ctc_cadena_rep_comas , CTC_CADENA\n"); }
    | CTC_CADENA                                                                                    { printf ("  ctc_cadena_rep_comas -> CTC_CADENA\n"); }
    ;

clausula_iteracion_rep 
    : clausula_iteracion_rep clausula_iteracion                                                      { printf ("  clausula_iteracion_rep -> clausula_iteracion_rep clausula_iteracion\n"); }
    | clausula_iteracion                                                                             { printf ("  clausula_iteracion_rep -> clausula_iteracion\n"); }
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

