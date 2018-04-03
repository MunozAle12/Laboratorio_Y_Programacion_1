/*ESCRIBIR UN PROGRAMA QUE LE PERMITA AL USUARIO INGRESAR DOS NUMEROS Y POR MEDIO DE FUNCIONES CALCULAR
LA SUMA, RESTA, MULTIPLICACION Y DIVISION DE LOS MISMOS.*/

#include <stdio.h>
#include <stdlib.h>

int operacion();//PARAMETRO DE LA FUNCION QUE PIDE AL USUARIO LA OPERACION DESEADA.
int suma(int numeroUno, int numeroDos);//PARAMETRO DE LA FUNCION QUE REALIZA LA OPERACION SUMAR.
int resta(int numeroUno, int numeroDos);//PARAMETRO DE LA FUNCION QUE REALIZA LA OPERACION RESTAR.
int multiplicacion(int numeroUno, int numeroDos);//PARAMETRO DE LA FUNCION QUE REALIZA LA OPERACION MULTIPLICAR.
float division(int numeroUno, int numeroDos);//PARAMETRO DE LA FUNCION QUE REALIZA LA OPERACION DIVIDIR.

int main()
{
    int primerNumero;
    int segundoNumero;
    char auxOperacion;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    float resultadoDivision;

    printf("Ingrese el primer numero que quiere calcular. \n");
    scanf("%d", &primerNumero);
    auxOperacion = operacion();
    printf("Ingrese el segundo numero que quiere calcular. \n");
    scanf("%d", & segundoNumero);

    resultadoSuma = suma(primerNumero, segundoNumero);
    printf("El resultado de la suma es %d", resultadoSuma);

    resultadoResta = resta(primerNumero, segundoNumero);
    printf("El resultado de la resta es %d", resultadoResta);

    resultadoMultiplicacion = multiplicacion(primerNumero, segundoNumero);
    printf("El resultado de la multiplicacion es %d", resultadoMultiplicacion);

    resultadoDivision = division(primerNumero, segundoNumero);
    printf("El resultado de la division es %f", resultadoDivision);
    return 0;
}

int operacion()
{
    char calculo;
    printf("Ingrese la operacion que desea realizar. \n");
    scanf("%c", calculo);
    return calculo;
}
/**
 *\brief RECIBE LOS NUMEROS QUE INGRESA EL USUARIO Y CALCULA LA SUMA DE LOS MISMOS.
 *\param PRIMER NUMERO QUE INGRESA EL USUARIO.
 *\param SEGUNDO NUMERO QUE INGRESA EL USURIO.
 *\return TOTAL DE LA SUMA CALCULADA.
 */
int suma(int numeroUno, int numeroDos)
{
    int totalSuma;

    totalSuma = numeroUno + numeroDos;
    return totalSuma;
}
/**
 *\brief RECIBE LOS NUMEROS QUE INGRESA EL USUARIO Y CALCULA LA RESTA DE LOS MISMOS.
 *\param PRIMER NUMERO QUE INGRESA EL USUARIO.
 *\param SEGUNDO NUMERO QUE INGRESA EL USURIO.
 *\return TOTAL DE LA RESTA CALCULADA.
 */
int resta(int numeroUno, int numeroDos)
{
    int totalResta;

    totalResta = numeroUno - numeroDos;
    return totalResta;
}
/**
 *\brief RECIBE LOS NUMEROS QUE INGRESA EL USUARIO Y CALCULA LA MULTIPLICACION DE LOS MISMOS.
 *\param PRIMER NUMERO QUE INGRESA EL USUARIO.
 *\param SEGUNDO NUMERO QUE INGRESA EL USURIO.
 *\return TOTAL DE LA MULTIPLICACION CALCULADA.
 */
int multiplicacion(int numeroUno, int numeroDos)
{
    int totalMultiplicacion;

    totalMultiplicacion = numeroUno * numeroDos;
    return totalMultiplicacion;
}
/**
 *\brief RECIBE LOS NUMEROS QUE INGRESA EL USUARIO Y CALCULA LA DIVISION DE LOS MISMOS.
 *\param PRIMER NUMERO QUE INGRESA EL USUARIO.
 *\param SEGUNDO NUMERO QUE INGRESA EL USURIO.
 *\return TOTAL DE LA DIVISION CALCULADA.
 */
float division(int numeroUno, int numeroDos)
{
    float totalDivision;

    totalDivision = (float)numeroUno / numeroDos;
    return totalDivision;
}
/**
 *\brief "DAR UNA BREVE EXPLICACION DE LO QUE SE TRATA LA FUNCION"
 *\param "HACER REFERENCIA A LOS PARAMETROS. TANTOS COMO SEAN NECESARIOS, PERO CADA UNO EN DISTINTOS BLOQUES".
 *\return "HACER REFERENCIA A CUAL ES EL SENTIDO DEL DATO QUE RETORNA LA FUNCION".
 */
