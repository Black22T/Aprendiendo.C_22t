#include <stdio.h>
#include <math.h>
#include <conio.h>

int raices(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int resultado, e, f, g;
    printf("Introduce los coeficientes de la ecuacion de segundo grado: ");
    scanf("%i %i %i", &e, &f, &g);
    resultado=raices(e, f, g);
    if (resultado==0)
    {
        printf("No hay raices reales");
    }
    return 0;
}

int raices(int a, int b, int c){
    double raiz1, raiz2, discriminante;
    discriminante=pow(b, 2)-4*a*c;
    if (discriminante<0)
    {
        return 0;
    }
    else
    {
        raiz1=(-b+sqrt(discriminante))/(2*a);
        raiz2=(-b-sqrt(discriminante))/(2*a);
        printf("Las raices son: %i y %i", raiz1, raiz2);
        return 1;
    }
}