//Hacer un menu que obtenga el cubo de un numero o especifique si es par o impar.

#include <stdio.h>
#include <math.h>

int main(){

	int number;
	int opcion;

	printf("Bienvenido al intento de calculadora");
	printf("\n1. Calcular numero elevado al cubo");
	printf("\n2. Especificar si un numero es par o impar");
	printf("\n3. Salir");
	printf("\nSeleccione una opcion: ");
	scanf("%i",&opcion);

	switch(opcion){
		case 1: printf("Ingrese el numero: ");
			scanf("%i",&number);

			number = pow(number , 3);
			printf("El numero elevado al cubo es: %i",number);

			break;
		case 2: printf("Ingrese el numero: ");
			scanf("%i",&number);

			if (number % 2 == 0){
				printf("El numero es par");
			}
			else{
				printf("El numero es impar");
			}
			break;

		case 3: break;

		default: printf("La opcion ingresada no existe");

	}

	return 0;

}

