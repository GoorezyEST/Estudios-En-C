//Hacer un programa que simule un cajero virtual con un saldo incial de 1000.

#include <stdio.h>

int main(){
	
	int opcion;
	int saldo = 1000;
	int agregar;
	int retirar;

	printf("\tBienvenido a su cajero virtual");
	printf("\n1. Ingreso en cuenta");
	printf("\n2. Retirar dinero");
	printf("\n3. Salir");
	printf("\nOpcion: ");
	scanf("%i",&opcion);

	switch (opcion){
		case 1: printf("\nCuanto dinero desea ingresar: ");
			scanf("%i",&agregar);

			saldo = saldo + agregar;
			printf("El saldo total es de: %i",saldo);

			break;
		case 2: printf("Cuanto dinero desea retirar: ");
			scanf("%i",&retirar);

			if(retirar > saldo){
				printf("La cantidad a retirar es mayor al saldo");
			}
			else{
				saldo = saldo - retirar;
				printf("El saldo total es: %i",saldo);
			}
			break;
		case 3: break;

		default: printf("Esa opcion no existe");
	}

	return 0;

}
