#ifndef FUNCIONESEXPRESION_H
#define FUNCIONESEXPRESION_H
//Funciones para construcci�n del �rbol de expresi�n

//Devuelve la prioridad del operador dentro de la pila.
//Prioridad('(')=0
int prioridadDentro(char op);

//Devuelve la prioridad del operador fuera de la pila.
//Prioridad('(')=4
int prioridadFuera(char op);

//Devuelve 1 si c es un operador: +, -, /, *, ^, ()
unsigned esOperador(char c);

//Devuelve 1 si c es un operando: n�meros de 1 cifra y letras may�sculas y min�sculas
unsigned esOperando(char c); //COMPLETARLA

//Recibe una cadena de caracteres y devuelve el �rbol de expresi�n
abin arbolExpresion(char *expr_infija) ; //ESCRIBIR ESTA FUNCI�N

#endif	// FUNCIONESEXPRESION_H