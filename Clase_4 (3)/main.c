#include <stdio.h>
#include <stdlib.h>

int dividirEnteros(int dividendo, int divisor);
int main()
{
    int resultado;
    resultado = dividirEnteros(100,4);
    printf("%d", resultado);
    return 0;
}
int dividirEnteros(int dividendo, int divisor)
{
    float totalDivision;
    totalDivision = dividendo / divisor;
    return totalDivision;
}
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado;
    resultado = dividirEnteros(100,4);
    printf("%d", resultado);
    resultado = retornarValorEntre(-40, 40, &resultado);
    if(sePudo == 0)
    {
        printf("%d", resultado);
    }
    else
    {
        printf("No se pudo.");
    }
    printf("%d", resultado);
    return 0;
}
*/
