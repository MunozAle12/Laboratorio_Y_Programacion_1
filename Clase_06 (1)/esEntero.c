int esEntero(char* pTextoUno)
{
    int i = 0;

    while(pTextoUno[i] != '\0')
    {
        if(pTextoUno[i] > '9' || pTextoUno[i] < '0')
        {
            return 0;
            i++;
        }
    }
    return 1;
}
