#include <stdio.h>
#include <windows.h>
#define n 5
//lista de colores para consola de windows: 
//\033[0;31m rojo \033[0;32m verde \033[0;33m amarillo \033[0;34m azul \033[0;35m magenta \033[0;36m cyan \033[0;37m blanco
void guardarenordeniverso(int vector1[]);

int main(int argc, char const *argv[])
{
    int vector1[n]={1,2,3,4,5};
    guardarenordeniverso(vector1);
    return 0;
}

void guardarenordeniverso(int vector1[]){
    int vector[n];
    for (int i = 0; i < n; i++)
    {
        vector[n-i-1]=vector1[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i ", vector[i]);
    }
    
}