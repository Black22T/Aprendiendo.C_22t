#include <stdio.h>
#include <string.h>

#define tami 2

struct alumno
{
    int dni;
    char nombre[20];
    char apellido[20];
    float nota;
};

int main(int argc, char const *argv[])
{
    FILE *arch;
    int totalalumnos = 0, cantidadconmayora6 = 0, cantidadconmenora6 = 0;
    char alumnoconmayornota[50] = "", alumnoconmenornota[50] = "";
    float promediogeneral, notatotal, porcentajeconmayora6, promedioconmenora6, mayor = 0, menor = 11;
    struct alumno alumnos;
    arch = fopen("C:/Users/franc/Desktop/c/06 21 23 archivo/ejercicio3.dat", "rb");
    printf("%35s \n", "Listado de alumnos");
    printf("%-14s %-14s %-14s %-14s\n", "DNI", "Nombre", "Apellido", "Nota");
    while (fread(&alumnos, sizeof(struct alumno), 1, arch) == 1)
    {
        printf("%-14d ", alumnos.dni);
        printf("%-14s ", alumnos.nombre);
        printf("%-14s ", alumnos.apellido);
        printf("%-14.2f\n", alumnos.nota);
        totalalumnos++;
        notatotal += alumnos.nota;
        if (alumnos.nota >= 6)
        {
            cantidadconmayora6++;
        }
        else
        {
            cantidadconmenora6++;
        }
        if (alumnos.nota > mayor)
        {
            mayor = alumnos.nota;
            strcpy(alumnoconmayornota, "");
            strcat(alumnoconmayornota, alumnos.nombre);
            strcat(alumnoconmayornota, " ");
            strcat(alumnoconmayornota, alumnos.apellido);
        }
        if (alumnos.nota < menor)
        {
            menor = alumnos.nota;
            strcat(alumnoconmenornota, alumnos.nombre);
            strcat(alumnoconmenornota, " ");
            strcat(alumnoconmenornota, alumnos.apellido);
        }
    }
    fclose(arch);
    promediogeneral = notatotal / totalalumnos;
    porcentajeconmayora6 = (cantidadconmayora6 * 100) / totalalumnos;
    promedioconmenora6 = (float)cantidadconmenora6 / totalalumnos;
    printf("==========================================================================\n");
    printf("Total de alumnos: %d\n", totalalumnos);
    printf("Alumno con nota mas alta: %s\n", alumnoconmayornota);
    printf("Alumno con nota mas baja: %s\n", alumnoconmenornota);
    printf("Promedio general de los alumnos: %.2f\n", promediogeneral);
    printf("Cantidad de alumnos con nota mayor e igual 6: %d\n", cantidadconmayora6);
    printf("Cantidad de alumnos con nota menor a 6: %d\n", cantidadconmenora6);
    printf("Porcentaje de alumnos con nota mayor e igual a 6: %.2f\n", porcentajeconmayora6);
    printf("Promedio de alumnos con nota menor a 6: %.2f\n", promedioconmenora6);
    return 0;
}