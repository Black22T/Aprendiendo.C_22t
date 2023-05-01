#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, r=0, mcd=0;
    printf("Introduce dos valores a calcular el MCD de estos");
    scanf("%i %i", &a , &b);
    while (a==0 || b==0)
    {
        printf("\nIntroduce dos valores a calcular el MCD de estos nuevamente");
        scanf("%i %i", &a , &b);
    }
    mcd=euclides( a, b);
    printf("%i", mcd);
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