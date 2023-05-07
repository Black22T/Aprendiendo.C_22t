#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Teclee un numero entero: ");
	scanf("%i", &n);
    if (n>0)
    {
        printf("El valor ingesado es positivo");
    }
        else if (n<0)
        {
            printf("El valor ingesado es negativo");
        }
    else{
        printf("El valor ingesado es 0");
    }
	return 0;
}