#include <stdio.h>
#define tam 5
void mostras(char cadena[], int largo);
int comparadordecadenas(char cadena1[], char cadena2[]);
int buscarcaracteres(char cadena[], char caracter);

int main(int argc, char const *argv[])
{
    char nombre[tam] = {"hola"}, apellido[tam], buscar;
    int cantidad;
    printf("Ingrese su apellido: \n");
    for (int i = 0; i < tam; i++)
    {
        if (i == tam - 1)
        {
            apellido[i] = '\0';
        }
        else
        {
            scanf("%c", &apellido[i]);
            getchar();
        }
    }
    printf("La cadena de nombre es: \n");
    mostras(nombre, tam);
    printf("La cadena de apellido es: \n");
    mostras(apellido, tam);
    if (comparadordecadenas(nombre, apellido) == 1)
    {
        printf("Las cadenas son iguales \n");
    }
    else
        printf("Las cadenas son distintas \n");
    printf("Ingrese un caracter a buscar: \n");
    scanf("%c", &buscar);
    getchar();
    cantidad= buscarcaracteres(apellido, buscar);
    if (cantidad > 0)
    {
        printf("El caracter %c se encuentra en la cadena apellido %i veces \n", buscar, cantidad);
    }
    else
        printf("El caracter %c no se encuentra en la cadena apellido \n", buscar);
    return 0;
}

void mostras(char cadena[], int largo)
{
    int i = 0;
    while (i < largo)
    {
        if (cadena[i] != '\0')
        {
            printf("caracter %d: %c \n", i, cadena[i]);
        }
        i++;
    }
}

int comparadordecadenas(char cadena1[], char cadena2[])
{
    int i = 0;
    while (i != '\0')
    {
        if (cadena1[i] != cadena2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int buscarcaracteres(char cadena[], char caracter)
{
    int i = 0, cantidad = 0;
    while (cadena[i] != '\0')
    {
        if (cadena[i] == caracter)
        {
            cantidad++;
        }
        i++;
    }
    return cantidad;
}