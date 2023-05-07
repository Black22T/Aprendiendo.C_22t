#include <stdio.h>
#define n 5

int borrarunelemento(int a[], int b);
void mostrar(int a[]);

int main(int argc, char const *argv[])
{
    int array[n] = {1, 2, 3, 4, 5}, b;
    printf("Introduce el numero a eliminar: ");
    scanf("%i", &b);
    b = borrarunelemento(array, b);
    mostrar(array);
    return 0;
}

int borrarunelemento(int a[], int b)
{
    int i = -1, j;
    do
    {
        i++;
    } while (a[i] != b && i < n);
    if (i >= n)
    {
        return i = -1;
    }
    else
    {
        for (j = i; j < n; j++)
        {
            a[j] = a[j + 1];
        }
        a[j - 1] = 0;
        return a;
    }
}

void mostrar(int a[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%i ", a[i]);
    }
}