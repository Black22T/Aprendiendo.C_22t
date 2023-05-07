#include <stdio.h>
#define j 9

int buscador(int lista[], int num);

int main(int argc, char const *argv[])
{
    int lista[j]={0, 4, 78, 5, 32, 9, 77, 4, 23};
    printf("Ingrese el numero que desea buscar cuantas veces se repite: ");
    int num;
    scanf("%i", &num);
    printf("El numero %i se repite %ld veces", num, buscador(lista[j], num));

    return 0;
}

int buscador(int lista[], int num)
{
    int veces=0;
    for (int i = 0; i < j; i++)
    {
        if (lista[i] == num)
        {
            lista[i]=lista[i]*lista[i];
            veces++;
        }
    }
    for (int h = 0; h < j; h++)
    {
        printf("Digito %i: %i\n", h, lista[h]);
    }
    return veces;
}