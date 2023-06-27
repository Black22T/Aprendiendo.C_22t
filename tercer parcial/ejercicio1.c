#include <stdio.h>

#define tami 2
#define tamanio 20

struct prenda // definicion de la estructura
{
    int IDProd; // declaracion de los campos de la estructura
    char nombre[tamanio];
    float preciocosto;
    float precioventa;
    int cantidadventas;
};

void cargar(struct prenda prenda[tami]); // prototipos de las funciones
void ordenamientoIDProd(struct prenda prenda[tami]);
void mostrarporpanatalla(struct prenda prenda[tami], int cantidadesvendidad, float totalganancias);

int main(int argc, char const *argv[])
{
    struct prenda prenda[tami]; // declaracion de la variable de tipo estructura
    int cantidadesvendidad = 0;
    float totalganancias = 0;
    cargar(prenda); // llamado a la funcion cargar
    ordenamientoIDProd(prenda);
    for (int i = 0; i < tami; i++) // calculo de la cantidad de ventas y ganancias totales
    {
        cantidadesvendidad += prenda[i].cantidadventas;
        totalganancias = prenda[i].cantidadventas * prenda[i].precioventa + totalganancias;
    }
    mostrarporpanatalla(prenda, cantidadesvendidad, totalganancias);
    return 0;
}

void cargar(struct prenda prenda[tami]) // procemiento para cargar los datos de la estructura
{
    int cantidad = 0;
    while (cantidad < tami) // ciclo para cargar los datos de la estructura
    {
        printf("------------------------Informacion del producto %d------------------------\n", cantidad + 1);
        printf("Ingrese el ID del producto: ");
        scanf("%d", &prenda[cantidad].IDProd);
        getchar();
        while (prenda[cantidad].IDProd < 0) // validacion de datos
        {
            printf("Introduzca un ID valido: ");
            scanf("%d", &prenda[cantidad].IDProd);
            getchar();
        }
        printf("Ingrese el nombre del producto: ");
        gets(prenda[cantidad].nombre);
        printf("Ingrese el precio de costo del producto: $");
        scanf("%f", &prenda[cantidad].preciocosto);
        while (prenda[cantidad].preciocosto <= 0)
        {
            printf("Introduzca un precio de costo valido: $");
            scanf("%f", &prenda[cantidad].preciocosto);
        }
        printf("Ingrese el precio de venta del producto: $");
        scanf("%f", &prenda[cantidad].precioventa);
        while (prenda[cantidad].precioventa <= 0)
        {
            printf("Introduzca un precio de venta valido: $");
            scanf("%f", &prenda[cantidad].precioventa);
        }
        printf("Ingrese la cantidad de ventas del producto: ");
        scanf("%d", &prenda[cantidad].cantidadventas);
        while (prenda[cantidad].cantidadventas < 0)
        {
            printf("Introduzca una cantidad de ventas valida: ");
            scanf("%d", &prenda[cantidad].cantidadventas);
        }
        cantidad++;
    }
}

void ordenamientoIDProd(struct prenda prenda[tami]) // procedimiento para ordenar los datos de la estructura
{
    struct prenda aux;
    for (int i = 0; i < tami; i++)
    {
        for (int j = 0; j < tami; j++)
        {
            if (prenda[i].IDProd < prenda[j].IDProd)
            {
                aux = prenda[i];
                prenda[i] = prenda[j];
                prenda[j] = aux;
            }
        }
    }
}

void mostrarporpanatalla(struct prenda prenda[tami], int cantidadesvendidad, float totalganancias) // procedimiento para mostrar los datos de la estructura
{
    printf("%35s \n", "Listado de Productos vendidos");
    printf("%-14s %-14s %-14s %-14s %-14s\n", "IDProd", "NomProd.", " Precio Costo", " Precio Venta", " Cantidad Vendida");
    printf("--------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < tami; i++)
    {
        printf("%-14d ", prenda[i].IDProd);
        printf("%-14s ", prenda[i].nombre);
        printf(" $%-14.2f", prenda[i].preciocosto);
        printf("$%-14.2f", prenda[i].precioventa);
        printf("%-14d\n", prenda[i].cantidadventas);
    }
    printf("\nTotal de Cantidades Vendidas: %d\n", cantidadesvendidad);
    printf("Total de Ganancias: $%.2f\n", totalganancias);
}