#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a=2, s, i=2;
    printf("En este programa hay tres formas que calcula la suma de cada tercer numero\n");
    printf("Elige el numero que corresponde a tu eleccion\n");
    printf("1_Con While\n2_Con do-Wgile\n3_Con for\n");
    scanf("%i" , &s);
    while (s>3 || s<1)
    {   
        printf("Por favor introduce un numero valido\n");
        printf("1_Con While\n2_Con do-Wgile\n3_Con for\n");
        scanf("%i" , &s);
    }
    switch (s)
    {
    case 1:
        while (i<100)
        {
            a=a+i;
            i=i+3;
        }
        break;
    case 2:
        do
        {
            a=a+i;
            i=i+3;
        } while (i<100);
        break;
    case 3:
        for (i = 2; i <= 100; i=i+3)
        {
            a=a+i;
        }
        break;
    }
    printf("El resultado es %i", a);
    return 0;
}