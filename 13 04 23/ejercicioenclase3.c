#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int kg, kgm, kgen=0;
    printf("Introducir el limite de pesca permitido en kg: ");
    scanf("%i", &kgm);
    while (kgm<0)
    {
        printf("Por favor introduzca el maximo de pesca en kg, el numero debe de ser mayor a 0: ");
        scanf("%i", &kgm);
    }
    do
    {
        printf("introduce la cantidad pescada: ");
        scanf("%i", &kg);
        kgen=kgen+kg;
        printf("Total pescado hasta el momento %i , recuerde que el limite es de %i", kgen, kgm);
    } while (kgen<=kgm && kg!=0);
	return 0;
}