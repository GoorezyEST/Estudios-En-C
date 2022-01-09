// La serie Fibonacci.

#include <stdio.h>

int main(){

    int numero;
    int i;
    int x = 0;
    int y = 1;
    int z = 1;

    printf("Digite el numero de elementos: ");
    scanf("%i",&numero);

    for (i=1;i<=numero;i++){
        z = x + y;
        x = y;
        y = z;

        printf("%i ",z);
    }

    return 0;

}
