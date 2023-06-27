#include <stdio.h>

#define tama 10

void introducir(int array[], int tamano);
int repetido(int array[], int tamano, int valor);
int matrizpares2x2(int matriz[2][2], int array[], int tamano);
void ordenar(int array[], int tamano);
void imprimirmatriz2x2(int matriz[2][2]);

int main(int argc, char const *argv[])
{
    int array1[tama], matriz1[2][2]={0};
    printf("Introduce los valores del array: \n");
    introducir(array1, tama);
    printf("Los valores del array son: \n");
    for (int i = 0; i < tama; i++)
    {
        printf("El valor %i: %i \n", i + 1, array1[i]);
    }
    printf("Los valores del array ordenados son: \n");
    ordenar(array1, tama);
    for (int i = 0; i < tama; i++)
    {
        printf("El valor %i: %i \n", i + 1, array1[i]);
    }
    if (matrizpares2x2(matriz1, array1, tama) == 0)
    {
        printf("No hay suficientes numeros pares para llenar la matriz 2x2");
    }
    else
    {
        printf("Los valores de la matriz 2x2 son: \n");
        imprimirmatriz2x2(matriz1);
    }
    return 0;
}

void introducir(int array[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        printf("Introduce el valor %i: ", i + 1);
        scanf("%i", &array[i]);
        while (array[i] <= 0 || repetido(array, i, array[i]) == 1)
        {
            if (array[i] <= 0)
            {
                printf("El valor introducido no es valido, introduce un valor positivo y distinto de 0: ");
            }
            else
            {
                printf("El valor introducido ya esta en el array, introduce otro valor: ");
            }
            scanf("%i", &array[i]);
        }
    }
}

int repetido(int array[], int tamano, int valor)
{
    for (int i = 0; i < tamano; i++)
    {
        if (array[i] == valor)
        {
            return 1;
        }
    }
    return 0;
}

int matrizpares2x2(int matriz[2][2], int array[], int tamano)
{
    int aux1 = 0;
    int i, t, l;
    for (int t = 0; t < 2; t++)
    {
        for (int l = 0; l < 2; l++)
        {
            for (i = aux1; i <= tamano; i++)
            {
                if (aux1 <= tamano)
                {
                    if (array[i] % 2 == 0)
                    {
                        matriz[t][l] = array[i];
                        if (i == tamano - 1 || i < tamano - 1)
                        {
                            aux1 = i + 1;
                        }
                        break;
                    }
                }
            }
            if (i == tamano)
            {
                matriz[t][l] = 0;
            }
        }
    }
    if (aux1 == 0)
        return 0;
    else
        return 1;
}

void ordenar(int array[], int tamano)
{
    int aux;
    for (int i = 0; i < tamano; i++)
    {
        for (int j = 0; j < tamano; j++)
        {
            if (array[i] < array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

void imprimirmatriz2x2(int matriz[2][2])
{
    for (int t = 0; t < 2; t++)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("%i ", matriz[t][l]);
        }
        printf("\n");
    }
}