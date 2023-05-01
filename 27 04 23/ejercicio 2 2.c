#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, resultado;
    for (i = 0; i < 10; i++)
    {
        resultado = cuadrado(i);
        printf("Cuadrado de %d: %d\n", i, resultado);
    }
    return 0;
}

int cuadrado(int x)
{
    return x * x;
}