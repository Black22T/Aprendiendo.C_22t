#include <stdio.h>
#include <math.h>
#include <conio.h>

float distanciaeuclidea(float a, float b)
{
    float distancia, c;
    if (b > a)
    {
        c = a;
        a = b;
        b = c;
    }
    distancia = (a - b);
    return distancia;
}

void imprimedistancia(float distancia)
{
    printf("La distancia entre los dos puntos es: %lf", distancia);
}

int main(int argc, char const *argv[])
{
    float p, q, z;
    printf("Introduce dos puntos a calcular su distancia: ");
    scanf("%f %f", &p, &q);
    z = distanciaeuclidea(p, q);
    imprimedistancia(z);
    return 0;
}