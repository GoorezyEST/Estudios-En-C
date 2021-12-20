#include <stdio.h> //Libreria

#define g 3 //Macro

int y = 5; //Variable Global

int main(){
	int x = 10; //Variable Local

	float suma = 0;

	suma = g + x;

	printf ("La suma es: %f",suma);

	return 0;

}

