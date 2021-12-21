//Sacar la hipotenusa de un triangulo rectangulo, pidiendo al usuario el valor de los dos catetos.

#include <stdio.h>
#include <math.h>

int main(){
	float hipotenusa,cateto1,cateto2;

	printf("Digite los dos catetos: ");
	scanf("%f %f",&cateto1,&cateto2);

	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2)); //sqrt = raiz cuadrada . pow = elevar a la x .

	printf("La hipotenusa del triangulo es: %.2f",hipotenusa);

	return 0;
}
