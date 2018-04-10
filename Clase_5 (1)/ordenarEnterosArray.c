
int ordenarEnterosArray(int* arrayNumeros, auxiliar)
{
    int i;
    for(i = 0; i < NUMEROS; i++)
    {
        if(i == 0)
        {
            auxiliar = arrayNumeros[0];
        }
        else
        {
            if(auxiliar >= arrayNumeros[0])
            {
                auxiliar = arrayNumeros[i+1];
            }
            else
            {
                auxiliar = arrayNumeros[i]
            }
        }
    }
    return arrayNumeros;
}
