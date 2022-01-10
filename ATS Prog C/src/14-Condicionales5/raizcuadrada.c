//Ingrese un numero y calcule e imprima su raiz cuadrada. Si el numero es negativo imprima el numero y un mensaje que diga - tiene raiz imaginaria -.

#include <stdio.h>
#include <math.h>

int main(){

	float number;
	float resultado;

	printf("Ingrese un numero: ");
	scanf("%f",&number);

	if (number > 0){

		resultado = sqrt(number);

		printf("La raiz cuadrada de %f es %.2f",number,resultado);
	}

	else 
		if (number < 0){

			printf("El numero %.2f tiene raiz imaginaria",number);
		}

	return 0;
}
		
