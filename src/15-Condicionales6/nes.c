//Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima, solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona.

#include <stdio.h>
#include <string.h>

int main(){

	char nombre[30];
	char sexo[2];
	int edad;

	printf("Ingrese su nombre: ");
	scanf("%s",nombre);

       	printf("\n");

	printf("Ingrese su sexo usando la letra m o f: ");
	scanf("%s",sexo);

	printf("\n");

	printf("Ingrese su edad: ");
	scanf("%i",&edad);

	printf("\n");

	if (strcmp(sexo,"m")==0){

		if(edad >= 18){

			printf("Tu nombre es: %s",nombre);
		}
	}

	else{
		printf("No eres apto");
	}

	return 0;

}
