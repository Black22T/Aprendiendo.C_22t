#include <stdio.h>
#include <string.h>
#define max 20

int cantidaddeletra(char cadena[], char letra);

int main(int argc, char const *argv[])
{
    char cadena[max+1], buscar;
    printf("Introduce una cadena: ");
    scanf("%s", cadena);
    printf("Introduce la letra a buscar: ");
    scanf(" %c", &buscar);
    printf("La cantidad de veces que aparece la letra %c en la cadena %s es: %i\n", buscar, cadena, cantidaddeletra(cadena, buscar));
    return 0;
}

int cantidaddeletra(char cadena[], char letra){
    int longitud, contador=0;
    longitud = strlen(cadena);
    for (int i = 0; i < longitud; i++)
    {
        if (cadena[i] == letra)
        {
            contador++;
        }
    }
    return contador;
}