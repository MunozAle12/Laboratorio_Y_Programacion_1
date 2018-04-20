#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED 123
typedef struct
{
    char nombre[50];
    char apellido[50];
    int idEmpleado;
    int estaVacio;
}Empleado;
#endif//EMPLEADO_H_INCLUDED

int empInit(Empleado* arrayEmpleados,int tamanioArray);
int empMostrar(Empleado* arrayEmpleados,int tamanioArray);
int empAlta(Empleado* arrayEmpleados,int tamanioArray,int id);
int empBaja(Empleado* arrayEmpleados,int tamanioArray,int id);
int buscarLibre(Empleado* arrayEmpleados,int tamanioArray);
//FUNCIONES PARA INGRESAR DATOS
void getString(char mensaje[],char input[]);
int esSoloLetras(char str[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);
int esNumero(char str[]);
