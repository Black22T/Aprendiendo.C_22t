// 4. Triángulo de Pascal. Con recursividad.

#include <stdio.h>

void pascal(int n);
long int factorial(int a);

int main(int argc, char const *argv[])
{
    int n;
    printf("Ingrese un numero para calcular el triangulo de pascal: ");
    scanf("%i", &n);
    pascal(n);
    return 0;
}

void pascal(int n)
{
    if (n == 0)
    {
        
        printf("1\n");
    }
    else
    { 
        pascal(n - 1);
        for (int i = 0; i <= n; i++)
        {
            printf("%ld ", factorial(n) / (factorial(i) * factorial(n - i)));
        }
        printf("\n");
    }
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