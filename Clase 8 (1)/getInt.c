#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "getInt.h"

int getInt(char* mensaje, char* mensajeError, int reintentos, int minimo, int maximo, int* resultado)
{
    int auxiliarEnteros;
    int retorno = -1;
    while(reintentos >= 0)
    {
        reintentos--;
        printf("%s", mensaje);
        scanf("%d", &auxiliarEnteros);
        if(auxiliarEnteros >= minimo && auxiliarEnteros <= maximo)
        {
            retorno = 0;
            *resultado = auxiliarEnteros;
            break;
        }
        else
        {
            if(auxiliarEnteros < minimo)
            {
                retorno = -1;
            }
            else
            {
                retorno = -2;
            }
            printf("%s", mensajeError);
        }
    }
    return retorno;
}

int mostrarArrayAlumnos(int* arrayApellido, int* arrayNota1, int* arrayNota2, int TAMANIO)
{
    int i;

    for(i = 0; i < TAMANIO; i++)
    {
        printf("%s\n", *arrayApellido[i][20]);
        //printf("%s\n", *arrayNota1[i]);
        //printf("%s\n", *arrayNota2[i]);
        //printf("**********\n");
    }
    return 0;
}
/*
float getFloat(char* mensaje, char* mensajeError, int reintentos, int minimo, int maximo, int* resultado)
{
    float auxiliarFloat;
    int retorno = -1;
    while(reintentos >= 0)
    {
        reintentos--;
        printf("%s", mensaje);
        scanf("%f", &auxiliarFloat);
        if(auxiliarFloat >= minimo && auxiliarFloat <= maximo)
        {
            retorno = 0;
            *resultado = auxiliarFloat;
            break;
        }
        else
        {
            if(auxiliarFloat < minimo)
            {
                retorno = -1;
            }
            else
            {
                retorno = -2;
            }
            printf("%s", mensajeError);
        }
    }
    return retorno;
}

int getChar(char* mensaje, char* mensajeError, int reintentos, int minimo, int maximo, int* resultado)
{
    char auxiliarChar;
    int retorno = -1;
    while(reintentos >= 0)
    {
        reintentos--;
        printf("%s", mensaje);
        scanf("%d", &auxiliarEnteros);
        if(auxiliarEnteros >= minimo && auxiliarEnteros <= maximo)
        {
            retorno = 0;
            *resultado = auxiliarEnteros;
            break;
        }
        else
        {
            if(auxiliarEnteros < minimo)
            {
                retorno = -1;
            }
            else
            {
                retorno = -2;
            }
            printf("%s", mensajeError);
        }
    }
    return retorno;
}
*/
