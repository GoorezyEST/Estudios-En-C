//Mostrar los meses del año pidiendole al usuario que ingrese un numero del 1 al 12.

#include <stdio.h>

int main(){
	
	int mes;

	printf("Ingrese un numero para ver el mes que le corresponde: ");
	scanf("%i",&mes);

	switch(mes){
		case 1 : printf("El mes 1 es Enero");
			 break;
		case 2 : printf("El mes 2 es Febrero");
			 break;
		case 3 : printf("El mes 3 es Marzo");
			 break;
		case 4 : printf("El mes 4 es Abril");
			 break;
		case 5 : printf("El mes 5 es Mayo");
			 break;
		case 6 : printf("El mes 6 es Junio");
		    	 break;
		case 7 : printf("El mes 7 es Julio");
			 break;
		case 8 : printf("El mes 8 es Agosto");
			 break;
		case 9 : printf("El mes 9 es Septiembre");
			 break;
		case 10 : printf("El mes 10 es Octubre");
			  break;
		case 11 : printf("El mes 11 es Noviembre");
			  break;
		case 12 : printf("El mes 12 es Diciembre");
			  break;
		default : printf("El numero ingresado no corresponde a ningun mes");
	}

	return 0;

}
