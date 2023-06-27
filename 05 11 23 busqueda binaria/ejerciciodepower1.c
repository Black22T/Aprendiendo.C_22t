#include <stdio.h>
#include <windows.h>
#define n 9
// lista de colores para consola de windows:
//\033[0;31m rojo \033[0;32m verde \033[0;33m amarillo \033[0;34m azul \033[0;35m magenta \033[0;36m cyan \033[0;37m blanco

int main(int argc, char const *argv[])
{
    int lista[n] = {0, 4, 5, 9, 3, 50, 30, 81, 70}, i, b, enc;
    printf("Ingrese el numero a buscar: ");
    scanf("%i", &b);
    i = 0;
    enc = 0;
    while (i < n && enc == 0)
    {
        if (lista[i] == b)
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
        printf("El numero %i se encuentra en la posicion %i\n", b, i + 1);
    }
    else
    {
        printf("El numero %i no se encuentra en la lista\n", b);
    }
    return 0;
}