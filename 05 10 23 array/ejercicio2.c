#include <stdio.h>
#include <windows.h>
#define n 5

// lista de colores para consola de windows: \033[0;31m rojo \033[0;32m verde \033[0;33m amarillo \033[0;34m azul \033[0;35m magenta \033[0;36m cyan \033[0;37m blanco
void cargar(int vector[]);
void mostrar(int vector[]);
int promedio(int vector[]);
void notamayor(int vector[]);
void notamenor(int vector[]);

int main(int argc, char const *argv[])
{
    int vector1[n];
    float promedionotas;
    cargar(vector1);
    for (int i = 0; i < n; i++)
    {
        printf("Las notas son %i: %i\n", i + 1, vector1[i]);
    }
    mostrar(vector1);
    promedionotas = promedio(vector1);
    if (promedionotas >= 6)
    {
        printf("\033[0;37mEl promedio de las notas es:\033[0;32m %f\n", promedionotas);
    }
    else
    {
        printf("\033[0;37mEl promedio de las notas es:\033[0;31m %f\n", promedionotas);
    }
    printf("\033[0;37m");
    notamayor(vector1);
    notamenor(vector1);
    return 0;
}

void cargar(int vector[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Introduce la nota %i: ", i + 1);
        scanf("%i", &vector[i]);
        while (i < 0 || i > 11)
        {
            printf("Introduce una nota valida: ");
            scanf("%i", &vector[i]);
        }
    }
}

void mostrar(int vector[])
{
    for (int i = 0; i < n; i++)
    {
        if (vector[i] >= 6)
        {
            printf("\033[0;37mLa nota %i es:\033[0;32m %i\n", i + 1, vector[i]);
        }
        else
        {
            printf("\033[0;37mLa nota %i es:\033[0;31m %i\n", i + 1, vector[i]);
        }
    }
    printf("\n");
}

int promedio(int vector[])
{
    float suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += vector[i];
    }
    return suma / n;
}

void notamayor(int vector[])
{
    int mayor = 0;
    for (int i = 0; i < n; i++)
    {
        if (vector[i] >= mayor)
        {
            mayor = vector[i];
        }
    }
    if (mayor >= 6)
    {
        printf("La nota mayor es:\033[0;32m %i\n", mayor);
    }
    else
    {
        printf("La nota mayor es:\033[0;31m %i\n", mayor);
    }
    printf("\033[0;37m");
}

void notamenor(int vector[])
{
    int menor = 10;
    for (int i = 0; i < n; i++)
    {
        if (vector[i] <= menor)
        {
            menor = vector[i];
        }
    }
    if (menor >= 6)
    {
        printf("La nota menor es:\033[0;32m %i\n", menor);
    }
    else
    {
        printf("La nota menor es:\033[0;31m %i\n", menor);
    }
    printf("\033[0;37m");
}