#include <stdio.h>

long int factorial(int a);

int main(int argc, char const *argv[])
{
    int n;
    printf("Ingrese un numero a calcular su factoria: ");
    scanf("%d", &n);
    int num = factorial(n);
    printf("El factorial de %i es: %ld", n, num);
    return 0;
}

long int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
        return a * factorial(a - 1);
}