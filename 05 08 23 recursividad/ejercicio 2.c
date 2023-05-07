//2. Calcular la serie de Fibonachi, los 10 primeros números. Con recursividad.

#include <stdio.h>

long int fibonachi(int penultimo, int ultimo, int n);

int main(int argc, char const *argv[])
{
    int f;
    printf("Ingrese un numero a calcular su fibonachi: ");
    scanf("%d", &f);
    printf("El fibonachi de %i es: %ld", f, fibonachi(0, 1, f));
    return 0;
}

long int fibonachi(int penultimo, int ultimo, int n)
{
    if (n == 0)
    {
        return penultimo;
    }
    else
    {
        return fibonachi(ultimo, penultimo + ultimo, n - 1);
    }
}