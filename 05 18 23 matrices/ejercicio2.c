#include <stdio.h>
#define i 2 // filas
#define j 2 // columnas
///////////////////////////////////////////////////////////////////////////////

int deterninante(int matriz[i][j]);
void calculoadjunta(int matriz[i][j], int adjunta[i][j]);
void calculotraspuesta(int traspuesta[i][j], int adjunta[i][j]);
void calcularinversa(int inversa[i][j], int adjunta[i][j], int determinante);
void simplificar(int a, int b, int resu[2]);
int euclides(int e, int d);

int main(int argc, char const *argv[])
{
    int matriz[i][j] = {{3, 3}, {6, 3}};
    int determinante, adjunta[i][j], inversa[i][j], traspuesta[i][j];
    determinante = deterninante(matriz);
    if (determinante == 0)
    {
        printf("La matriz no tiene inversa\n");
    }
    else
    {
        printf("La matriz tiene inversa\n");
        calculoadjunta(matriz, adjunta);
        calculotraspuesta(traspuesta, adjunta);
        calcularinversa(inversa, adjunta, determinante);
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////

int deterninante(int matriz[i][j])
{
    int determinante;
    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
    return determinante;
}

void calculoadjunta(int matriz[i][j], int adjunta[i][j])
{
    adjunta[0][0] = matriz[1][1];
    adjunta[0][1] = -matriz[0][1];
    adjunta[1][0] = -matriz[1][0];
    adjunta[1][1] = matriz[0][0];
    printf("La adjunta de la matriz es:\n");
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("%d \t", adjunta[a][b]);
        }
        printf("\n");
    }
}

void calculotraspuesta(int traspuesta[i][j], int adjunta[i][j])
{
    traspuesta[0][0] = adjunta[0][0];
    traspuesta[0][1] = adjunta[1][0];
    traspuesta[1][0] = adjunta[0][1];
    traspuesta[1][1] = adjunta[1][1];
    printf("La traspuesta de la matriz es:\n");
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf("%d \t", traspuesta[a][b]);
        }
        printf("\n");
    }
}

void calcularinversa(int inversa[i][j], int adjunta[i][j], int determinante)
{
    int resu[2];
    int pos00[2] = {inversa[0][0], determinante};
    int pos01[2] = {inversa[0][1], determinante};
    int pos10[2] = {inversa[1][0], determinante};
    int pos11[2] = {inversa[1][1], determinante};
    simplificar(inversa[0][0], determinante, resu);
    inversa[0][0] = resu;
    simplificar(inversa[0][1], determinante, resu);
    inversa[0][1] = resu;
    simplificar(inversa[1][0], determinante, resu);
    inversa[1][0] = resu;
    simplificar(inversa[1][1], determinante, resu);
    inversa[1][1] = resu;
    printf("La inversa de la matriz es:\n");
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < j; b++)
        {
            printf(" \t", inversa[a][b]);
        }
        printf("\n");
    }
}

void simplificar(int a, int b, int resu[2])
{
    int mcd;
    mcd = euclides(a, b);
    a = a / mcd;
    b = b / mcd;
    resu[0] = a;
    resu[1] = b;
}

int euclides(int e, int d)
{
    int r, c;
    if (d > e)
    {
        c = e;
        e = d;
        d = c;
    }
    r = e % d;
    while (r != 0)
    {
        e = d;
        d = r;
        r = e % d;
    }
    return d;
}