#include <stdio.h>
#define n 5

int buscadorstop(int a[], int b);

int main(int argc, char const *argv[])
{
    int array[n] = {1, 2, 3, 4, 5}, b;
    printf("Introduce el elemento a buscar: ");
    scanf("%i", &b);
    b=buscadorstop(array, b);
    if (b==-1)
    {
        printf("El elemento no se encuentra en el array");
    }
    else printf("El elemento se encuentra en la posicion %i", b);
    return 0;
}

int buscadorstop(int a[], int b)
{
    int i = -1;
    do
    {
        i++;
    } while (a[i] != b && i < n);   
    if (i >= n)
    {
        i = -1;
    }
    return i;
}