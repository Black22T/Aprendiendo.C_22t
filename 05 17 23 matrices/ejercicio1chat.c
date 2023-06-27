#include <stdio.h>
#define i 5 // filas
#define j 2 // columnas

void calcularSuma(int matriz[i][j]);

int main(int argc, char const *argv[])
{
    int matriz[i][j] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};

    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("Matriz[%d][%d] = %d\t", a, b, matriz[a][b]);
        }
        printf("\n");
    }

    int suma = 0;
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            suma = suma + matriz[a][b];
        }
    }
    printf("La suma de todos los elementos de la matriz es: %d\n", suma);
    calcularSuma(matriz);

    return 0;
}

void calcularSuma(int matriz[i][j])
{
    int suma = 0;
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            suma = suma + matriz[a][b];
        }
    }

    printf("\nEsto es calculado en una funcion void\n");
    printf("La suma de todos los elementos de la matriz es: %d\n", suma);
}
