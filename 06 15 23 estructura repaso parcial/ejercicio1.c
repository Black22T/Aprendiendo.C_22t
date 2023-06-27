#include <stdio.h>
#include <string.h>
#define tami 2
#define palabras 20

struct artista
{
    int dni;
    char nombre[palabras];
    char apellido[palabras];
};

struct exito
{
    int dni;
    char titulo[palabras];
    char generomusical[palabras];
    int cantidadventas;
};

struct final
{
    int dni;
    char nombre[palabras];
    char apellido[palabras];
    char titulo[palabras];
    char generomusical[palabras];
    int cantidadventas;
};

void cargarartistas(struct artista artista[tami]);
void cargarexito(struct exito exito[tami]);
void mostrarartistas(struct artista artista[tami]);
void mostrarexito(struct exito exito[tami]);
void ordenamientoartistasdni(struct artista artista[tami]);
void ordenamientoexitodni(struct exito exito[tami]);
void cargarfinal(struct final final[tami], struct artista artista[tami], struct exito exito[tami]);
void artistaconmasventas(struct final final[tami]);
int cantidadvendidaporgenero(struct final final[tami], int t);

int main(int argc, char const *argv[])
{
    int cantidadventasfolklore = 0, cantidadventasrock = 0, cantidadventaspopular = 0;
    struct artista artista[tami];
    struct exito exito[tami];
    struct final final[tami];
    cargarartistas(artista);
    cargarexito(exito);
    ordenamientoartistasdni(artista);
    ordenamientoexitodni(exito);
    mostrarartistas(artista);
    mostrarexito(exito);
    cargarfinal(final, artista, exito);
    artistaconmasventas(final);
    cantidadventasfolklore = cantidadvendidaporgenero(final, 1);
    cantidadventasrock = cantidadvendidaporgenero(final, 2);
    cantidadventaspopular = cantidadvendidaporgenero(final, 3);
    if (cantidadventasfolklore > cantidadventasrock && cantidadventasfolklore > cantidadventaspopular)
    {
        if (cantidadventasfolklore > cantidadventaspopular)
        {
            printf("El genero con mas ventas es folklore con %i ventas\n", cantidadventasfolklore);
        }
        else
        {
            printf("El genero con mas ventas es popular con %i ventas\n", cantidadventaspopular);
        }
    }
    return 0;
}

void cargarartistas(struct artista artista[tami])
{
    for (int i = 0; i < tami; i++)
    {
        printf("Ingrese datos del artista %i\n", i + 1);
        printf("Ingrese DNI:");
        scanf("%i", &artista[i].dni);
        getchar();
        printf("Ingrese apellido:");
        gets(artista[i].apellido);
        printf("Ingrese nombre:");
        gets(artista[i].nombre);
        printf("==========================================================================\n");
    }
}

void cargarexito(struct exito exito[tami])
{
    int opcion = 0;
    for (int i = 0; i < tami; i++)
    {
        printf("Ingrese datos del exito %i\n", i + 1);
        printf("Ingrese DNI:");
        scanf("%i", &exito[i].dni);
        getchar();
        printf("Ingrese titulo:");
        gets(exito[i].titulo);
        printf("Ingrese genero musical:");
        printf("Siendo 1=folklore, 2=rock y 3=popular");
        scanf("%i", &opcion);
        while (opcion != 1 && opcion != 2 && opcion != 3)
        {
            printf("Ingrese un numero valido");
            printf("Ingrese genero musical:");
            printf("Siendo 1=folklore, 2=rock y 3=popular");
            scanf("%i", &opcion);
        }
        switch (opcion)
        {
        case 1:
            strcpy(exito[i].generomusical, "folklore");
            break;
        case 2:
            exito[i].generomusical, "rock";
            break;
        case 3:
            exito[i].generomusical, "popular";
            break;
        default:
            break;
        }
        printf("Ingrese cantidad de ventas:");
        scanf("%i", &exito[i].cantidadventas);
        getchar();
        printf("==========================================================================\n");
    }
}

void ordenamientoartistasdni(struct artista artista[tami])
{
    struct artista aux;
    for (int i = 0; i < tami; i++)
    {
        for (int j = 0; j < tami; j++)
        {
            if (artista[i].dni < artista[j].dni)
            {
                aux = artista[i];
                artista[i] = artista[j];
                artista[j] = aux;
            }
        }
    }
}

void ordenamientoexitodni(struct exito exito[tami])
{
    struct exito aux;
    for (int i = 0; i < tami; i++)
    {
        for (int j = 0; j < tami; j++)
        {
            if (exito[i].dni < exito[j].dni)
            {
                aux = exito[i];
                exito[i] = exito[j];
                exito[j] = aux;
            }
        }
    }
}

void mostrarartistas(struct artista artista[tami])
{
    printf("Los datos cargador de artista son:\n");
    for (int i = 0; i < tami; i++)
    {
        printf("DNI: %i\n", artista[i].dni);
        printf("Apellido: %s\n", artista[i].apellido);
        printf("Nombre: %s\n", artista[i].nombre);
        printf("==========================================================================\n");
    }
}

void mostrarexito(struct exito exito[tami])
{
    printf("Los datos cargador de exito son:\n");
    for (int i = 0; i < tami; i++)
    {
        printf("DNI: %i\n", exito[i].dni);
        printf("Titulo: %s\n", exito[i].titulo);
        printf("Genero musical: %s\n", exito[i].generomusical);
        printf("Cantidad de ventas: %i\n", exito[i].cantidadventas);
        printf("==========================================================================\n");
    }
}

void cargarfinal(struct final final[tami], struct artista artista[tami], struct exito exito[tami])
{
    for (int t = 0; t < tami; t++)
    {
        for (int i = 0; i < tami; i++)
        {
            if (artista[i].dni == exito[t].dni)
            {
                final[i].dni = artista[i].dni;
                strcpy(final[i].nombre, artista[i].nombre);
                strcpy(final[i].apellido, artista[i].apellido);
                strcpy(final[i].generomusical, exito[i].generomusical);
                final[i].cantidadventas = exito[i].cantidadventas;
                strcpy(final[i].titulo, exito[i].titulo);
            }
        }
    }
}

void artistaconmasventas(struct final final[tami])
{
    int mayorventas = 0, dato = 0;
    for (int i = 0; i < tami; i++)
    {
        if (final[i].cantidadventas > mayorventas)
        {
            mayorventas = final[i].cantidadventas;
            dato = i;
        }
    }
    printf("El artista con mas ventas es:\n");
    printf("Nombre: %s\n", final[dato].nombre);
    printf("Apellido: %s\n", final[dato].apellido);
    printf("Titulo: %s\n", final[dato].titulo);
    printf("Genero musical: %s\n", final[dato].generomusical);
    printf("Cantidad de ventas: %i\n", final[dato].cantidadventas);
}

int cantidadvendidaporgenero(struct final final[tami], int t)
{
    int cantidad = 0;
    char genero[20];
    if (t == 1)
    {
        strcpy(genero, "rock");
    }
    else if (t == 2)
    {
        strcpy(genero, "folklore");
    }
    else
    {
        strcpy(genero, "popular");
    }
    for (int i = 0; i < tami; i++)
    {
        if (final[i].generomusical == genero)
        {
            cantidad = cantidad + final[i].cantidadventas;
        }
    }
    return cantidad;
}