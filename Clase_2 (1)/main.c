/*Escribir un programa que pida al usuario que ingrese tres numeros y que informe el promedio por pantalla.
Si el usuario ingresa un numero menor a 0, le pida que lo reingrese.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int acumulador = 0;
    float promedio;
    int contador = 0;

    for(contador = 0; contador < 3; contador++)
    {
        printf("Ingrese un numero. \n");
        scanf("%d", &numero);
        while(numero < 0)
        {
            printf("El numero ingresado debe ser mayor a 0. Reingrese el numero. \n");
            scanf("%d", &numero);
        }
        acumulador = acumulador + numero;
    }
    promedio = (float)acumulador / contador;
    printf("El promedio es %f", promedio);
    return 0;
}
