#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int b, c=1;
    float a, d;
    printf("Ingrese dos numeros a multiplicar: ");
    scanf("%f %i", &a, &b);
    d=a;
    while (c<b)
    {
        c++;
        a=a+d;
    }
    printf("El resultado de la multiplicacion es: %f", a);
	return 0;
}