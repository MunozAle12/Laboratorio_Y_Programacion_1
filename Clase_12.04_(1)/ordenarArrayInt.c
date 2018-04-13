#include <stdio.h>
#include <stdlib.h>

int ordenarArrayInt(int* array, int CANTIDAD, int orden)
{
    int i;
    int auxiliar;
    int flagSwap;

    do
    {
        flagSwap = 0;
        for(i = 0; i < CANTIDAD - 1; i++)
        {
                if((array[i] > array[i+1] && orden == 1) || (array[i] < array[i+1] && orden == 0))
                {
                    auxiliar = array[i+1];
                    array[i+1] = array[i];
                    array[i] = auxiliar;
                    flagSwap = 1;
                }
        }
    }while(flagSwap == 1);
    return 0;
}
