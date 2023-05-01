#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int a,b;
    printf("Ingrese dos valores, los cuales seran tomados como el principio y el final del intervalo:");
    scanf("%i %i", &a, &b);
    while (a==b)
    {
        printf("Los valores ingresados deben de ser distintos uno del otro, vuelve a ingresarlos por favor:");
        scanf("%i %i", &a, &b);
    }
    if (a>b)
    {
        printf("Los numeros entre dicho intervalo, tomando a %i como el primero, y a %i como el ultimo:\n", b, a);
        b++;
        while (b<a)
        {
            printf("%i, ", b);
            b++;
        }
        
    }
        else
        {
            printf("Los numeros entre dicho intervalo, tomando a %i como el primero, y a %i como el ultimo:\n", a, b);
            a++;
            while (a<b)
            {
                printf("%i, ", a);
                a++;
            }
        }
	return 0;
}