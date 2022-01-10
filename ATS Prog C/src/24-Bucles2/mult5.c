//Multiplos de 5 desde 1 hasta X.

#include <stdio.h>

int main(){

	int x;
	int i;

	printf("Ingrese el total de numeros a comprobar: ");
	scanf("%i",&x);

	i = 1;

	while (i<=x){
		if(i%5==0){
			printf("%i.\n",i);
		}
		i++;
	}

	return 0;

}





