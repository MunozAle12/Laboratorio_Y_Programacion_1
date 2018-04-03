/*ESCRIBIR UN PROGRAMA QUE PIDA AL USUARIO QUE INGRESE CINCO NUMEROS E INFORME POR PANTALLA EL NUMERO MAYOR,
EL NUMERO MENOR Y EL PROMEDIO. SI EL USUARIO INGRESA UN NUMERO MENOR A 0, LE PIDA LO QUE REINGRESE.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroIngresado;
    int acumulador = 0;
    float promedio;
    int i = 0;
    int numeroMax;
    int numeroMin;
  //int auxiliarLetra;

    printf("Ingrese un numero. \n");
    fflush(stdin);
    scanf("%d", &numeroIngresado);
   /*auxiliarLetra = scanf(numeroIngresado);
    while(auxiliarLetra != 1)
    {
        printf("No ingrese letras. Reingrese numero. \n");
        continue;
    }*/
    while(numeroIngresado < 0)
    {
        printf("El numero debe ser mayor a 0. Reingrese un numero. \n");
        scanf("%d", &numeroIngresado);
    }
    numeroMin = numeroIngresado;
    numeroMax = numeroIngresado;
    acumulador = numeroIngresado;

    for(i = 0; i < 4; i++)
    {
        printf("Ingrese un numero. \n");
        fflush(stdin);
        scanf("%d", &numeroIngresado);
       /*auxiliarLetra = scanf(numeroIngresado);
        if(auxiliarLetra != 1)
        {
            printf("No ingrese letras. Reingrese numero. \n");
            continue;
        }*/
        while(numeroIngresado < 0)
        {
            printf("El numero ingresado debe ser mayor a 0. Reingrese el numero. \n");
            scanf("%d", &numeroIngresado);
        }
        if(numeroIngresado > numeroMax)
        {
            numeroMax = numeroIngresado;
        }
        else
        {
            numeroMin = numeroIngresado;
        }
        acumulador = acumulador + numeroIngresado;
    }
    promedio = (float)acumulador / 5;
    printf("El numero mayor es %d \n", numeroMax);
    printf("El numero menor es %d \n", numeroMin);
    printf("El promedio es %f \n", promedio);
    return 0;
}
