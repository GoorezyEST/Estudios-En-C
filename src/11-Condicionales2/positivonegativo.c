//Comrpobar si un numero digitado por el usuario es positivo o negativo

#include <stdio.h>

int main(){

	int number;

	printf("Digite su numero: ");
	scanf("%i",&number);

	if (number > 0){
		puts("El numero es positivo");
	}

	if (number < 0){
		puts("El numero es negativo");
	}

	return 0;

}
