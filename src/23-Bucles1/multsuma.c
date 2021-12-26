//Digite un numero, si el numero supera 10, multiplique los 10 primeros numeros, sino, sumelos.

#include <stdio.h>

int main(){

	int i = 1;
	int n;
	int s;

	printf("Ingrese un numero del 1 al 20: ");
	scanf("%i",&n);

	while ( n <= 10 ){
		s = s + i;
		i = i + 1;
	}

	while ( n >= 10){
		s = s * i;
		i = i * 2;
	}

	printf ("El resultado es: %i",s);

	return 0;

}
