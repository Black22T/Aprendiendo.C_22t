#include <stdio.h>
#define i 3 // filas
#define j 3 // columnas

void cargar(int matrizcargar[i][j]);
int calculodiagonales(int matrizcargar[i][j]);
int calcularfilas(int matrizcargar[i][j]);
int calcularcolumnas(int matrizcargar[i][j]);

int main(int argc, char const *argv[])
{
    int verificador1 = 0, verificador2 = 0, verificador3 = 0;
    int matrizcargar[i][j];
    cargar(matrizcargar);
    verificador1 = calculodiagonales(matrizcargar);
    verificador2 = calcularfilas(matrizcargar);
    verificador3 = calcularcolumnas(matrizcargar);
    if (verificador1 == 0 && verificador2 == 0 && verificador3 == 0)
    {
        printf("cubo magico\n");
    }
    else
    {
        printf("no es cubo magico\n");
    }
    return 0;
}

void cargar(int matrizcargar[i][j])
{
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            scanf("%d", &matrizcargar[a][b]);
            printf("\033[F");
            for (int c = 0; c < b + 1; c++)
            {
                printf("\t");
            }
        }
        printf("\n\n");
    }
    printf("///////////////////////////////////////////////////////\n\n");
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("%d \t", matrizcargar[a][b]);
        }
        printf("\n\n");
    }
}

int calculodiagonales(int matrizcargar[i][j])
{
    int suma1 = 0, suma2 = 0, verificador = 0;
    for (int t = 0; t < i; t++)
    {
        suma1 = suma1 + matrizcargar[t][t];
    }
    for (int t = i; i < t; t--)
    {
        suma2 = suma2 + matrizcargar[t][t];
    }
    if (suma1 == suma2)
    {
        verificador = 0;
    }
    else
    {
        verificador = 1;
    }
    return verificador;
}

int calcularfilas(int matrizcargar[i][j])
{
    int suma[3] = {0, 0, 0}, verificador = 0;
    for (int t = 0; t < i; t++)
    {
        for (int l = 0; l < i; l++)
        {
            suma[t] = suma[t] + matrizcargar[t][l];
        }
    }

    if (suma[0] == suma[1] && suma[1] == suma[2])
    {
        verificador = 0;
    }
    else
    {
        verificador = 1;
    }
    return verificador;
}

int calcularcolumnas(int matrizcargar[i][j])
{
    int suma[3] = {0, 0, 0}, verificador = 0;
    for (int t = 0; t < i; t++)
    {
        for (int l = 0; l < i; l++)
        {
            suma[t] = suma[t] + matrizcargar[l][t];
        }
    }

    if (suma[0] == suma[1] && suma[1] == suma[2])
    {
        verificador = 0;
    }
    else
    {
        verificador = 1;
    }
    return verificador;
}