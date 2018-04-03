/*ESCRIBIR UN PROGRAMA QUE LE PERMITA AL USUARIO INGRESAR DOS NUMEROS Y POR MEDIO DE UNA FUNCION CALCULAR LA SUMA DE LOS MISMOS.*/
#include <stdio.h>
#include <stdlib.h>

int suma(int numeroUno, int numeroDos);//PARAMETRO DE LA FUNCION QUE REALIZA LA OPERACION SUMA.

int main()
{
    int primerNumero;
    int segundoNumero;
    int resultado;

    printf("Ingrese el primer numero que quiere sumar. \n");
    scanf("%d", &primerNumero);
    printf("Ingrese el segundo numero que quiere sumar. \n");
    scanf("%d", & segundoNumero);
    resultado = suma(primerNumero, segundoNumero);
    printf("El resultado de la suma es %d", resultado);
    return 0;
}
/**
 *\brief RECIBE LOS NUMEROS QUE INGRESA EL USUARIO Y CALCULA LA SUMA DE LOS MISMOS.
 *\param PRIMER NUMERO QUE INGRESA EL USUARIO.
 *\param SEGUNDO NUMERO QUE INGRESA EL USURIO.
 *\return TOTAL DE LA SUMA CALCULADA.
 */
int suma(int numeroUno, int numeroDos)
{
    int total;

    total = numeroUno + numeroDos;
    return total;
}
/**
 *\brief "DAR UNA BREVE EXPLICACION DE LO QUE SE TRATA LA FUNCION"
 *\param "HACER REFERENCIA A LOS PARAMETROS. TANTOS COMO SEAN NECESARIOS, PERO CADA UNO EN DISTINTOS BLOQUES".
 *\return "HACER REFERENCIA A CUAL ES EL SENTIDO DEL DATO QUE RETORNA LA FUNCION".
 */
