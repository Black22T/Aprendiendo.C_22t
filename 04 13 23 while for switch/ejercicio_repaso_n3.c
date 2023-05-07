#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	char l;
    int a, b, c, i;
    printf("Introduce dos numeros \n");
    scanf("%i %i", &a, &b);
    while (a==b)
    {
        printf("Los numeros a operar deben de ser distintos uno del otro, introduce nuevamente ambos numeros \n");
        scanf("%i %i", &a, &b);
    }
	printf("Introduce P, si deseas los intervalos pares o I si los impares: ");
	scanf(" %c", &l);
    if (a>b)
    {
        c=a;
        a=b;
        b=c;
    }
	if (l=='p' || l=='P')
    {
        if (a %2==0)
        {
            for (i=a; i <= b; i=i+2)
            {
                printf(", %i", i);
            }
		}
		else
        {
            a++;
            for ( i=a; i<= b; i=i+2)
            {
                printf(", %i", i);
            }  
        }
    }
    else
    {
        if (a %2==0)
        {
            a++;
            printf(", %i", a);
            for ( i=a; i<= b; i=i+2)
            {
                printf(", %i", i);
            }
		}
		else
        {
            for ( i=a; i <= b; i=i+2)
            {
                printf(", %i", i);
            }  
        }
    }
	return 0;
}