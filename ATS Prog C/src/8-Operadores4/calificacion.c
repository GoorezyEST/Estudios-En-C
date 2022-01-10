//Un alumno desea saber cual sera su calificacion final en la materia de Algoritmos. Dicha calificacion se compone de los siguientes porcentajes:
//55% del promedio de sus tres calificaciones
//30% de la calificacion del examen final
//15% de la calificacion de un trabajo final


#include <stdio.h>

int main(){

	int cal1;
	int cal2;
	int cal3;
	int calf;
	int caltf;
	int procalf;
	int notaf;

	printf("Ingrese sus tres calificaciones parciales: ");
	scanf("%i %i %i",&cal1,&cal2,&cal3);

	printf("Ingrese su calificacion del examen final: ");
	scanf("%i",&calf);

	printf("Ingrese su calificacion de trabajo final: ");
	scanf("%i",&caltf);

	procalf = (cal1 + cal2 + cal3) / 3;
	notaf=(((procalf*55)/100)+((calf*30)/100)+((caltf*15)/100));

	printf("Su nota final es: %i",notaf);

	return 0;
}


