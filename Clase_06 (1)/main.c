#include <stdio.h>
#include <stdlib.h>
#include "getInt.h"
#include "esEntero.h"
#define BUFFER 1000

int main()
{
    char textoUno[BUFFER];

    if(getInt("Ingrese algo.\n", "Fuera de rango.\n", 2, 0, 9, &textoUno) == 0)
    {
        if(esEntero(&textoUno) == 0)
        {
            printf("\nEl texto es un entero");
        }
    }
    else
    {
        printf("\nEl texto no es un entero");
    }
    return 0;
}
