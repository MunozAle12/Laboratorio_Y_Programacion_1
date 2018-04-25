#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED
typedef struct
{
    char nombreUsuario[50];
    char password[50];
    int idUsuario;
    int isEmpty;
}Usuario;

#endif // USUARIO_H_INCLUDED

int usu_init(Usuario* arrayUsuario, int tamanioArray);
int usu_alta(Usuario* arrayUsuario, int tamanioArray);
int usu_baja(Usuario* arrayUsuario, int tamanioArray);
void usu_listado(Usuario* arrayUsuario, int tamanioArray);
int buscarLugarLibre(Usuario* arrayUsuario, int tamanioArray);

int getStringNumeros(char mensaje[],char input[]);
int esNumero(char str[]);
