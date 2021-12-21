//Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuanto debera pagar finalmente por su compra.

#include <stdio.h>

int main(){

	float total_compra;
	float descuento;
	float precio;

	printf("Digite el total de compra: ");
	scanf("%f",&total_compra);

	descuento = total_compra * 0.15;
	precio = total_compra - descuento;

	printf("El precio final de la compra es: $%.2f",precio);

	return 0;
}
