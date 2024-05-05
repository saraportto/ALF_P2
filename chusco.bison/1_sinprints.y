/************/
/* programa */
/************/

programa 
    : definicion_programa                                  
    | definicion_libreria                                   
    ;

definicion_programa
    : PROGRAMA IDENTIFICADOR ';' codigo_programa                
    ;

codigo_programa 
    : libreria_ast cuerpo_subprograma                           
    |                                                           
    ;

libreria 
    : IMPORTAR LIBRERIA nombre ';'                              
    | IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ';'           
    | DE LIBRERIA nombre IMPORTAR identificador_rep_comas ';'   
    ;

nombre 
    : IDENTIFICADOR                                             
    | nombre CUATRO_PUNTOS IDENTIFICADOR                        
    ;

definicion_libreria 
    : LIBRERIA IDENTIFICADOR ';' codigo_libreria                
    ;

codigo_libreria
    : libreria_ast declaracion_rep                              
    | libreria_ast exportaciones declaracion_rep                
    ;

exportaciones 
    : EXPORTAR nombre_rep_comas ';'                             
    ;

declaracion 
    : declaracion_objeto                                        
    | declaracion_tipo                                          
    | declaracion_subprograma                                   
    ;

/**************************/
/* declaracion de objetos */
/**************************/

declaracion_objeto 
    : identificador_rep_comas ':' CONSTANTE especificacion_tipo ASIGNACION expresion ';'            
    | identificador_rep_comas ':' especificacion_tipo ';'                                           
    | identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion ';'                      
    ;

especificacion_tipo 
    : nombre                                                                                        
    | tipo_no_estructurado                                                                          
    ;



/************************/
/* declaracion de tipos */
/************************/

declaracion_tipo 
    : TIPO IDENTIFICADOR ES tipo_no_estructurado ';'                                                  
    | TIPO IDENTIFICADOR ES tipo_estructurado                                                         
    ;

tipo_no_estructurado
    : tipo_escalar                                                                                    
    | tipo_tabla                                                                                      
    | tipo_diccionario                                                                                
    ;

tipo_escalar 
    : SIGNO tipo_basico longitud RANGO rango                                                          
    | SIGNO tipo_basico longitud                                                                      
    | SIGNO tipo_basico RANGO rango                                                                   
    | SIGNO tipo_basico                                                                               
    | tipo_basico longitud                                                                            
    | tipo_basico longitud RANGO rango                                                                
    | tipo_basico RANGO rango                                                                         
    | tipo_basico                                                                                     
    ;

longitud 
    : CORTO                                                                                           
    | LARGO                                                                                           
    ;

tipo_basico 
    : BOOLEANO                                                                                       
    | CARACTER                                                                                       
    | ENTERO                                                                                         
    | REAL                                                                                           
    ;

rango 
    : expresion DOS_PUNTOS expresion                                                                 
    | expresion DOS_PUNTOS expresion DOS_PUNTOS expresion                                            
    ;

tipo_tabla 
    : TABLA '(' expresion DOS_PUNTOS expresion ')' DE especificacion_tipo                            
    | LISTA DE especificacion_tipo                                                                   
    ;

tipo_diccionario 
    : DICCIONARIO DE especificacion_tipo                                                             
    ;

tipo_estructurado 
    : tipo_registro                                                                                  
    | tipo_enumerado                                                                                
    | clase                                                                                         
    ;

tipo_registro 
    : REGISTRO campo_rep FIN REGISTRO                                                                
    ;
	
campo 
    : identificador_rep_comas ':' especificacion_tipo ';'                                              
    | identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion ';'                          
    ;

tipo_enumerado
    : ENUMERACION DE tipo_escalar elemento_enumeracion_rep_comas FIN ENUMERACION                         
    | ENUMERACION elemento_enumeracion_rep_comas FIN ENUMERACION                                         
    ;

elemento_enumeracion
    : IDENTIFICADOR ASIGNACION expresion                                                            
    | IDENTIFICADOR                                                                                 
    ;

/*************************/
/* declaracion de clases */
/*************************/

clase 
    : CLASE ULTIMA superclases declaracion_componente_rep FIN CLASE                            
	| CLASE superclases declaracion_componente_rep FIN CLASE                                   
	| CLASE ULTIMA declaracion_componente_rep FIN CLASE                                        
	| CLASE declaracion_componente_rep FIN CLASE                                               
    ;

superclases 
    : '(' nombre_rep_comas ')'                                                                     
    ;

declaracion_componente 
    : visibilidad componente                                                                       
    | componente                                                                                   
    ;

visibilidad 
    : PUBLICO                                                                                      
    | PROTEGIDO                                                                                    
    | PRIVADO                                                                                      
    ;

componente 
    : declaracion_tipo                                                                             
    | declaracion_objeto                                                                           
    | modificador_ast_comas_1 declaracion_subprograma                                              
    ;

modificador 
    : CONSTRUCTOR                                                                                  
    | DESTRUCTOR                                                                                   
    | GENERICO                                                                                     
    | ABSTRACTO                                                                                    
    | ESPECIFICO                                                                                   
    | FINAL                                                                                        
    ;



/*******************************/
/* declaracion de subprogramas */
/*******************************/

declaracion_subprograma 
    : SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA                              
    ;

cabecera_subprograma 
    : IDENTIFICADOR parametrizacion tipo_resultado                                                  
    | IDENTIFICADOR tipo_resultado                                                                  
    | IDENTIFICADOR parametrizacion                                                                 
    | IDENTIFICADOR                                                                                 
    ;

parametrizacion 
    : '(' declaracion_parametros_ast_puntocoma declaracion_parametros ')'                           
    ;

declaracion_parametros 
    : identificador_rep_comas ':' modo especificacion_tipo ASIGNACION expresion                     
    | identificador_rep_comas ':' especificacion_tipo ASIGNACION expresion                           
    | identificador_rep_comas ':' modo especificacion_tipo                                           
    | identificador_rep_comas ':' especificacion_tipo                                                
    ;

modo
    : VALOR                                                                                         
    | REFERENCIA                                                                                    
    ;

tipo_resultado 
    : DEVOLVER especificacion_tipo                                                                 
    ;

cuerpo_subprograma 
    : declaracion_ast PRINCIPIO instruccion_rep FIN                                                 
    ;


/*****************/
/* instrucciones */
/*****************/

instruccion 
    : instruccion_asignacion                                                                          
    | instruccion_devolver                                                                            
    | instruccion_llamada                                                                             
    | instruccion_si                                                                                  
    | instruccion_casos                                                                               
    | instruccion_bucle                                                                               
    | instruccion_interrupcion                                                                        
    | instruccion_lanzamiento_excepcion                                                               
    | instruccion_captura_excepcion                                                                   
    | ';'                                                                                             
    ;

instruccion_asignacion 
    : objeto op_asignacion expresion ';'                                                              
    ;

op_asignacion 
    : ASIGNACION                                                                                       
    | ASIG_SUMA                                                                                        
    | ASIG_RESTA                                                                                       
    | ASIG_MULT                                                                                        
    | ASIG_DIV                                                                                         
    | ASIG_RESTO                                                                                       
    | ASIG_POT                                                                                         
    | ASIG_DESPI                                                                                       
    | ASIG_DESPD                                                                                       
    ;

instruccion_devolver
    : DEVOLVER expresion ';'		                                                                   
    | DEVOLVER ';'					                                                                   
    ;


instruccion_llamada 
    : llamada_subprograma ';'                                                                         
    ;

llamada_subprograma 
    : nombre '(' definicion_parametro_ast_comas_1 ')'                                                 
    ;

definicion_parametro 
    : expresion                                                                                       
    | IDENTIFICADOR ASIGNACION expresion                                                              
    ;

instruccion_si 
    : SI expresion ENTONCES instruccion_rep SINO instruccion_rep FIN SI                                
    | SI expresion ENTONCES instruccion_rep FIN SI                                                    
    ;

instruccion_casos 
    : CASOS expresion ES caso_rep FIN CASOS                                                           
    ;

caso 
    : CUANDO entradas FLECHA instruccion_rep                                                          
    ;

entradas 
    : entrada_rep_dospuntos entrada                                                                   
    ;

entrada 
    : expresion DOS_PUNTOS expresion                                                                  
    | expresion                                                                                       
    | OTRO                                                                                            
    ;

instruccion_bucle 
    : IDENTIFICADOR ':' clausula_iteracion instruccion_rep FIN BUCLE                                  
    | clausula_iteracion instruccion_rep FIN BUCLE                                                    
    ;

clausula_iteracion 
    : PARA IDENTIFICADOR ':' especificacion_tipo EN expresion                                         
    | PARA IDENTIFICADOR EN expresion                                                                 
    | REPETIR IDENTIFICADOR ':' especificacion_tipo EN rango DESCENDENTE                               
    | REPETIR IDENTIFICADOR EN rango                                                                  
    | REPETIR IDENTIFICADOR ':' especificacion_tipo EN rango                                           
    | REPETIR IDENTIFICADOR EN rango DESCENDENTE                                                       
    | MIENTRAS expresion                                                                              
    ;

instruccion_interrupcion 
    : SIGUIENTE cuando ';'                                                                            
    | SIGUIENTE ';'                                                                                   
    | SALIR DE IDENTIFICADOR cuando ';'                                                               
    | SALIR ';'                                                                                       
    | SALIR DE IDENTIFICADOR ';'                                                                      
    | SALIR cuando ';'                                                                                
    ;

cuando 
    : CUANDO expresion                                                                                
    ;

instruccion_lanzamiento_excepcion 
    : LANZA nombre ';'                                                                                
    ;

instruccion_captura_excepcion 
    : PRUEBA instruccion_rep clausulas FIN PRUEBA                                                     
    ;

clausulas 
    : clausulas_excepcion clausula_finalmente                                                         
    | clausulas_excepcion                                                                             
    | clausula_finalmente                                                                             
    ;

clausulas_excepcion 
    : clausulas_excepcion_especifica_ast clausula_excepcion_general                                    
    ;

clausula_excepcion_especifica 
    : EXCEPCION '(' nombre ')' instruccion_rep                                                         
    ;

clausula_excepcion_general 
    : EXCEPCION instruccion_rep                                                                       
    ;

clausula_finalmente 
    : FINALMENTE instruccion_rep                                                                      
    ;

/***************/
/* expresiones */
/***************/

expresion
    : expresion_or 								    
	;

expresion_or
    : expresion_or OR expresion_and				    
    | expresion_and								    
    ;

expresion_and 
    : expresion_and AND expresion_neg				
    | expresion_neg								
    ;

expresion_neg
    : '~' expresion_relacional					    
    | expresion_relacional							
    ;

expresion_relacional
    : expresion_relacional operador_relacional expresion_desplazamiento 	            
    | expresion_desplazamiento					                                        
    ;

operador_relacional
    : '<'                                           
    | '>'                                           
    | LEQ                                           
    | GEQ                                           
    |'='                                            
    | NEQ                                           
    ;

expresion_desplazamiento
    : expresion_desplazamiento operador_desplazamiento expresion_add		
    | expresion_add						                                    
    ;

operador_desplazamiento
    : DESPI                                                 
    | DESPD                                                 
    ;

expresion_add
    : expresion_add operador_add expresion_mult_div	        
    | expresion_mult_div			                        
    ;

operador_add
    : '+'                                
    | '-'                                
    ;

expresion_mult_div
    : expresion_mult_div operador_mult_div expresion_potencia            
    | expresion_potencia						                         
    ;

operador_mult_div
    : '*'                                                               
    | '/'                                                               
    |'\\'                                                               
    ;

expresion_potencia 
    : expresion_posfija '^' expresion_potencia			            
	| expresion_posfija 			 		                        
	;


expresion_posfija 
    : expresion_unaria operador_posfijo 			            
	| expresion_unaria 		 			                        
	;


operador_posfijo 
    : INC							
	| DEC 							
	;

expresion_unaria 
    : primario				    
	| '-' primario				
	;

primario 
    : literal							        
	| objeto							        
	| llamada_subprograma						
	| OBJETO llamada_subprograma			    
	| enumeraciones						        
	| '(' expresion ')'						    
	;
   
literal
    : VERDADERO 							
	| FALSO 							    
	| CTC_ENTERA							
	| CTC_REAL 							    
	| CTC_CARACTER 							
	| CTC_CADENA							
	;
	
objeto 
    : nombre									                
	| objeto '.' IDENTIFICADOR 						            
	| objeto '[' expresion_rep_comas ']' 						
	| objeto '{' ctc_cadena_rep_comas '}' 						
	;

enumeraciones 
    : '[' expresion_condicional clausula_iteracion_rep ']' 		
    | '[' expresion_rep_comas ']'					            
	| '{' clave_valor_rep_comas '}'					            
	| '{' campo_valor_rep_comas '}'					            
	;

expresion_condicional 
    : expresion						                            
	| SI expresion ENTONCES expresion 			                
	| SI expresion ENTONCES expresion SINO expresion		    
	;

clave_valor 
    : CTC_CADENA FLECHA expresion					            
	;

campo_valor 
    : IDENTIFICADOR FLECHA expresion					        
	;



/***************/
/* repeticiones */
/***************/
libreria_ast 
    : libreria_ast libreria                                                                           
    |
    ;

identificador_rep_comas
    : identificador_rep_comas ',' IDENTIFICADOR                                                       
    | IDENTIFICADOR                                                                                   
    ;

declaracion_rep 
    : declaracion_rep declaracion                                                                       
    | declaracion                                                                                      
    ;

nombre_rep_comas 
    : nombre_rep_comas ',' nombre                                                                     
    | nombre                                                                                          
    ;

campo_rep 
    : campo_rep campo                                                                                   
    | campo                                                                                             
    ;

elemento_enumeracion_rep_comas 
    : elemento_enumeracion_rep_comas ',' elemento_enumeracion                                           
    | elemento_enumeracion                                                                              
    ;

declaracion_componente_rep 
    : declaracion_componente_rep declaracion_componente                                                 
    | declaracion_componente                                                                            
    ;

modificador_ast_comas_1     
    : modificador_ast_comas                                                                            
    |                                                                                                   
    ;

modificador_ast_comas 
    : modificador_ast_comas ',' modificador                                                             
    | modificador                                                                                       
    ;

declaracion_parametros_ast_puntocoma 
    : declaracion_parametros_ast_puntocoma declaracion_parametros ';'                                   
    |                                                                                                  
    ;

declaracion_ast 
    : declaracion_ast declaracion                                                                     
    |                                                                                                  
    ;

instruccion_rep 
    : instruccion_rep instruccion                                                                      
    | instruccion                                                                                      
    ;

definicion_parametro_ast_comas_1                                                           
    : definicion_parametro_ast_comas                                                                    
    |                                                                                                   
    ;

definicion_parametro_ast_comas 
    : definicion_parametro_ast_comas ',' definicion_parametro                                            
    | definicion_parametro                                                                               
    ;

caso_rep 
    : caso_rep caso                                                                                   
    | caso                                                                                            
    ;

entrada_rep_dospuntos 
    : entrada_rep_dospuntos entrada ':'                                                              
    |                                                                                               
    ;

clausulas_excepcion_especifica_ast 
    : clausulas_excepcion_especifica_ast clausula_excepcion_especifica                                 
    |
    ;

clave_valor_rep_comas 
    : clave_valor_rep_comas ',' clave_valor                                                           
    | clave_valor                                                                                     
    ;

campo_valor_rep_comas 
    : campo_valor_rep_comas ',' campo_valor                                                           
    | campo_valor                                                                                     
    ;

expresion_rep_comas 
    : expresion_rep_comas ',' expresion                                                               
    | expresion                                                                                       
    ;

ctc_cadena_rep_comas 
    : ctc_cadena_rep_comas ',' CTC_CADENA                                                            
    | CTC_CADENA                                                                                      
    ;

clausula_iteracion_rep 
    : clausula_iteracion_rep clausula_iteracion                                                       
    | clausula_iteracion                                                                               
    ;
