/*
ESCRIBIR UN PROGRAMA QUE PIDA 10 NUMEROS Y ESOS NUMEROS EN VEZ DE PROCESARLOS EN EL MOMENTO LOS GUARDAMOS EN EL ARRAY.
*/
#include <stdio.h>
#include <stdlib.h>
#include "getInt.h"
#include "pedirEnterosArray.h"
#include "mostrarArray.h"
#define NUMEROS 5

int main()
{
    int arrayNumeros[NUMEROS];

    pedirEnterosArray(arrayNumeros, NUMEROS);
    mostrarArray(arrayNumeros, NUMEROS);
    pedirEnterosArray(arrayNumeros, NUMEROS);
    //ordenarEnterosArray(arrayNumeros, NUMEROS);

    return 0;
}
