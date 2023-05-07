#include <stdio.h>
#define n 5

int primoarray(int a[]);
int buscadigito(int a[], int b);
void inverso(int a[]);
int buscarenposicion(int a[], int b);

int main(int argc, char const *argv[])
{
    int lista[n], digito, elemento;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese un numero entero %i: ", i);
        scanf("%i", &lista[i]);
    }
    printf("Ingrese un digito a buscar: ");
    scanf("%i", &digito);
    printf("El numero de veces que aparece el digito %i es: %i\n", digito, buscadigito(lista, digito));
    printf("El numero de primos es: %i\n", primoarray(lista));
    inverso(lista);
    printf("Ingrese una posicion a mostrar su elemnto: ");
    scanf("%i", &digito);
    elemento = buscarenposicion(lista, digito);
    if (digito>=0 || digito<=n-1)
    {
        printf("El numero en la posicion %i es: %i", digito, elemento);
    }
    else
    {
        printf("La posicion no existe");
    }
    return 0;
}

int buscadigito(int a[], int b)
{
    int i, cont = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            printf("El numero %i se encuentra en la posicion %i\n", b, i);
            cont++;
        }
    }
    return cont;
}

int primoarray(int a[])
{
    int i, j, cont = 0, primo = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                cont++;
            }
        }
        if (cont == 2)
        {
            primo++;
        }
        cont = 0;
    }
    return primo;
}

void inverso(int a[])
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%i ", a[i]);
    }
    printf("\n");
}

int buscarenposicion(int a[], int b)
{
    if (b == 0 || b <= n - 1)
    {
        return a[b];
    }
    else
    {
        return -1;
    }
}