#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n, i, d=0;
    printf("Introduce el numero a calcular sus divisores posibles: ");
    scanf("%i", &n);
    while (n==0)
    {
        printf("El numero debe de ser distinto de 0: ");
        scanf("%i", &n);
    }
    printf("Los divisores de %i son:", n);
    for ( i = 0; i <= n; i++)
    {
        d++;
        if (n%d==0)
        {
            printf(" %i,", d);
        }
    }
    return 0;
}