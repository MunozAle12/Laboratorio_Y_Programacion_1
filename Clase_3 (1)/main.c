/* ESCRIBIR UN PRGRAMA EN C PARA ADIVINAR UN N�MERO ENTRE 1 Y 10 QUE PREVIAMENTE SER� DEFINIDO COMO UNA CONSTANTE. EL PROGRAMA
IR� PIDIENDO N�MEROS AL USUARIO Y, SIEMPRE QUE DICHO N�MERO NO COINCIDA CON EL N�MERO SECRETO, LE INDICARA SI EL N�MERO INGRESADO
ES MAYOR O MENOR QUE EL N�MERO SECRETO QUE TIENE QUE ADIVINAR. AL FINAL DEL PROGRAMA INDICAR� LA CANTIDAD DE INTENTOS QUE SE HAN
NECESITADO PARA ADVINAR EL N�MERO. SI EL N�MERO DE INTENTOS ES MENOR QUE 5, SE MOSTRAR� "FELICITACIONES!". SI EL N�MERO DE
INTENTOS ES ENTRE 5 Y 10 SE MOSTRAR� EL MENSAJE "NO EST� MAL". SI EL N�MERO DE INTENTOS ES MAYOR QUE 10 SE MOSTRAR� EL MENSAJE
"DEBE PRACTICAR M�S".*/
#include <stdio.h>
#include <stdlib.h>
#define NUMERO_SECRETO 10

int main()
{
    int numeroIngresado;
    int intentos = 1;
   //int auxiliarLetra;

    printf("Ingrese un numero entre 1 y 100. \n");
    fflush(stdin);
    scanf("%d", &numeroIngresado);
   /*auxiliarLetra = scanf("%d", &numeroIngresado);
    if(auxiliarLetra != 1)
    {
        printf("No ingresar letras. Reingrese un numero entre 1 y 100. \n");
        scanf("%d", &numeroIngresado);
    }*/
    while(numeroIngresado < 1 || numeroIngresado > 100)
    {
        printf("Ingrese un numero entre 1 y 100. \n");
        scanf("%d", &numeroIngresado);
    }

    while(numeroIngresado != NUMERO_SECRETO)
    {
        intentos++;
        if(numeroIngresado < NUMERO_SECRETO)
        {
            printf("El numero secreto es mayor al numero ingresado. \n");
        }
        if(numeroIngresado > NUMERO_SECRETO)
        {
            printf("El numero secreto es menor al numero ingresado. \n");
        }
        printf("Ingrese un numero entre 1 y 100. \n");
        scanf("%d", &numeroIngresado);
    }

    if(intentos < 5)
    {
        printf("Felicitaciones! Adivinaste el numero secreto en %d intentos.", intentos);
    }
    else
    {
        if(intentos >= 5 && intentos <= 10)
        {
            printf("No esta mal! Adivinaste el numero secreto en %d intentos.", intentos);
        }
        else
        {
            printf("Debes practicar mas! Adivinaste el numero secreto en %d intentos.", intentos);
        }
    }
return 0;
}
