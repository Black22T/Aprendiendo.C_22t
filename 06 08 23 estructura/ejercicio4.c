#include <stdio.h>
#include <string.h>
#define tami 2

struct estructura_amigo
{
    int edad;
    int nlegajo;
    char nombre[20];
    char apellido[20];
    float promedio;
};
struct estructura_amigo record[tami];

void clasificacion(int promocion, int regular);

int main(int argc, char const *argv[])
{
    int promocion, regular, noaprobado;
    for (int i = 0; i < tami; i++)
    {
        printf("Ingrese datos del amigo %i\n",i+1);
        printf("Ingrese N legajo:");
        scanf("%i",&record[i].nlegajo);
        getchar();
        printf("Ingrese apellido:");
        gets(record[i].apellido);
        printf("Ingrese nombre:");
        gets(record[i].nombre);
        printf("Ingrese edad:");
        scanf("%i",&record[i].edad);
        getchar();
        printf("Ingrese promedio:");
        scanf("%f",&record[i].promedio);
        getchar();
        printf("==========================================================================\n");
    }
    printf("%-14s %-14s %-14s %-14s %-14s \n","N Legajo","Apellido","Nombre","Edad","Promedio");
    for (int i = 0; i < tami; i++)
    {
        printf("%-14i ", record[i].nlegajo);
        printf("%-14s ", record[i].apellido);
        printf("%-14s ", record[i].nombre);
        printf("%-14i ", record[i].edad);
        printf("%-14f \n", record[i].promedio);
    }    
    printf("Ingrese la nota con la que se promociona: ");
    scanf("%i",&promocion);
    printf("Ingrese la nota con la que se regulariza: ");
    scanf("%i",&regular);
    clasificacion(promocion, regular);
    return 0;
}

void clasificacion(int promocion, int regular)
{
    int cantidadpromocion=0, cantidadregular=0, cantidadnoaprobado=0;
    for (int i = 0; i < tami; i++)
    {
        if (record[i].promedio>=promocion)
        {
            cantidadpromocion++;
        }
        else if (record[i].promedio>=regular)
        {
            cantidadregular++;
        }
        else
        {
            cantidadnoaprobado++;
        }
    }
    printf("Cantidad de promocionados: %i\n",cantidadpromocion);
    printf("Cantidad de regularizados: %i\n",cantidadregular);
    printf("Cantidad de no aprobados: %i\n",cantidadnoaprobado);
}