#include <stdio.h>
#define j 9

int main(int argc, char const *argv[])
{
    int lista[j];
    float n;
    for (int i = 0; i < j; i++)
    {
        scanf("%i", &lista[i]);
        n=n+lista[i];
    }
    printf("El promedio es: %.2f", n/j);
    return 0;
}
