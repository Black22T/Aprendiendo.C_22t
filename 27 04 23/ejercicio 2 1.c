#include <stdio.h>
#include <conio.h>
#include <math.h>

int suma(int a,int b) ;

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Introduce dos valores a sumar: ");
    scanf("%i %i", &a, &b);
    printf("La suma de los dos valores es: %i", suma(a, b));
    return 0;
}

int suma(int a,int b) {
    return a+b;
}
