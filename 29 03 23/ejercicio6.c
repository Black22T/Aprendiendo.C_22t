#include <stdio.h>

int main() {
    int a, b, c, contador = 0;

    printf("Ingrese el valor del numerador: ");
    scanf("%i", &a);
    printf("Ingrese el valor del denominador: ");
    scanf("%i", &b);
    c=a;
    while (b == 0) {
        printf("El denominador no puede ser cero. Intente de nuevo.\n");
        printf("Ingrese el valor del denominador: ");
        scanf("%i", &b);
    }
    while (a >= b) {
        a=a-b;
        contador++;
    }
    printf("El resultado de la division %i entre %i es: %i", c, b, contador);
    return 0;
}
