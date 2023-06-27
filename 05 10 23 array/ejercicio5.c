#include <stdio.h>
#include <windows.h>
#define n 5

void concatenaciondevectores(int vector1[], int vector2[], int vector3[]);
void ordenarvectordemayorameno(int vector3[]);

int main(int argc, char const *argv[])
{
    int vector1[n]={4,2,5,1,7}, vector2[n]={1,3,6,2,9}, vector3[n+n];
    concatenaciondevectores(vector1, vector2, vector3);
    ordenarvectordemayorameno(vector3);
    for (int i = 0; i < n+n; i++)
    {
        printf("%i ", vector3[i]);
    }
    return 0;
}

void concatenaciondevectores (int vector1[], int vector2[], int vector3[]){
    for (int i = 0; i < n; i++)
    {
        vector3[i]=vector1[i];
        vector3[i+n]=vector2[i];
    }
}

void ordenarvectordemayorameno(int vector3[]){ 
    int contador=0;
    for (int i = 0; i < n+n; i++)
    {
        if (vector3[i]==vector3[i+1])
        {
            vector3[i]=0;
        }
        for (int j = 0; j < n+n; j++)
        {
            if (vector3[i]>vector3[j])
            {
                contador=vector3[i];
                vector3[i]=vector3[j];
                vector3[j]=contador;
            }
        }
    }
}