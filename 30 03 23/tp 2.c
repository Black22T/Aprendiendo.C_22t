#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int meto, anual=0;
    float deprecia, va, aux, n, me;
    printf("Elija el metodo con el cual desea calcular indicando el numero que le corresponde\n");
    printf("1--Metodo de linea recta\n");
    printf("2--Metodo de balance doblemente declinate\n");
    printf("3--Metodo de la suma de los digitos de los anos\n");
    printf("Ingrese cualquier valor para terminar el programa\n");
    scanf("%i", &meto);
    if (meto<4 && meto>0)
    {
        printf("Introduce el valor real del objeto \n");
        scanf("%f", &aux);
        printf("Introduce la candidad de anos que se desea calcular su depreciacion\n");
        scanf("%f", &n);
        while (n<=0 || aux<=0)
        {
            printf("Por favor, ambos valores a introducir deben de ser mayor a 0 \n");
            printf("Introduce el valor real del objeto \n");
            scanf("%f", &aux);
            printf("Introduce la candidad de anos que se desea calcular su depreciacion\n");
            scanf("%f", &n);
        }
        va=aux;
        switch (meto)
        {
            case 1:
                deprecia=aux/n;
                printf("Valor en el ano actual %f \n", va);
                while (anual<n)
                {
                    anual++;
                    va=va-deprecia;
                    printf("El valor depreciado en el ano %i sera de %f \n", anual, va);
                }
            break;
            case 2:
                printf("Valor en el ano actual %f \n", va);
                while (anual<n)
                {
                    anual++;
                    deprecia=(2.0/n)*va;
                    va=va-deprecia;
                    printf("El valor depreciado en el ano %i sera de %f \n", anual, va);
                }
            break;
            case 3:
                meto=1;
                me=1;
                while (meto<n)
                {
                    meto++;
                    me=me+meto;
                    printf("valor de suma m = %f \n", me);
                }
                printf("Valor en el ano actual %f \n", va);
                meto=n;
                while (anual<n)
                {
                    anual++;
                    deprecia=(meto/me)*aux;
                    va=va-deprecia;
                    printf("El valor depreciado en el ano %i sera de %f \n", anual, va);
                    printf("%i / %.2f ----- %f\n", meto, me, deprecia);
                    meto--;
                }
            break;  
        }
    }
    else {
        printf("Terminar Programa");
    }
	return 0;
}