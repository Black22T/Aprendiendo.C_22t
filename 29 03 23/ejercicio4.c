#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int a=20, b=50, c=0;
    printf("Los numeros pares entre 20 y 50 son: ");
    while (a<b)
    {
        c++;
        a=a+2.0;
        printf("%i, ", a);
    }
    printf("La cantidad de numeros hallados son %i", c);
	return 0;
}