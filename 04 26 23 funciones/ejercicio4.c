#include <stdio.h>

int operacion (int a, int b, int c, int d, int selector);
int simplificar(int a, int b);
int euclides(int e, int d);

int main(int argc, char const *argv[])
{
    int numerador1, denominador1, nunmerador2, denominador2, selector, f;
    printf("Ingrese una fraccion: \n");
    scanf("%i  %i", &numerador1, &denominador1);
    printf("Ingrese otra fraccion: \n");
    scanf("%i  %i", &nunmerador2, &denominador2);
    printf("Elige un numero correspondiente a la operacion deseada\n");
    printf("1__Suma\n2__Resta\n");
    scanf("%i", &selector);
    while (selector != 1 && selector != 2)
    {
        printf("\nDato no valido, vuelve a introducir\n");
        printf("1__Suma\n2__Resta\n");
        scanf("%i", &selector);
    }
    switch (selector)
    {
    case 1:
        printf("El resultado de %i/%i + %i/%i: " , numerador1, denominador1, nunmerador2, denominador2);
        suma(numerador1, denominador1, nunmerador2, denominador2, selector);
        break;
    case 2:
        printf("El resultado de %i/%i - %i/%i: " , numerador1, denominador1, nunmerador2, denominador2);
        resta(numerador1, denominador1, nunmerador2, denominador2, selector);
        break;
    }
    return 0;
}

int operacion (int a, int b, int c, int d, int selector){
    int f=0;
    f=b*d;
    switch (selector)
    {
    case 1:
        a=(f/b)*a+(f/d)*c;
        break;
    case 2:
        a=(f/b)*a-(f/d)*c;
        break;
    }
    simplificar(a, f);
}

int simplificar(int a, int b){
    int mcd;
    mcd=euclides(a, b);
    a=a/mcd;
    b=b/mcd;
    if (b==1)
    {
        printf("%i", a);
    }
    else
    {
        printf("%i/%i", a, b);
    }
}

int euclides(int e, int d){
    int r, c;
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