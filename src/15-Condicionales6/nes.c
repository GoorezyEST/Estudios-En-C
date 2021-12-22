//Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima, solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona.

#include <stdio.h>

int main(){

	char nombre[30],sexo[1];
	int edad;

	printf("Ingrese su nombre: ");
	gets(nombre);
	printf("Ingrese su sexo usando la letra m o f: ");
	gets(sexo);
	printf("Ingrese su edad: ");
	scanf("%i",&edad);

	if (strcmp(sexo,"m")==0){

		else if(edad > 18){
			printf("Tu nombre es: %s",nombre);
		}
	}

	else{
		printf("No eres apto");
	}

	return 0;

}
