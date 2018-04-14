#include <stdio.h>
#include <stdlib.h>
#include "getInt.h"
#include "operacionesCalculadora.h"
#define CANTIDAD 2

int main()
{
    int arrayNumeros[CANTIDAD];
    int opcionMenu = 0;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    float resultadoDivision;
    int resultadoFactorial;

    do
    {
        printf("*********MENU DE OPCIONES*********\n");
        printf("1 - Ingresar el 1er operando (A=X)\n");
        printf("2 - Ingresar el 2do operando (B=Y)\n");
        printf("3 - Calcular la suma (A+B)\n");
        printf("4 - Calcular la resta (A-B)\n");
        printf("5 - Calcular la division (A/B)\n");
        printf("6 - Calcular la multiplicacion (A*B)\n");
        printf("7 - Calcular el factorial (A!)\n");
        printf("8 - Calcular todas las operaciones\n");
        printf("9 - Salir\n");
        scanf("%d", &opcionMenu);
        fflush(stdin);

        switch(opcionMenu)
        {
            case '1':
                if(getInt("\nIngresar el 1er operando (A=X)\n", "\nFuera de rango\n", 2, -32768, 32767, &arrayNumeros[0]) == 0)
                {
                    continue;
                }
                else
                {
                    printf("\nError\n");
                    break;
                }
                break;
            case '2':
                if(getInt("\nIngresar el 2do operando (B=Y)\n", "\nFuera de rango\n", 2, -32768, 32767, &arrayNumeros[1]) == 0)
                {
                    continue;
                }
                else
                {
                    printf("\nError\n");
                    break;
                }
            case '3':
                resultadoSuma = suma(&arrayNumeros[0], &arrayNumeros[1]);
                printf("El resultado de la suma es %d\n", resultadoSuma);
                break;
            case '4':
                resultadoResta = resta(&arrayNumeros[0], &arrayNumeros[1]);
                printf("El resultado de la resta es %d\n", resultadoResta);
                break;
            case '5':
                resultadoDivision = division(&arrayNumeros[0], &arrayNumeros[1]);
                printf("El resultado de la division es %f\n", resultadoDivision);
                break;
            case '6':
                resultadoMultiplicacion = multiplicacion(&arrayNumeros[0], &arrayNumeros[1]);
                printf("El resultado de la multiplicacion es %d\n", resultadoMultiplicacion);
                break;
            case '7':
                resultadoFactorial = factorial(&arrayNumeros[0]);
                printf("El resultado de la factorial es %d\n", resultadoFactorial);
                break;
            case '8':
                resultadoSuma = suma(&arrayNumeros[0], &arrayNumeros[1]);
                resultadoResta = resta(&arrayNumeros[0], &arrayNumeros[1]);
                resultadoDivision = division(&arrayNumeros[0], &arrayNumeros[1]);
                resultadoMultiplicacion = multiplicacion(&arrayNumeros[0], &arrayNumeros[1]);
                resultadoFactorial = factorial(&arrayNumeros[0]);
                printf("El resultado de la suma es %d\n", resultadoSuma);
                printf("El resultado de la resta es %d\n", resultadoResta);
                printf("El resultado de la division es %f\n", resultadoDivision);
                printf("El resultado de la multiplicacion es %d\n", resultadoMultiplicacion);
                printf("El resultado de la factorial es %d\n", resultadoFactorial);
                break;
        }//FIN DEL SWITCH
    }while(opcionMenu !=9);
    printf("\nPulse ENTER para salir.");
    return 0;
}
