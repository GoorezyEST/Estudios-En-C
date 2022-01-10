//Programa que calcula longitudes de circunferencias. Formula = L = Dos x Pi x Radio .

#include <stdio.h>

#define pi 3.14159265358979323846

int main(){

	float longitud,radio;

	printf("Digite el radio de la circunferencia: ");
	scanf("%f",&radio);

	longitud = 2 * pi * radio;

	printf("La longitud de la circunferencia es: %.2f",longitud);

	return 0;
}
