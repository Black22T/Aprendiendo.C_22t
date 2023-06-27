#include <stdio.h>
#include <string.h>
#define tami 2

struct estructura_amigo
{
    int edad;
    char nombre[20];
    char apellido[20];
    char telefono[20];
};
struct estructura_amigo record[tami];

void mayores(int edad);

int main(int argc, char const *argv[])
{
    float promedio;
    int edadbuscar;
    for (int i = 0; i < tami; i++)
    {
        printf("Ingrese datos del amigo %i\n",i+1);
        printf("Ingrese edad:");
        scanf("%i",&record[i].edad);
        getchar();
        printf("Ingrese nombre:");
        gets(record[i].nombre);
        printf("Ingrese apellido:");
        gets(record[i].apellido);
        printf("Ingrese telefono:");
        gets(record[i].telefono);
        printf("==========================================================================\n");
    }
    printf("N amigo\t\tNombre\t\tApellido\tTelefono\tEdad\n");
    for (int i = 0; i < tami; i++)
    {
        printf("%i", i+1);
        printf("\t\t%s", record[i].nombre);
        printf("\t\t%s", record[i].apellido);
        printf("\t\t%s", record[i].telefono);
        printf("\t\t%d \n", record[i].edad);
    }
    for (int i = 0; i < tami; i++)
    {
        promedio+=record[i].edad;
    }
    printf("El promedio de edad es: %.2f\n", promedio/tami);
    printf("Ingrese edad a buscar: ");
    scanf("%i",&edadbuscar);
    mayores(edadbuscar);
    return 0;
}

void mayores(int anios){
    int cont=0;
    for (int i = 0; i < tami; i++)
    {
        if (record[i].edad>anios)
        {
            cont++;
        }
    }
    printf("Hay %i amigos mayores a %i anios\n", cont, anios);
}