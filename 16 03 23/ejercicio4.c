#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int valor;
    float a,b,c;
	printf ("Ingrese un valor entero: ");
	scanf("%i", &valor);
	a=valor/5.0;
    b=a/2.0;
    c=pow(valor,2);
	printf("La quinta parte del valor ingresado es: %f \nLa mitad de la quinta parte es: %f\nEl cuadrado del valor ingresado es: %f", a, b, c);
	return 0;
}