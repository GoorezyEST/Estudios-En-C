//Programa que determine la suma de los primeros n numeros.

#include <stdio.h>

int main(){

	int i;
	int n;
	int suma = 0;

	printf("Digite el total de numeros a sumar");
	scanf("%i",&n);

	i = 1;

	while(i <= n){

		suma = suma + i;
		i = i + 1;

	}

	printf("\n La suma es: %i",suma);

	return 0;

}
