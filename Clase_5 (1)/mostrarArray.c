#include <stdio.h>
#include <stdlib.h>

int mostrarArray(int* pArrayNumeros, int cantidad)
{
    int i;
    int retorno = -1;

    if(cantidad > 0)
    {
        for(i = 0; i < NUMEROS; i++)
        {
            printf("\n%d", arrayNumeros[i]);
        }
        retorno = 0;
    }
    return retorno;
}
