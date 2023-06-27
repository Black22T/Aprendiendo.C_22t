#include <stdio.h>
#include <string.h>
#define tami 3

struct estructura_amigo
{
    int edad;
    char nombre[20];
    char apellido[20];
    char telefono[20];
};

int main(int argc, char const *argv[])
{
    struct estructura_amigo record[tami];
    for (int i = 0; i < tami; i++)
    {
        printf("Ingrese datos del amigo %i\n", i + 1);
        printf("Ingrese edad:");
        scanf("%i", &record[i].edad);
        getchar();
        printf("Ingrese nombre:");
        gets(record[i].nombre);
        printf("Ingrese apellido:");
        gets(record[i].apellido);
        printf("Ingrese telefono:");
        gets(record[i].telefono);
        printf("========================================================\n");
    }
    for (int i = 0; i < tami; i++)
    {
        printf("Edad %i: %d\n", i, record[i].edad);
        printf("Nombre %i: %s\n", i, record[i].nombre);
        printf("Apellido %i: %s\n", i, record[i].apellido);
        printf("Telefono %i: %s\n", i, record[i].telefono);
    }
    return 0;
}
