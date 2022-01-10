//Hacer un programa que obtenga la media geometrica de tres numeros.

#include <stdio.h>

int main(){

	int n1;
	int n2;
	int n3;
	int mg;

	printf("Ingrese el primer numero: ");
	scanf("%i",&n1);

	printf("Ingrese el segundo numero: ");
	scanf("%i",&n2);

	printf("Ingrese el tercer numero: ");
	scanf("%i",&n3);

	mg = (n1 * n2 * n3);

	printf("La media geometrica es: %i",mg);

	return 0;
}
