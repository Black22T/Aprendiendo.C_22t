#include <stdio.h>
#include <string.h>
#define max 20
#define tamanio 3

void mostrarcadenas(char cadena[][max+1]);
void tomarlongitud(char cadena[][max+1]);

int main(int argc, char const *argv[])
{
    char cadena[3][max+1];
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("Introduce la cadena %i: ", i+1);
        scanf("%s", cadena[i]);
    }
    mostrarcadenas(cadena);
    tomarlongitud(cadena);
    return 0;
}

void mostrarcadenas(char cadena[][max+1])
{
    int i;
    for ( i = 0; i < tamanio; i++)
    {
        printf("La cadena %i es: %s\n", i+1, cadena[i]);
    }
}


void tomarlongitud(char cadena[][max+1]){//Mostrar el contenido de las cadenas de menor a mayor longitud.
    int i, j, longitud[tamanio], aux;
    for ( i = 0; i < tamanio; i++)
    {
        longitud[i] = strlen(cadena[i]);
    }
    for ( i = 0; i < tamanio; i++)
    {
        for ( j = 0; j < tamanio; j++)
        {
            if (longitud[i] < longitud[j])
            {
                aux = longitud[i];
                longitud[i] = longitud[j];
                longitud[j] = aux;
            }
        }
    }
    printf("Las cadenas ordenadas por longitud son:\n");
    for ( i = 0; i < tamanio; i++)
    {
        printf("La cadena %i es: %s\n", i+1, cadena[i]);
    }
}