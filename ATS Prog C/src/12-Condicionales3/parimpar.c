//Determinar si un numero es par o impar.

#include <stdio.h>

int main(){

	int number;

	printf("Ingrese su numero: ");
	scanf("%i",&number);

	if (number % 2 == 0){
		printf("Su numero es par");
	}

	if (number % 2 == 1){
		printf("Su numero es impar");
	}

	return 0;

}
