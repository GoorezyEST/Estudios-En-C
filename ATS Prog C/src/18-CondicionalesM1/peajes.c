//Seleccionar un tipo de vehiculo e indicar el peaje a pagar segun un valor numerico.
//1-auto,peaje=500
//2-colectivo,peaje=3000
//3-moto,peaje=300
//caso contrario-vehiculo no autorizado

#include <stdio.h>
#include <string.h>

int main (){

	char veh[15];
	int op;

	printf("Ingrese su vehiculo: ");
	scanf("%s",veh);

	if (strcmp(veh,"auto") == 0){

		op = 1;
	}

	if (strcmp(veh,"colectivo") == 0){

		op = 2;
	}

	if (strcmp(veh,"moto") == 0){

		op = 3;
	}

	switch (op){
		case 1: printf("El peaje sera de $500");
			     break;
		case 2: printf("El peaje sera de $3000");
				  break;
		case 3: printf("El peaje sera de $300");
			     break;
		default: printf("Vehiculo no autorizado");
	}

	return 0;

}
