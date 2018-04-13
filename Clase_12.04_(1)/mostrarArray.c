#include <stdio.h>
#include <stdlib.h>

int mostrarArray(int* array, int CANTIDAD)
{
    int i;

    for(i = 0; i < CANTIDAD; i++)
    {
        printf("\n%d", array[i]);
    }
    return 0;
}
