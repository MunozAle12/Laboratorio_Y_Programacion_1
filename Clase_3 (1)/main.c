/* ESCRIBIR UN PRGRAMA EN C PARA ADIVINAR UN NÚMERO ENTRE 1 Y 10 QUE PREVIAMENTE SERÁ DEFINIDO COMO UNA CONSTANTE. EL PROGRAMA
IRÁ PIDIENDO NÚMEROS AL USUARIO Y, SIEMPRE QUE DICHO NÚMERO NO COINCIDA CON EL NÚMERO SECRETO, LE INDICARA SI EL NÚMERO INGRESADO
ES MAYOR O MENOR QUE EL NÚMERO SECRETO QUE TIENE QUE ADIVINAR. AL FINAL DEL PROGRAMA INDICARÁ LA CANTIDAD DE INTENTOS QUE SE HAN
NECESITADO PARA ADVINAR EL NÚMERO. SI EL NÚMERO DE INTENTOS ES MENOR QUE 5, SE MOSTRARÁ "FELICITACIONES!". SI EL NÚMERO DE
INTENTOS ES ENTRE 5 Y 10 SE MOSTRARÁ EL MENSAJE "NO ESTÁ MAL". SI EL NÚMERO DE INTENTOS ES MAYOR QUE 10 SE MOSTRARÁ EL MENSAJE
"DEBE PRACTICAR MÁS".*/
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
