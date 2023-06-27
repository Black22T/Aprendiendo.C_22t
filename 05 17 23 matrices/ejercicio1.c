#include <stdio.h>
#define i 5 // filas
#define j 2 // columnas
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

void divisiblecuatro(int matriz[i][j]);
void sumas(int matriz[i][j]);
void cargar(int matrizcargar[i][j]);
void buscarelemento(int matriz[i][j], int z);
void verificarelemntospares(int matriz[i][j], int pares [i*j]);

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

int main(int argc, char const *argv[])
{
    int matriz[i][j] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}}, z, matrizcargar[i][j], pares[i*j];
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("Matriz[%d][%d]=", a, b);
            printf("%d \t", matriz[a][b]);
        }
        printf("\n");
    }
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("%d \t", matriz[a][b]);
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
    printf("La suma de todos los elementos de la matriz es: %i\n", suma);
    sumas(matriz);
    printf("Introduce el valor que quieres buscar\n");
    scanf("%i", &z);
    buscarelemento(matriz, z);
    divisiblecuatro(matriz);
    verificarelemntospares(matriz, pares);
    cargar(matrizcargar);
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

void sumas(int matriz[i][j])
{
    int suma = 0;
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            suma = suma + matriz[a][b];
        }
    }
    printf("\nEsto es calculado en un void\n");
    printf("La suma de todos los elementos de la matriz es: %i\n", suma);
}

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

void buscarelemento(int matriz[i][j], int z)
{
    int a, b, c = 0;
    for (a = 0; a < i; a++)
    {
        for (b = 0; b < j; b++)
        {
            if (matriz[a][b] == z)
            {
                c++;
            }
        }
    }
    if (c == 0)
    {
        printf("El valor %i no se encuentra en la matriz\n", z);
    }
    else
    {
        printf("El valor %i se encuentra %i veces en la matriz\n", z, c);
    }
}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

void divisiblecuatro(int matriz[i][j])
{
    int acumulador = 0;
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            int c = matriz[a][b] % 4;
            if (c == 0)
            {
                printf("Matriz[%d][%d]=", a, b);
                printf("%d. %d es divisible por 4\t\t", matriz[a][b], matriz[a][b]);
                acumulador++;
            }
            else
            {
                printf("Matriz[%d][%d]=", a, b);
                printf("%d. %d no es divisible por 4\t\t", matriz[a][b], matriz[a][b]);
            }
        }
        printf("\n");
    }
    printf("Hay %d numeros divisibles por 4\n", acumulador);
}

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

void cargar(int matrizcargar[i][j]){
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("Matriz[%d][%d]=", a, b);
            scanf("%d", &matrizcargar[a][b]);
            printf("\033[F");
            printf("\t\t\t");
        }
        printf("\n");
    }
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("%d \t", matrizcargar[a][b]);
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

void verificarelemntospares(int matriz[i][j], int pares [i*j])
{
    int par = 0, repetido = 0, contador = 0;
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            if(matriz[a][b]%2==0 && matriz[a][b]!=0){
                pares[par]=matriz[a][b];
                par++;
            }
        }
    }
    //verificar si hay repetidos y eliminar el elemento repetido
    for (int t = 0; t < par; t++)
    {
        for (int l = 0; l < par; l++)
        {
            if (pares[t]==pares[l] && t!=l)
            {
                pares[l]=0;
                contador++;
            }
        }
    }
    //ordenar de mayor a menor
    for (int t = 0; t < par; t++)
    {
        for (int l = 0; l < par; l++)
        {
            if (pares[t]>pares[l])
            {
                int aux = pares[t];
                pares[t]=pares[l];
                pares[l]=aux;
            }
        }
    }
    for (int t = 0; t < par+1-contador; t++)
    {
        printf("%d\t", pares[t]);
    }
    printf("\n");
}