//Escribir un programa que le pida al usuario que ingrese 3 numeros y los muestre por pantalla.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int primerNumero;
    int segundoNumero;
    int tercerNumero;

    printf("Ingrese el primer numero \n");
    scanf("%d", &primerNumero);
    printf("Ingrese el segundo numero \n");
    scanf("%d", &segundoNumero);
    printf("Ingrese el tercer numero \n");
    scanf("%d", &tercerNumero);

    printf("%d %d %d", primerNumero, segundoNumero, tercerNumero);
    return 0;
}
