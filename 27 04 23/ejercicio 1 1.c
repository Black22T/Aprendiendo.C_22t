#include <stdio.h>
#include <conio.h>
#include <math.h>

int calculoaniobisiesto(int calcularanio);

int main()
{
    int anio, bisiesto;
    printf("Ingrese anio \n");
    scanf("%i", &anio);
    bisiesto = calculoaniobisiesto(anio);
    if (bisiesto == 1)
    {
        printf("El anio %i es bisiesto", anio);
    }
    else
    {
        printf("El anio %i no es bisiesto", anio);
    }
    return 0;
}

int calculoaniobisiesto(int calcularanio)
{
    int a, b, c;
    a = calcularanio % 4;
    b = calcularanio % 100;
    c = calcularanio % 400;
    if (c == 0)
    {
        return 1;
    }
    else if (a == 0 && b != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}