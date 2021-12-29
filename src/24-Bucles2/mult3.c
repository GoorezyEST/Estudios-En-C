//Multiplos de 3 desde 1 hasta X.

#include <stdio.h>

int main(){

	int n;
	int i;

	printf("Digite el total de numeros a comprobar: ");
	scanf("%i",&n);

	i = 1;

	while (i<=n){
		if(i%3==0){
			printf("%i.\n",i);
		}
		i++;
	}

	return 0;

}
