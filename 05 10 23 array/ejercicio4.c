#include <stdio.h>
#include <windows.h>
#define n 10
int contadordemultiplo3=0, contador=0;
//lista de colores para consola de windows:
//\033[0;31m rojo \033[0;32m verde \033[0;33m amarillo \033[0;34m azul \033[0;35m magenta \033[0;36m cyan \033[0;37m blanco

void mostrarelementosdiferentesde0(int vector[], int ectormultiplode3[], int vectordiferente0[]);
void elementosmultiplode3(int vector[], int vectormultiplode3[], int vectordiferente0[]);

int main(int argc, char const *argv[])
{
    int vector[n]={1,2,3,4,5,6,7,8,9,10}, vectormultiplode3[n], vectordiferente0[n];
    elementosmultiplode3(vector, vectormultiplode3, vectordiferente0);
    mostrarelementosdiferentesde0(vector, vectormultiplode3, vectordiferente0);
    return 0;
}

void elementosmultiplode3(int vector[],int vectormultiplode3[], int vectordiferente0[]){
    for (int i = 0; i < n; i++)
    {
        if (vector[i]%3==0)
        {
            vectormultiplode3[contadordemultiplo3]=vector[i];
            contadordemultiplo3++;
        }
        else
        {
            vectordiferente0[contador]=vector[i];
            contador++;
        }
    }
}

void mostrarelementosdiferentesde0(int vector[], int vectormultiplode3[], int vectordiferente0[]){
    if (contadordemultiplo3>0)
    {
        printf("Los elementos multiplos de 3 son:\n");
        for (int i = 0; i < contadordemultiplo3; i++)
        {
            printf("%i ", vectormultiplode3[i]);
        }
        printf("\nLos elementos no multiplos de 3 son:\n");
        for (int i = 0; i < contador; i++)
        {
            printf("%i ", vectordiferente0[i]);
        }
    }
    else
    {
        printf("No hay elementos multiplos de 3");
    }
}