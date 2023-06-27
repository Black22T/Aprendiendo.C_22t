#include <stdio.h>
#include <string.h>
#define tami 4

struct alumno
{
    int dni;
    int edad;
    char nombre[20];
    char apellido[20];
    float promedio;
};

int main(int argc, char const *argv[])
{
    struct alumno record[tami];
    float totaledad;
    int menoredad = 150, mayoredad;
    for (int i = 0; i < tami; i++)
    {
        printf("Ingrese datos del alumno %i\n", i + 1);
        printf("Ingrese DNI:");
        scanf("%i", &record[i].dni);
        getchar();
        printf("Ingrese apellido:");
        gets(record[i].apellido);
        printf("Ingrese nombre:");
        gets(record[i].nombre);
        printf("Ingrese edad:");
        scanf("%i", &record[i].edad);
        getchar();
        if (record[i].edad <= menoredad)
        {
            menoredad = record[i].edad;
        }
        else
        {
            mayoredad = record[i].edad;
        }
        totaledad = totaledad + record[i].edad;
        printf("Ingrese promedio:");
        scanf("%f", &record[i].promedio);
        getchar();
        printf("==========================================================================\n");
    }
    printf("%-14s %-14s %-14s %-14s \n", "DNI", "Apellido", "Nombre", "Edad");
    printf("---------------------------------------------------------------------\n");
    for (int i = 0; i < tami; i++)
    {
        printf("%-14i ", record[i].dni);
        printf("%-14s ", record[i].apellido);
        printf("%-14s ", record[i].nombre);
        printf("%-14i \n", record[i].edad);
        printf("\n");
    }
    totaledad = totaledad / tami;
    printf("Total de alumnos: %i\n", tami);
    printf("Promeido de edad: %.1f\n", totaledad);
    printf("Menor edad: %i\n", menoredad);
    printf("Mayor edad: %i\n", mayoredad);
    return 0;
}