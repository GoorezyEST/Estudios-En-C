//Sumar 1-2+3-4 ... x

#include <stdio.h>

int main(){
	int n,i,suma=0,sumap=0,sumai=0,ne;

	printf("Ingrese el total de elementos a sumar: ");
	scanf("%i",&n);

	i = 1;

	while(i<=n){
		if(i%2==0){
			ne = i * (-1);
			sumap = sumap + ne;
		}
		else{
			sumai = sumai + i;
		}
		i++;
	}

	suma = sumap + sumai;

	printf("La suma total es: %i",suma);

	return 0;

}
