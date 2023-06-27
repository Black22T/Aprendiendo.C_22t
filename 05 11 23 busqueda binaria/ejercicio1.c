#include <stdio.h>
#include <windows.h>
#define n 8
//lista de colores para consola de windows:
//\033[0;31m rojo \033[0;32m verde \033[0;33m amarillo \033[0;34m azul \033[0;35m magenta \033[0;36m cyan \033[0;37m blanco

void busquedabinaria(int vector[], int valorabuscar);

int main(int argc, char const *argv[])
{
    int a[n]={1,4,6,8,10,11,15,16}, b;
    printf("Ingrese el numero a buscar: ");
    scanf("%i", &b);
    busquedabinaria(a, b);
    return 0;
}

void busquedabinaria(int vector[], int valorabuscar){
    int i = 0, enc = 0;
    while (i < n && enc == 0)
    {
        if (vector[i] == valorabuscar)
        {
            enc = 1;
        }
        else
        {
            i++;
        }
    }
    if (enc == 1)
    {
        printf("El numero %i se encuentra en la posicion %i\n", valorabuscar, i + 1);
    }
    else
    {
        printf("El numero %i no se encuentra en la lista\n", valorabuscar);
    }
}