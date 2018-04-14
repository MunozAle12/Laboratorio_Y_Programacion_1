#include <stdio.h>
#include <stdlib.h>
#include "getInt.h"

/**
 *\brief RECIBE LOS NUMEROS QUE INGRESA EL USUARIO Y CALCULA LA SUMA DE LOS MISMOS.
 *\param int numeroUno ES EL PRIMER NUMERO QUE INGRESA EL USUARIO.
 *\param int numeroDos ES EL SEGUNDO NUMERO QUE INGRESA EL USURIO.
 *\return int totalSuma ES EL VALOR QUE RETORNA ES EL TOTAL DE LA SUMA CALCULADA.
 */
int suma(int* numeroUno, int* numeroDos)
{
    int totalSuma;

    totalSuma = *numeroUno + *numeroDos;
    return totalSuma;
}
/**
 *\brief RECIBE LOS NUMEROS QUE INGRESA EL USUARIO Y CALCULA LA RESTA DE LOS MISMOS.
 *\param int numeroUno ES EL PRIMER NUMERO QUE INGRESA EL USUARIO.
 *\param int numeroDos ES EL SEGUNDO NUMERO QUE INGRESA EL USURIO.
 *\return int totalResta ES EL VALOR QUE RETORNA ES EL TOTAL DE LA OPERACION CALCULADA.
 */
int resta(int* numeroUno, int* numeroDos)
{
    int totalResta;

    totalResta = *numeroUno - *numeroDos;
    return totalResta;
}
/**
 *\brief RECIBE LOS NUMEROS QUE INGRESA EL USUARIO Y CALCULA LA MULTIPLICACION DE LOS MISMOS.
 *\param int numeroUno ES EL PRIMER NUMERO QUE INGRESA EL USUARIO.
 *\param int numeroDos ES EL SEGUNDO NUMERO QUE INGRESA EL USURIO.
 *\return int totalMultiplicacion ES EL VALOR QUE RETORNA ES EL TOTAL DE LA OPERACION CALCULADA.
 */
int multiplicacion(int* numeroUno, int* numeroDos)
{
    int totalMultiplicacion;

    totalMultiplicacion = *numeroUno * *numeroDos;
    return totalMultiplicacion;
}
/**
 *\brief RECIBE LOS NUMEROS QUE INGRESA EL USUARIO Y CALCULA LA DIVISION DE LOS MISMOS.
 *\param int numeroUno ES EL PRIMER NUMERO QUE INGRESA EL USUARIO.
 *\param int numeroDos ES EL SEGUNDO NUMERO QUE INGRESA EL USURIO.
 *\return int totalDivision ES EL VALOR QUE RETORNA ES EL TOTAL DE LA OPERACION CALCULADA.
 */
float division(int* numeroUno, int* numeroDos)
{
    float totalDivision;

    totalDivision = *numeroUno / *numeroDos;
    return totalDivision;
}
int factorial(int* numeroUno)
{
    int i = 1;
    int totalFactorial = 1;

    for(i = *numeroUno; i > 1; i--)
    {
        totalFactorial = totalFactorial * i ;
    }
    return totalFactorial;
}
