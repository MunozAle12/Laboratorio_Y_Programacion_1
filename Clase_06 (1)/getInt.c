#include <stdio.h>
#include <stdlib.h>

int getInt(char* mensaje, char* mensajeError, int reintentos, int minimo, int maximo, char* pTextoUno)
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
            *pTextoUno = auxiliarEnteros;
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
/*
int mostrarArray(int* array, int cantidad)
{
    int retorno = -1;
    int i;

    if(cantidad > 0)
    {
        retorno = 0;
        for(i = 0; i < NUMEROS; i++)
        {
            printf("\n%d", array[i]);
        }
    }
    return retorno;
}

int pedirEnterosArray(int* arrayNumeros, int cantidad)
{
    int retorno = -1;
    int i;

    if(cantidad <= NUMEROS)
    {
        retorno = 0;
    }
    for(i = 0; i < NUMEROS; i++)
    {
        getInt("\nNumero: ", "Fuera de rango\n", 2, 0, 100, &arrayNumeros[i]);
        //printf("%d", auxiliar); VERIFICAR QUE LA FUNCION getInt FUNCIONE.
    }
    return retorno;
}

int promedioEnterosArray(int* arrayNumeros, int cantidad)
{
    int i;

    for(i = 0; i < NUMEROS; i++)
    {

    }
}

int ordenarEnterosArray(int* arrayNumeros, auxiliar)
{
    int i;
    for(i = 0; i < NUMEROS; i++)
    {
        if(i == 0)
        {
            auxiliar = arrayNumeros[0];
        }
        else
        {
            if(auxiliar >= arrayNumeros[0])
            {
                auxiliar = arrayNumeros[i+1];
            }
            else
            {
                auxiliar = arrayNumeros[i]
            }
        }
    }
    return arrayNumeros;
}
*/
