#include <stdio.h>

int main(int argc, char *argv[]) {
    int nu, a;
    printf("Introduce la cantidad a contar: ");
    scanf("%i", &a);
    for ( nu = 1; nu <= a; nu++)
    {
        printf("%d\n", nu);
    }
    printf("condicion de salida:%d\n", nu-1);
	return 0;
}