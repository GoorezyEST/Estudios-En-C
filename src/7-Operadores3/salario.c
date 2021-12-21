//Dadas las horas trabajadas de una persona y el valor por hora. Calcular su salario e imprimirlo.

#include <stdio.h>

int main(){

	int horas;
	int ganaxhora;
	int salario;

	printf("Ingrese cuantas horas trabaja al dia: ");
	scanf("%i",&horas);

	printf("Ingrese cuanto gana por hora: ");
	scanf("%i",&ganaxhora);

	salario = (ganaxhora * horas) * 30;

	printf("Su salario es: %i",salario);

	return 0;
}
