//Escribir un programa que pida al usuario ingresar 3 numeros y muestre por pantalla el numero mayor.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero;
    int segundoNumero;
    int tercerNumero;

    printf("Ingrese el primer numero \n");
    scanf("%d", &primerNumero);
    printf("Ingrese el segundo numero \n");
    scanf("%d", &segundoNumero);
    printf("Ingrese el tercer numero \n");
    scanf("%d", &tercerNumero);

    if(primerNumero > segundoNumero && primerNumero > tercerNumero)
    {
        printf("El numero mayor es %d", primerNumero);
    }
    else
    {
        if(segundoNumero > tercerNumero)
        {
            printf("El numero mayor es %d", segundoNumero);
        }
        else
        {
            printf("El numero mayor es %d", tercerNumero);
        }
    }
    return 0;
}
