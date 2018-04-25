#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
typedef struct
{
    char nombreProducto[100];
    float precioProducto;
    int stockProducto;
    int idProducto;
    int isEmpty;
}Producto;

#endif // PRODUCTO_H_INCLUDED
int usu_init(Usuario* arrayProducto, int tamanioArray);
int usu_alta(Usuario* arrayProducto, int tamanioArray);
int usu_baja(Usuario* arrayProducto, int tamanioArray);
