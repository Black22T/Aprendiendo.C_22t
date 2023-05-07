// realizar un programa que simplifique una fraccion. el resultado se debe dar en forma de fraccion o entero segun corresponda,
//ingrese por teclaod el numerador y denominador

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b;
    float c;
    printf("Introduce el numerador y el denominador");
    scanf("%i  %i", &a , &b);
    while (b==0)
    {
        printf("Por favor ingrese un denominador distinto de 0");
        scanf("%i", &b);
    }
    if (a==b)
    {
        printf("La fraccion sinplificada es 1");
    }
        else if (b==1)
        {
            printf("La fraccion simplificada es %i", a);
        }
            else if (a%b==0)
            {
                a=a/b;
                printf("La fraccion simplificada es %i", a);
            }
                else if(a %2==0 && b%2==0){
                    while (a!=1)
                    {
                        a=a/2;
                        b=b/2;
                    }
                    printf("La fraccion simplificada es %i / %i", a , b);
                }
	return 0;
}