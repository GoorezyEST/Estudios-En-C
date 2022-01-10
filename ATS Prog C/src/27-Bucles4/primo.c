//Determinar si un numero es primo o no.

#include <stdio.h>

int main(){

	int n,i,cont=0;

	printf("Digite un numero: ");
	scanf("%i",&n);

	for (i=1;i<=n;i++){
		if(n%i == 0){
			cont = cont + 1;
		}
	}

	if (cont>2){
		printf("\n El numero es compuesto");
	}
	else{
		printf("El numero es primo");
	}

	return 0;

}
