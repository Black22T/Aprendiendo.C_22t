#include <stdio.h>

int main(int argc, char *argv[]) {
    int num,i,acum;
    
    printf("Ingrese el numero: ");
    scanf("%i", &num);
    acum=0;
    for ( i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            acum=acum+i;
        }
    }
    if (num==acum)
    {
        printf("El numero %i es Perfecto ", num);
    }
        else{
            printf("El numero %i no es perfecto ", num);
        }
    return 0;
}