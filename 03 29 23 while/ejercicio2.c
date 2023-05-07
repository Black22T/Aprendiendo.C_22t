#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int a, lineas=0, cantidad;
    float total=0, parcial, valor;
    printf("Ingrese la cantidad de lineas (productos por comprar) que desea en la factura: ");
    scanf("%i", &a);
    while (a<=0)
    {
        printf("\nPor favor el valor ingresado debe de ser mayor a 0: ");
        scanf("%i", &a);
    }
    while (lineas<a)
    {
        lineas++;
        printf("\nValor del producto:");
        scanf("%f" , &valor);
        while (valor<=0)
        {
            printf("El valor del producto debe de ser mayor a 0:");
            scanf("%f" , &valor);
        }
        printf("Cantidad del producto:");
        scanf("%i" , &cantidad);
        while (cantidad<=0)
        {
            printf("La cantidad del producto debe de ser mayor a 0:");
            scanf("%i" , &cantidad);
        }
        parcial=valor*cantidad;
        total=total+parcial;
        printf("El valor del producto ingresado es:                 $%f", valor);
        printf("\nEl valor del producto por la cantidad deseada es:   $%f", parcial);
        printf("\nEl monto parcial a pagar es de:                     $%f", total);
    }
    printf("\n\nEl total a pagar sera de:                         $%f", total);
	return 0;
}