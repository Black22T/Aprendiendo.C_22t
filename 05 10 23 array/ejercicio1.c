#include <stdio.h>
#include <windows.h>
#define n 5
//lista de colores para consola de windows: 
//\033[0;31m rojo \033[0;32m verde \033[0;33m amarillo \033[0;34m azul \033[0;35m magenta \033[0;36m cyan \033[0;37m blanco
void sumadedosvectores(int vector1[], int vector2[]);

int main(int argc, char const *argv[])
{
    int vector1[n], vector2[n];
    printf("Introduce los valores del primer vector\n");
    for (int i = 0; i < n; i++)
    {
        printf("Introduce el valor %i: ", i + 1);
        scanf("%i", &vector1[i]);
    }
    printf("Introduce los valores del segundo vector\n");
    for (int i = 0; i < n; i++)
    {
        printf("Introduce el valor %i: ", i + 1);
        scanf("%i", &vector2[i]);
    }
    sumadedosvectores(vector1, vector2);
    return 0;
}

void sumadedosvectores(int vector1[], int vector2[])
{
    int vector3[n];
    for (int i = 0; i < n; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
    }
    printf("La suma de los dos vectores es: \n \033[0;31m");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", vector3[i]);
    }
    printf("\033[0;37m\n");
}