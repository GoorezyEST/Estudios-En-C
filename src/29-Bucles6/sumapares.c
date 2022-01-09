// Hacer un programa que muestre los numeros pares desde 1 hasta N.

#include<stdio.h>

int main(){

    int number;
    int min=1;
    int max;

    printf("Introduzca el valor maximo en el rango: ");
    scanf("%i",&max);

    printf("\nLos numeros pares en el rango indicado son: ");
    for(number = min;number <= max; number++)

         if(number % 2 ==0)
             printf("%d ",number);
 
    return 0;
}