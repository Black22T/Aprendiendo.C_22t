#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int numerador1, denominador1, nunmerador2, denominador2, selector, f;
    printf("Ingrese una fraccion: ");
    scanf("%i / %i", &numerador1, &denominador1);
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

int euclides(int e, int d){
    int r=0, c;
    if (d>e)
    {
        c=e;
        e=d;
        d=c;
    }
    r=e%d;
    while (r!=0)
    {
        e=d;
        d=r;
        r=e%d;
    }
    return d;
}