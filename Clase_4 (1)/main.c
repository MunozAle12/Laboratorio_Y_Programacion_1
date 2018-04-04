#include <stdio.h>
#include <stdlib.h>

int suma(int numeroUno, int numeroDos);

int main()
{
    int primerNumero;
    int segundoNumero;
    int resultado;

    printf("Ingrese el primer numero a sumar. \n");
    scanf("%d", &primerNumero);
    printf("Ingrese el segundo numero a sumar. \n");
    scanf("%d", &segundoNumero);
    suma(int , int segundoNumero, &resultado);
    if(suma(primerNumero, segundoNumero, &resultado) == 0)
    {
        printf("\nEl resultado es %d", resultado);
    }
    else
    {
        printf("\nError.")
    }
}
int suma(int numeroUno, numeroDos, int *resultado)
{
    long totalAuxiliar;
    int retorno = -1;
    totalAuxiliar = numeroUno + numeroDos;
    if(totalAuxiliar < 32767 && totalAuxiliar > -32767)
    {
        return totalAuxiliar;
        retorno = 0;
    }
    return totalAuxiliar;
}
