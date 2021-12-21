//Programa para obtener una media aritmetica. La media aritmetica es el valor obtenido al sumar todos los datos y dividir el resultado por el numero total de datos.

#include <stdio.h>

int main(){

	int n1;
	int n2;
	int n3;
	int ma;

	printf("Digite su primer numero: ");
	scanf("%i",&n1);

	printf("Digite su segundo numero: ");
	scanf("%i",&n2);

	printf("Digite su tercer numero: ");
	scanf("%i",&n3);

	ma = (n1+n2+n3)/3;

	printf("La media aritmetica es: %i",ma);

	return 0;
}

