//Se ingresan cuatro numeros y se saca el promedio.

#include <stdio.h>

int main(){

	int n1,n2,n3,n4;
	int resultado;

	printf("Ingrese cuatro numeros para sacar su promedio: ");
	scanf("%i %i %i %i",&n1,&n2,&n3,&n4);

	resultado = (n1 + n2 + n3 + n4)/4;

	printf("El promedio de esos numeros es: %i",resultado);

	return 0;

}

