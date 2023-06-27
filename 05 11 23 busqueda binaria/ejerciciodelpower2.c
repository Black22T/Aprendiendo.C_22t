#include <stdio.h>
#include <windows.h>
#define n 9
// lista de colores para consola de windows:
//\033[0;31m rojo \033[0;32m verde \033[0;33m amarillo \033[0;34m azul \033[0;35m magenta \033[0;36m cyan \033[0;37m blanco

int main(int argc, char const *argv[])
{
    int lista[n] = {0, 1, 4, 3, 4, 5, 6, 4, 8}, i, b, enc;
    printf("Ingrese el numero a buscar: ");
    scanf("%i", &b);
    i = 0;
    enc = 0;
    while (i < n)
    {
        if (lista[i] == b)
        {
            enc++;
            i++;
            if (lista[i] != b)
            {
                i=n;
            } 
        }
        i++;
    }
    if (enc != 0)
    {
        printf("El numero se encuentra %i veces", enc);
    }
    else
    {
        printf("El numero %i no se encuentra en la lista\n", b);
    }
    return 0;
}