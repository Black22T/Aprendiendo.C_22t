#include <stdio.h>
#include <windows.h>
#define n 7
// colores para consola de windows:
//\033[0;31m rojo \033[0;32m verde \033[0;33m amarillo \033[0;34m azul \033[0;35m magenta \033[0;36m cyan \033[0;37m blanco

void ordenamientoburbuja(int vector1[]);
void busqueda(int lista[], int b);

int main(int argc, char const *argv[])
{
    int array[n] = {1, 4, 3, 4, 6, 5, 10}, b;
    ordenamientoburbuja(array);
    printf("El array ordenado es: \n \033[0;31m");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\033[0;37m");
    printf("\nIngrese el numero a buscar: ");
    scanf("%i", &b);
    busqueda(array, b);
    return 0;
}

void ordenamientoburbuja(int vector1[])
{
    int aux;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (vector1[j] > vector1[j + 1])
            {
                aux = vector1[j];
                vector1[j] = vector1[j + 1];
                vector1[j + 1] = aux;
            }
        }
    }
}

void busqueda(int lista[], int b)
{
    int i = 0, enc = 0, posicion[n], j = 0;
    while (i < n)
    {
        if (lista[i] == b)
        {
            enc++;
            posicion[j] = i;
            j++;
        }
        i++;
    }
    if (enc != 0)
    {
        printf("El numero se encuentra %i veces\n", enc);
        printf("El numero %i se encuentra en la posicion:\n", b);
        for (int e = 0; e < j; e++)
        {
            printf("%i ", posicion[e]);
        }
    }
    else
    {
        printf("El numero %i no se encuentra en la lista\n", b);
    }
}