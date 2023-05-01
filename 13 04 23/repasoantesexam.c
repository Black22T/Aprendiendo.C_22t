#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mon50 = 0, mon25 = 0, mon1p = 0, mon05 = 0, mon10 = 0, mon01=0;
    double dinero;
    printf("Este es un sistema que calcula la cantidad de monedas correspondiente a un  monto dado\n");
    printf("Introduce un monto a calcular $");
    scanf("%lf", &dinero);
    while (dinero <= 0)
    {
        printf("El monto ingresado debe de ser mayor a 0");
        printf("Introduce un monto a calcular $");
        scanf("%lf", &dinero);
    }
    do
    {
        if (dinero >= 1)
        {
            mon1p++;
            dinero = dinero - 1.0;
        }
            else if (dinero >= 0.50)
            {
                mon50++;
                dinero = dinero - 0.50;
            }
                else if (dinero >= 0.25)
                {
                    mon25++;
                    dinero = dinero - 0.25;
                }
                    else if (dinero >= 0.1)
                    {
                        mon10++;
                        dinero = dinero - 0.1;
                    }
                        else if (dinero >= 0.05)
                        {
                            mon05++;
                            dinero = dinero - 0.05;
                        }
                            else if (dinero >= 0.01)
                            {
                                mon01++;
                                dinero = dinero - 0.01;
                            }
    } while (dinero >= 0.01);
    printf("Cantidad de monedas de $1:%i, $0,50:%i, $0,25:%i, $0,10:%i, $0,05:%i, $0,01:%i", mon1p, mon50, mon25, mon10, mon05, mon01);
    return 0;
}