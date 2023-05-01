#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int d, e, f, selector, c;
    printf("Ingrese dos numeros a operar: ");
    scanf("%i %i", &d, &e);
    printf("Elige un numero correspondiente a la operacion deseada\n");
    printf("1__Suma\n2__Resta");
    scanf("%i", &selector);
    while (selector != 1 && selector != 2)
    {
        printf("\nDato no valido, vuelve a introducir\n");
        printf("1__Suma\n2__Resta");
        scanf("%i", &selector);
    }
    switch (selector)
    {
    case 1:
        f=suma(d, e);
        printf("El resultado de la suma es: %d\n", f);
        break;
    case 2:
        f=resta(d, e);
        printf("El resultado de la resta es: %d\n", f);
        break;
    }
    return 0;
}

int suma(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int resta(int a, int b)
{
    int c;
    c = a - b;
    return c;
}