#include <stdio.h>

void puntero (int* n) {

    int y = *n;
    y = (y+2) * 2;
    *n = y;

}

int main() {

    int x = 10;  //Se le asigna valor a la variable.
    puntero (&x);     //Se modifica su valor en la funcion "puntero".
    printf("%i.\n", x);
    return 0;

}