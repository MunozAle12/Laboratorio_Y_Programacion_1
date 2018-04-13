#include <stdio.h>
#include <stdlib.h>
#include "getInt.h"
#include "ordenarArrayInt.h"
#include "mostrarArray.h"
#define CANTIDAD 5

int main()
{
    int arrayNumeros[CANTIDAD];
    int posicionArray;
    int auxiliar;

    for(posicionArray = 0; posicionArray <  CANTIDAD; posicionArray++)
    {
        if(getInt("Ingrese un numero.\n", "Fuera de rango.\n", 2, 0, 9, &auxiliar)==0)
        {
            arrayNumeros[posicionArray] = auxiliar;
        }
        else
        {
            printf("\nError.");
        }
    }
    ordenarArrayInt(arrayNumeros, CANTIDAD, 1);
    mostrarArray(arrayNumeros, CANTIDAD);
    printf("\n**************");
    ordenarArrayInt(arrayNumeros, CANTIDAD, 0);
    mostrarArray(arrayNumeros, CANTIDAD);
    return 0;
}
