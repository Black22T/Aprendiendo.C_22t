#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d, e, f;
    printf("Ingrese dos numeros a sumar: ");
    scanf("%i %i", &d, &e);
    f = suma(d, e);
    printf("El resultado de la suma es: %d", f);
    return 0;
}

int suma(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
