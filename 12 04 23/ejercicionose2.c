//to while

#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b, c;
    do
    {
        printf("Introduce tres numeros consecutivos\n");
        scanf("%i", &a);
        scanf("%i", &b);
        scanf("%i", &c);
    } while (b!=a+1 || c!=b+1);
    printf("Operacion realizada con exito, los numeros son %i, %i y %i", a, b, c);
	return 0;
}