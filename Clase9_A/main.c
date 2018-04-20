#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define CANTIDAD 10

int main()
{
    int proximoId = 0;
    int continuar;
    int opcionMenu = 0;
    Empleado arrayEmpleados(CANTIDAD);
    emp_init(Empleado* arrayEmpleados, CANTIDAD);

    do
    {
        opcionMenu = printf("1 - MOSTRAR \n2 - ALTA \n3 - BAJA");
        switch(opcionMenu)
        {
            case 1:
                empMostrar(Empleado arrayEmpleados, CANTIDAD);
                break;
            case 2:
                empAlta(Empleado arrayEmpleados, CANTIDAD);
                break;
            case 3:
                empBaja(Empleado arrayEmpleados, CANTIDAD);
                break;
        }
    }while(continuar);
    return 0;
}

