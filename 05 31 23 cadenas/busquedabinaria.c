#include <stdio.h>
#define tama 10

void ordenar(int vector[], int tamano);
int busquedaBinaria(int array[], int tamano, int valorabuscar);


int main(int argc, char const *argv[])
{
    int vector[tama]={18,3,6,8,9,12,15,21,24,27}, valorabuscar=30;
    ordenar(vector, tama);
    printf("El vector ordenado es: ");
    for (int i = 0; i < tama; i++)
    {
        printf("%i ", vector[i]);
    }
    printf("\n");
    printf("El valor a buscar es: %i \n", valorabuscar);
    if (busquedaBinaria(vector,tama, valorabuscar) != -1)
    {
        printf("El valor %i se encuentra en la posicion %i\n", valorabuscar, busquedaBinaria(vector,tama, valorabuscar) + 1);
    }
    else
    {
        printf("El valor %i no se encuentra en el vector\n", valorabuscar);
    }
    return 0;
}

void ordenar(int vector[], int tamano){
    int aux;
    for (int i = 0; i < tamano; i++)
    {
        for (int j = 0; j < tamano; j++)
        {
            if (vector[i] < vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

int busquedaBinaria(int array[], int tamano, int valorabuscar) {
    int inicio = 0;
    while (inicio <= tamano) {
        int medio = inicio + (tamano - inicio) / 2;
        if (array[medio] == valorabuscar) {
            if (medio <tama)return medio; // Elemento encontrado, se devuelve el índice
        }
        if (array[medio] < valorabuscar) {
            inicio = medio + 1; // Buscar en la mitad derecha del array
        } else {
            tamano = medio - 1; // Buscar en la mitad izquierda del array
        }
    }
    return -1; // Elemento no encontrado
}