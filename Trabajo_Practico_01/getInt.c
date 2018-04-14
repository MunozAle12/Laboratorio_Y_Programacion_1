#include <stdio.h>
#include <stdlib.h>

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int getInt(char *mensaje, char *mensajeError, int reintentos, int minimo, int maximo, int *resultado)
{
    int auxiliarEnteros;
    int retorno = -1;

    while(reintentos >= 0)
    {
        reintentos--;
        printf("%s", mensaje);
        scanf("%d", &auxiliarEnteros);
        if(auxiliarEnteros >= minimo && auxiliarEnteros <= maximo)
        {
            *resultado = auxiliarEnteros;
            retorno = 0;
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
