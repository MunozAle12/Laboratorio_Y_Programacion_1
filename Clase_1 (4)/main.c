/*Escribir un programa que le pida al usuario ingresar su apellido, su sueldo actual, su aumento
y se muestre por pantalla su nuevo sueldo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char apellido;
    float sueldo;
    int aumento;
    float sueldoConAumento;

    printf("Ingrese su apellido \n");
    scanf("%c", &apellido);
    printf("Ingrese su sueldo \n");
    scanf("%f", &sueldo);
    printf("Ingrese el aumento de su sueldo \n");
    scanf("%d", &aumento);

    aueldoConAumento = (sueldo * aumento) / 100;
    sueldoConAumento = sueldoConAumento + sueldo;

    printf("Su apellido es %c, su sueldo es %f, su aumento es del %d porciento, su nuevo sueldo es %f", apellido, sueldo, aumento, sueldoConAumento);
    return 0;
}
