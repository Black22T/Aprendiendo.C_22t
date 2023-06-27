#include <stdio.h>
#include <string.h>
#define tami 2

struct alumno
{
    int dni;
    int edad;
    char nombre[20];
    char apellido[20];
    float promedio;
};

void cantidadalumnosmayor7(struct alumno record[tami]);
void porcentajelumnosmayor7(struct alumno record[tami]);

int main(int argc, char const *argv[])
{
    struct alumno record[tami];
    float totaledad, totalpromedio;
    int menoredad = 150, mayoredad, promediomenora7=0;
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
        printf("Ingrese promedio:");
        scanf("%f", &record[i].promedio);
        totalpromedio = totalpromedio + record[i].promedio;
        if (record[i].promedio < 7)
        {
            promediomenora7++;
        }
        getchar();
        printf("==========================================================================\n");
    }
    printf("%-14s %-14s %-14s %-14s \n", "DNI", "Apellido", "Nombre", "Promedio");
    printf("---------------------------------------------------------------------\n");
    for (int i = 0; i < tami; i++)
    {
        printf("%-14i ", record[i].dni);
        printf("%-14s ", record[i].apellido);
        printf("%-14s ", record[i].nombre);
        printf("%-14i \n", record[i].promedio);
    }
    totalpromedio = totalpromedio / tami;
    printf("Total de alumnos: %i\n", tami);
    printf("Promedio general de los alumnos: %.1f\n", totalpromedio);
    cantidadalumnosmayor7(record);
    porcentajelumnosmayor7(record);
    promediomenora7 = promediomenora7 / tami;
    printf("Promedio de alumnos con promedio menor a 7: %i\n", promediomenora7);
    return 0;
}

void cantidadalumnosmayor7(struct alumno record[tami])
{
    int cantidad = 0;
    for (int i = 0; i < tami; i++)
    {
        if (record[i].promedio >= 7)
        {
            cantidad++;
        }
    }
    printf("Cantidad de alumnos con promedio mayor o igual a 7: %i\n", cantidad);
    printf("cantidad de alumnos con promedio menor a 7: %i\n", tami - cantidad);
}

void porcentajelumnosmayor7(struct alumno record[]){
    float cantidad = 0;
    for (int i = 0; i < tami; i++)
    {
        if (record[i].promedio >= 7)
        {
            cantidad++;
        }
    }
    cantidad = cantidad / tami;
    cantidad = cantidad * 100;
    printf("Porcentaje de alumnos con promedio mayor o igual a 7: %.2f%%\n", cantidad);
    printf("Porcentaje de alumnos con promedio menor a 7: %.2f%%\n", 100 - cantidad);
}