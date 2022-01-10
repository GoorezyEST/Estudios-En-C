//Sentencia if de dos alternativas: if-else
//            If (Condicion)
//               Accion 1
//            Else
//                Accion 2

//Nota del estudiante

#include <stdio.h>

int main(){

	float nota;

	printf("Digite la nota del examen: ");
	scanf("%f",&nota);

	if (nota > 10.5){
		printf("El alumno esta aprobado");
	}
	else{
		printf("El alumno esta desaprobado");
	}

	return 0;
}
