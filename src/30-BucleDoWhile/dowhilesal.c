// Bucle Do While:
// Sintaxis.
//          do {
//              Instrucciones
//              
//              } while (condicion)

#include <stdio.h>

int main(){

    char opc;

    do{
        fflush(stdin);
        printf("Hola");
        printf("\n Digite 's' para saludar nuevamente: ");
        scanf("%c",&opc);
        
    } while (opc == 's' || opc == 'S');
    
    return 0;
}