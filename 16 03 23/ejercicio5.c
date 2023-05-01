#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a,b,c,d;
	printf ("Ingrese un valor del producto: ");
	scanf("%f", &a);
    printf ("Ingrese la cantidad deseada: ");
    scanf("%f", &b);
	c=a*0.15;
    c=a-c;
    c=c*b;
	printf("Precio del articulo: $%f \nCantidad de unidades: %f\nTotal a pagar: $%f", a, b, c);
	return 0;
}