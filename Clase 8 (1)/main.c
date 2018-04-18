/*
ESCRIBIR UN PROGRAMA QUE GUARDE Y MUESTRE APELLIDOS DE 5 ALUMNOS CON LAS NOTAS DEL PRIMER PARCIAL, SEGUNDO PARCIAL Y PROMEDIO.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5

float sacarPromedio(int notaUno, int notaDos);

int main()
{
    char apellido[TAMANIO][20] = {"Lopez", "Alvarez", "Zapata", "Perez", "Albornoz"};
    int nota1[TAMANIO] = {10, 4, 2, 9, 8};
    int nota2[TAMANIO] = {1, 8, 2, 8, 9};
    float promedio[TAMANIO];
    int i;

    for(i = 0; i < TAMANIO; i++)
    {
        promedio[i] = sacarPromedio(nota1[i], nota2[i]);
        printf("Apellido: %s\n", apellido[i]);
        printf("Nota 1: %d\n", nota1[i]);
        printf("Nota 2: %d\n", nota2[i]);
        printf("Promedio: %.2f\n", promedio[i]);
        printf("_______________________________\n");
    }
    return 0;
}

float sacarPromedio(int notaUno, int notaDos)
{
    float retorno;
    retorno = (float)(notaUno + notaDos)/2;
    return retorno;
}

float ordenarPromedioInsertion(int* arrayPromedio, int TAMANIO, int orden)
{
	int auxiliarPromedio;
    int j, i;

	for(i = 1; i < TAMANIO; i++) {
		auxiliarPromedio = arrayPromedio[i];
		j = i;
		while(j > 0 && auxiliarPromedio < arrayPromedio[j - 1])
        {
			arrayPromedio[j] = arrayPromedio[j - 1];
			j--;
		}
		arrayPromedio[j] = auxiliarPromedio;
	}
    return 0;
}
