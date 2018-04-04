#include <stdio.h>
#include <stdlib.h>

int getInt(char *mensaje, char *mensajeError, int intentos, int minimo, int maximo, int *resultado);
int main()
{
    int resultado;
    if(getInt("\n Ingrese su edad.", "El rango es de 0 - 199.", 2, 0, 99, &resultado) == 0)
    {
        printf("La edad es: %d", resultado);
    }
    else
    {
        printf("Error");
    }
    return 0;
}
int getInt(char *mensaje, char *mensajeError, int reintentos, int minimo, int maximo, int *resultado)
{
    int auxiliarEnteros;
    int retorno = -1;
    while(reintentos >= 0);
    {
        reintentos--;
        printf("%s", mensaje);
        scanf("%d", &auxiliarEnteros);
        if(auxiliarEnteros >= minimo && auxiliarEnteros <= maximo)
        {
            retorno = 0;
            *resultado = auxiliarEnteros;
            break;
        }
        else
        {
            if(auxiliarEnteros < minimo)
            {
                retorno = -1;
            }
            else
            {
                retorno = -2;
            }
            printf("%s", mensajeError);
        }
    }
    return retorno;
}
