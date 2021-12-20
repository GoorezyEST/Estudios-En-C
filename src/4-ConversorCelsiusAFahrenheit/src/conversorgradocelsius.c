//Conversor de grados celsius a fahrenheit.

#include <stdio.h>

int main(){
	int n1,f=0;

	printf("Ingrese los grados celsius: ");
	scanf("%i",&n1);

	f = n1 + 32;

	printf("En grados fahrenheit es: %i",f);

	return 0;
}
