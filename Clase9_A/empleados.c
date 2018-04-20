#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "empleados.h"

int emp_init(Empleado* arrayEmpleados, int tamanioArray)
{
    int i;
    int valor = 1;
    int retorno = 1;

    for(i = 0; i < tamanioArray; i++)
    {
        arrayEmpleados[i].idEmpleado = valor;
    }
    return retorno;
}

int emp_mostrar(Empleado* arrayEmpleados, int tamanioArray)
{
    int i;
    int retorno = 1;

    for(i = 0; i < tamanioArray; i++)
    {
        if(arrayEmpleados[i].idEmpleado != 1)
        {
            printf("\nNombre: %s\n", arrayEmpleados[i].nombre);
            printf("\nApellido: %s\n", arrayEmpleados[i].apellido);
            printf("\nidEmpleado: %d\n", arrayEmpleados[i].idEmpleado);
        }
    }
    return retorno;
}

int buscarLibre(Empleado* arrayEmpleados,int tamanioArray)
{
    int i;
    int valor = 1;
    int retorno = -1;

    for(i = 0; i < tamanioArray; i++)
    {
        if(arrayEmpleados[i].idEmpleado == valor)
        {
            retorno = i;
        }
    }
    return retorno;
}


int emp_alta(Empleado* arrayEmpleados, int tamanioArray, int id)
{
    char auxStrNombre[50];
    char auxStrApellido[50];
    int auxIdEmpleado;
    int lugarLibre;
    int retorno = 1;

    lugarLibre = buscarLibre(Empleado arrayEmpleados, CANTIDAD);
    if(!getStringLetras("Ingrese nombre del empleado.\n", auxStrNombre))
    {
        printf("Ingrese solo letras.");
        return 0;
    }
    if(!getStringLetras("Ingrese apellido del empleado.\n", auxStrApellido))
    {
        printf("Ingrese solo letras.");
        return 0;
    }
    if(!getStringNumeros("Ingrese ID del empleado.\n", auxIdEmpleado))
    {
        printf("El ID debe ser numerico.");
        return 0;
    }
    strcpy(arrayEmpleados[lugarLibre].nombre, auxStrNombre);
    strcpy(arrayEmpleados[lugarLibre].apellido, auxStrApellido);
    arrayEmpleados[lugarLibre].idEmpleado = auxIdEmpleado;
    return retorno;
}

int empBaja(Empleado* arrayEmpleados, int tamanioArray, int id)
{

}

int getStringLetras(char mensaje[], char input[])
{
    char auxiliarStr[100];

    getString(mensaje, auxiliarStr);

    if(esSoloLetras(auxiliarStr))
    {
        strcpy(input, auxiliarStr);
        return 1;
    }
    return 0;
}

void getString(char mensaje[], char input[])
{
    printf("%s", mensaje);
    scanf ("%s", input);
}

int esSoloLetras(char str[])
{
   int i = 0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
       {
           return 0;
       }
       i++;
   }
   return 1;
}

int getStringNumeros(char mensaje[],char input[])
{
    char auxStrNumeros[100];

    getString(mensaje, auxStrNumeros);
    if(esNumero(auxStrNumeros))
    {
        strcpy(input, auxStrNumeros);
        return 1;
    }
    return 0;
}

int esNumero(char str[])
{
   int i = 0;

   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
       {
           return 0;
       }
       i++;
   }
   return 1;
}
