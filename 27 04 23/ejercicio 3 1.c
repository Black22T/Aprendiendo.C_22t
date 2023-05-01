#include <stdio.h>
#include <math.h>

int primo(int a);

int main(int argc, char const *argv[])
{
    int numero, resultado, primos = 0;
    printf("Introduce una lista de numeros a verificar la cantidad de primos:\n");
    while (numero !=0)
    {
        scanf("%i", &numero);
        resultado = primo(numero);
        if (resultado == 1)
        {
            primos++;
        }
    } 
    printf("La cantidad de numero primos en la lista son %i", primos);
    return 0;
}


int primo(int a)
{
    if (a <= 1)
    {
        return 0;
    }
    else
    {
        int primos = 1;
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                primos = 0;
            }
        }
        if (primos == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}