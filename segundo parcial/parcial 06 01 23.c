#include <stdio.h>
#define tama 6

void ordenar(int vector[], int tamano);
void mostrararray(int vector[], int tamano);
void cargarmatriz2x3(int matriz[2][3], int vector[]);
void mostrararray2x3(int matriz[2][3]);
int busquedaBinaria(int array[], int tamano, int valorabuscar);
void mostrasenmatriz(int matriz[2][3], int posicion);
void esdivisiblepor3(int vector[], int posicion);

int main(int argc, char const *argv[])
{
    int array[tama] = {2, 4, 10, 5, 15, 3}, matriz[2][3], buscar, aux;  //declaracion de variables, arrays y matriz
    ordenar(array, tama);                                               //llamado a la funcion ordenar
    mostrararray(array, tama);                                          //llamado a la funcion mostrararray
    cargarmatriz2x3(matriz, array);                                     //llamado a la funcion cargarmatriz2x3
    mostrararray2x3(matriz);                                            //llamado a la funcion mostrararray2x3
    printf("\nIngresa un numero a buscar: ");                           //se le pide al usuario que ingrese un numero a buscar
    scanf("%i", &buscar);                                               //se guarda el numero en la variable buscar
    aux = busquedaBinaria(array, tama, buscar);                         //se llama a la funcion busquedaBinaria y se guarda el resultado en la variable aux
    if (aux == -1)                                                      //si el resultado de la funcion es -1, el numero no se encuentra en la matriz
    {
        printf("El numero no se encuentra en la matriz\n");             //se imprime por pantalla que el numero no se encuentra en el array
    }
    else                                                               //si el resultado de la funcion es distinto de -1, el numero se encuentra en la matriz
    {
        mostrasenmatriz(matriz, buscar);                                //se llama a la funcion mostrasenmatriz
        esdivisiblepor3(array, aux);                                   //se llama a la funcion esdivisiblepor3
    }
    return 0;
}

void ordenar(int vector[], int tamano) //funcion ordenar de forma descendente
{
    int aux;
    for (int i = 0; i < tamano; i++)
    {
        for (int j = 0; j < tamano; j++)
        {
            if (vector[i] > vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

void mostrararray(int vector[], int tamano) //funcion mostrar array ordenado
{
    for (int i = 0; i < tamano; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

void cargarmatriz2x3(int matriz[][3], int vector[]) //funcion cargar matriz 2x3 con el array ordenado
{
    int k = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++, k++)
        {
            matriz[i][j] = vector[k];
        }
    }
}

void mostrararray2x3(int matriz[2][3]) //funcion mostrar matriz 2x3 con el array ordenado
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

int busquedaBinaria(int array[], int tamano, int valorabuscar)
{
    int inicio = 0;
    while (inicio <= tamano)
    {
        int medio = inicio + (tamano - inicio) / 2;
        if (array[medio] == valorabuscar)
        {
            if (medio < tama)
                return medio; // Elemento encontrado, se devuelve el índice
        }
        if (array[medio] < valorabuscar)
        {
            tamano = medio - 1; // Buscar en la mitad derecha del array
        }
        else
        {
            inicio = medio + 1;
             // Buscar en la mitad izquierda del array
        }
    }
    return -1; // Elemento no encontrado
}

void mostrasenmatriz(int matriz[2][3], int aux)
{
    for (int i = 0; i < 2; i++)
    {
        for (int t = 0; t < 3; t++)
        {
            if (matriz[i][t] == aux)
            {
                printf("El numero %i se encuentra en la posicion [%i][%i]\n", aux, i+1, t+1);
            }
        }
    }
}

void esdivisiblepor3(int vector[], int posicion) //se verifica si el numero es divisible por 3
{
    if (vector[posicion] % 3 == 0) //si el resto de la division es 0, el numero es divisible por 3 y se imprime por pantalla
    {
        printf("El numero %d es divisible por 3, y su resultado es %i\n", vector[posicion], vector[posicion] / 3);
    }
    else //si el resto de la division es distinto de 0, el numero no es divisible por 3 y se imprime por pantalla
    {
        printf("El numero %d no es divisible por 3\n", vector[posicion]);
    }
}