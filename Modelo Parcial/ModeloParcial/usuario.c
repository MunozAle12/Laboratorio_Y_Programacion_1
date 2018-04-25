#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"

int usu_init(Usuario* arrayUsuario, int tamanioArray)
{
    int i;
    int valor = 1;

    for(i = 0; i < tamanioArray; i++)
    {
        arrayUsuario[i].isEmpty = valor;
    }
    return 0;
}

int usu_alta(Usuario* arrayUsuario, int tamanioArray)
{
    char auxNombreUsuario[50];
    char auxPassword[50];
    int lugarLibre;
    int retorno = -1;

    lugarLibre = buscarLugarLibre(Usuario* arrayUsuario, USU_CANTIDAD);
    if(lugarLibre != -1)
    {
        getString("Ingrese su nombre de usuario:", &auxNombreUsuario);
        strcpy(arrayUsuario[lugarLibre].nombreUsuario, auxNombreUsuario);
        getString("Ingrese su nombre de usuario:", &auxPassword);
        strcpy(arrayUsuario[lugarLibre].password, auxPassword);
        arrayUsuario[lugarLibre].idUsuario = lugarLibre;
        arrayUsuario[lugarLibre].isEmpty = 0;
        return 0;
    }
    return retorno;
}

int buscarLugarLibre(Usuario* arrayUsuario, int tamanioArray)
{
    int i;
    int valor = 1;
    int retorno = -1;/*SI RETORNA -1 ES PORQUE NO HAY LUGARES DISPONIBLES*/

    for(i = 0; i < tamanioArray; i++)
    {
        if(arrayUsuario[i].isEmpty == valor)
        {
            retorno = i;
        }
    }
    return retorno;
}

void getString(char mensaje[], char input[])
{
    printf("%s", mensaje);
    scanf ("%s", input);
}

int usu_baja(Usuario* arrayUsuario, int tamanioArray)
{
    char auxiliarIdBaja;

    usu_listado(Usuario* arrayUsuario, tamanioArray);
    if(!getStringNumeros("Ingrese el id a dar de baja.\n", auxiliarIdBaja));
    {
        printf("El id debe ser numerico.");
        break;
    }
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

void usu_listado(Usuario* arrayUsuario, int tamanioArray)
{
    int i;

    for(i = 0; i < tamanioArray; i++)
    {
        if(arrayUsuario[i].isEmpty != 1)
        {
            printf("\nNombre de usuario: %s - Id: %d - Index: %d",arrayUsuario[i].nombreUsuario, arrayUsuario[i].idUsuario, i);
        }
    }
}

