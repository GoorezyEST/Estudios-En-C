//Calcular el mayor de dos numeros.

#include <stdio.h>

int main(){

	int n1,n2;

	printf("Digite 2 numeros: ");
	scanf("%i %i",&n1,&n2);

	if (n1>n2){
		printf("\nEl mayor es: %i",n1);
	}
	else
		if(n2>n1){
			printf("El mayor es: %i",n2);
		}
	else{
		printf("Ambos numeros son iguales.");
	}

	return 0;
}

