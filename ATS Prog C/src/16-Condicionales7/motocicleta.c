//Una distribuidora de motos tiene promocion, Honda 5%, Yamaha 8%, Suzuki 10% y otras marcas 2%.

#include <stdio.h>
#include <stdlib.h>

int main(){

	char marca[20];
	int dinero;
	int precio;

	printf("Ingrese la marca de su moto: ");
	scanf("%s",marca);

	printf("Ingrese el precio de la moto que desea: ");
	scanf("%i",&dinero);

	if (strcmp(marca,"Honda")==0){

		precio = (dinero * 5)/100;

			printf("El descuento es de: %i",precio);
	}

	 if (strcmp(marca,"Yamaha")==0){

                precio = (dinero * 8)/100;

                        printf("El descuento es de: %i",precio);
        }

	  if (strcmp(marca,"Suzuki")==0){

                precio = (dinero * 10)/100;

                        printf("El descuento es de: %i",precio);
        }

	  else{
		  precio = (dinero * 2)/100;

		  printf("El precio es: %i",precio);
	  }

	  return 0;
}

