#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int a, b, i, s;
    do
    {
        printf("Introduce el numerador y el denominador\n");
        scanf("%i %i", &a, &b);
        while (b == 0)
        {
            printf("El denominador debede ser distinto de 0, vuelve a introducirlo: ");
            scanf("%i", &b);
        }
        if (a == b)
        {
            printf("La fraccion simplificada es 1");
        }
        else
        {
            if (a % b == 0)
            {
                a = a / b;
                printf("La fraccion simplificada es %i", a);
            }
            else
            {
                for (i = 1; i <= b; i++)
                {
                    if (a % i == 0 && b % i == 0)
                    {
                        a = a / i;
                        b = b / i;
                    }
                }
                printf("La fraccion simplificada es %i/%i", a, b);
            }
        }
        printf("\nDeseas volver a realizar una operacion de simplificacion? Introduce el dato correspondiente\n");
        printf("1_Si deseas realizar otra simplificacion\n");
        printf("2_Si deseas terminar el programa\n");
        scanf("%i", &s);
        while (s != 1 && s != 2)
        {
            printf("\nDebe introducir un caracter valido, por favor...\n");
            printf("1_Si deseas realizar otra simplificacion\n");
            printf("2_Si deseas terminar el programa\n");
            scanf("%i", &s);
        }
    } while (s != 2);
    printf("Programa terminado");
    return 0;
}