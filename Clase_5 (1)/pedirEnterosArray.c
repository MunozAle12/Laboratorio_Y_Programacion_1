#include <stdio.h>
#include <stdlib.h>

int pedirEnterosArray(int* arrayNumeros, int cantidad)
{
    int i;
    int retorno = -1;

    for(i = 0; i < NUMEROS; i++)
    {
        getInt("\nIngrese numero: ", "Fuera de rango\n", 2, 0, 99, &arrayNumeros[i]);
        //printf("%d", auxiliar); VERIFICAR QUE LA FUNCION getInt FUNCIONE.
    }
    if(cantidad <= NUMEROS)
    {
        retorno = 0;
    }
    return retorno;
}
