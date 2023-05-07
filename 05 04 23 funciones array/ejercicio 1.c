#include <stdio.h>
#define max 5

void mostrar(int a[]);
int pares(int a[]);

int main(int argc, char const *argv[])
{
    int vector[max], p;
    int i;
    for (i = 0; i < max; i++)
    {
        printf("Ingrese un numero entero: ");
        scanf("%i", &vector[i]);
    }
    mostrar(vector);
    p=pares(vector);
    printf("\nEl numero de pares es: %i", p);
    return 0;
}

void mostrar(int a[])
{
    int i;
    for (i = 0; i < max; i++)
    {
        printf("%i ", a[i]);
    }
}

int pares(int a[])
{
    int i, pares=0;
    for (i = 0; i < max; i++)
    {
        if (a[i]%2==0)
        {
            pares++;
        }
    }
    return pares;
}