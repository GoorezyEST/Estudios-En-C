//Programa que borre la pantalla.

#include <stdio.h>
#include <stdlib.h>

int main(){

	char tecla;

	printf("Programa de Borrado de pantalla.");
	printf("\n------------------------------");
	printf("\n------------------------------");
	printf("\nDigite el numero 1: ");
	scanf("%c",&tecla);

	if(tecla=='1'){
		system("cls");
		printf("Ha funcionado!");
	}

	else{
		fflush(stdin);
		printf("\nNo ha funcionado el limpiado de pantalla.");
		printf("\nPor favor, digite el numero 1: ");
		scanf("%c",&tecla);

		if (tecla=='1'){
			system("cls");
		}
		else {
			printf("No funciono.");
		}
	}

	return 0;

}

