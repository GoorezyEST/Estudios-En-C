//Sumar pares desde A hasta B.

#include <stdio.h>

int main(){

	int a,b,i,suma=0;

	printf("Ingrese el rango de numeros a sumar: ");
	scanf("%i %i",&a,&b);

	i = a;

	while(i<=b){

		if(i%2==0){
			suma = suma + i;
		}

		i++;
	}

	printf("%i",suma);

	return 0;

}
