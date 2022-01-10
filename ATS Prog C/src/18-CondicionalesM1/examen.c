// Dada la nota en un examen mediante un codigo escribir el literal que le corresponde a la nota.
// A - Excelente
// B - Notable
// C - Aprobado
// D y F - Desaprobado

#include <stdio.h>

int main(){
	char nota;

	printf("Digite la nota: ");
	scanf("%c",&nota);

	switch(nota){
		case 'A': printf("Excelente");
			  break;
		case 'B': printf("Notable");
                          break;
		case 'C': printf("Aprobado");
                          break;
		case 'D': printf("Desaprobado");
                          break;
		case 'F': printf("Desaprobado");
                          break;
		default: printf("Se equivoco de nota");
	}

	return 0;

}
