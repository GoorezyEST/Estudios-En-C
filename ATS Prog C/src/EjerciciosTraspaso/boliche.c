//  Se ingresa la edad de la persona y el programa retorna si puede ingresar o no al boliche.

#include <stdio.h>

int main(){

	int edad;

	printf("Ingrese su edad: ");
	scanf("%i",&edad);

	if ((edad < 18)==0){

		printf("Puede ingresar al boliche.");
	}

	else {
		printf("No puede ingresar al boliche.");
	}

	return 0;

}

