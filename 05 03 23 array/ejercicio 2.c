#include <stdio.h>
#define n 9

int pararreglo(int lista[]);

int main(int argc, char const *argv[])
{
    int lista[n]={0, 4, 78, 5, 32, 9, 77, 1, 23};
    printf("El numero de pares es: %i", pararreglo(lista[n]));
    return 0;
}

int pararreglo(int lista[])
{
    int pares=0;
    for (int i = 0; i < n; i++)
    {
        if (lista[i]%2==0)
        {
            pares++;
        }
    }

    return pares;
}