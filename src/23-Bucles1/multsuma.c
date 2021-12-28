//Ingrese 1 numero, si el numero supera 10 multiplique los 10 primeros numeros, si no sumelos.

#include <stdio.h>

int main(){
	
	int n,o;

	printf("Ingrese un numero: ");
	scanf("%i",&n);

	while (n<1){
		printf("\nEl numero no es correcto");
		printf("\nIngrese un numero positivo: ");
		scanf("%i",&n);
	}

	if (n < 10){
		
		o = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
		printf("\nEl resultado es: %i",o);

	}

	else {
		o = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;
		printf("\nEl resultado es: %i",o);

	}

	return 0;

}

