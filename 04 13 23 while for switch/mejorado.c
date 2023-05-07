#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d = 0, i = 0;
    float ab[6] = {1.0, 0.5, 0.25, 0.1, 0.05, 0.01};
    float dinero;
    printf("Este es un sistema que calcula la cantidad de monedas correspondiente a un monto dado\n");
    printf("Introduce un monto a calcular $");
    scanf("%f", &dinero);
    while (dinero <= 0)
    {
        printf("El monto ingresado debe de ser mayor a 0");
        printf("Introduce un monto a calcular $");
        scanf("%f", &dinero);
    }
    printf("Cantidad de monedas de ");
    do
    {
        d = 0;
        while (dinero >= ab[i])
        {
            dinero = dinero - ab[i];
            d++;
        }
        printf("$%.2f:%i ---", ab[i], d);
        i++;
    } while (dinero >= ab[6]);
    printf("Programa terminado");
    return 0;
}