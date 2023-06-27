#include <stdio.h>
#include <string.h>
#define max 20

int main(int argc, char const *argv[])
{
    int longitud;
    char cadena[max+1];
    printf("Introduce una cadena: ");
    scanf("%s", cadena);
    longitud = strlen(cadena);
    for (int i = longitud; i < max; i++)
    {
        cadena[i] = 'a';
    }
    printf("La cadena resultante es: %s\n", cadena);
    return 0;
}