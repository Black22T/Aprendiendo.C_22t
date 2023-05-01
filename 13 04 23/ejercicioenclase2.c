#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, i, e=0;
    printf("indica la cantidad de filas: ");
    scanf("%i", &a);
    while (a<0)
    {
        printf("El numero de filas debe de ser mayor a 0: ");
        scanf("%i", &a);
    }
    for ( i = 0; i < a; i++)
    {
        e++;
        for ( b = 0; b < e; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    e=a;
    for ( i = a; i > 0; i--)
    {
        e--;
        for ( b = e; b > 0; b--)
        {
            printf("*");
        }
        printf("\n");
    }
	return 0;
}