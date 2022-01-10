//Expresion Condicional: El operador ?
//
//  Condicion ? Expresion1 : Expresion2
//  
//  Numero Par

#include <stdio.h>

int main(){

	int numero;

	printf("Digite un numero: ");
	scanf("%i",&numero);

	(numero%2==0) ? printf ("El numero es par") : printf("El numero es impar");

	return 0;

}
