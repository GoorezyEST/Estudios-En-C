//Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior.

#include <stdio.h>

int main(){

	float salario,aumento,salario_final;

	printf("Digite su salario: ");
	scanf("%f",&salario);

	aumento = salario * 0.25;
	salario_final = salario + aumento;

	printf("El salario con aumento del 25 por ciento es: %f",salario_final);



	return 0;
}
