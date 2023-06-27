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
    arch = fopen("C:/Users/franc/Desktop/c/06 21 23 archivo/ejercicio3.dat", "wb");
    struct alumno alumno[tami];
    for (int i = 0; i < tami; i++)
    {
        printf("Ingrese el dni del alumno %d: ", i + 1);
        scanf("%d", &alumno[i].dni);
        getchar();
        printf("Ingrese el nombre del alumno %d: ", i + 1);
        gets(alumno[i].nombre);
        printf("Ingrese el apellido del alumno %d: ", i + 1);
        gets(alumno[i].apellido);
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%f", &alumno[i].nota);
        getchar();
        printf("==========================================================================\n");
    }
    for (int i = 0; i < tami; i++)
    {
        fwrite(&alumno[i], sizeof(alumno[i]), 1, arch);
    }
    fclose(arch);
    return 0;
}