// Programa que calcule la suma de los dos factoriales de dos numeros 
// diferentes.

#include <stdio.h>

int main(){
	int n1, n2, i1, i2, fact1=1, fact2=1, suma=0;
	
	printf ("Digite el primer numero: ");
	scanf ("%i",&n1);
	printf ("Digite el segundo numero: ");
	scanf ("%i",&n2);
	
	
	for (i1=1; i1 <= n1; i1++){
		fact1 = fact1 * i1;
	}
	for (i2=1; i2 <= n2; i2++){
		fact2 = fact2 * i2;
	}
	
	suma = fact1 + fact2;
	
	printf ("\nLa suma de los factoriales es: %i",suma);
	
	return 0;

}

	
			
