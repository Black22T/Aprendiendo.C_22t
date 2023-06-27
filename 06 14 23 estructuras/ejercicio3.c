// Analizar el siguiente código y usando comentario indicar que hace.  
#include <stdio.h>

struct estructura_amigo // Definicion de la estructura
{
    // Declaracion de los miembros de la estructura
    char nombre[30]; 
    char apellido[40];
    char telefono[10];
    int edad;
};

struct estructura_amigo amigo = {"Juanjo", "Lopez", "983403367", 30}; // Declaracion de la variable de tipo estructura y asignacion de valores a los miembros de la estructura

int main(int argc, char const *argv[])
{
    printf("%s tiene ", amigo.apellido); // imprimir el apellido accediendo al miembro de la estructura
    printf("%i anios ", amigo.edad);
    printf("y su telefono es el %s.\n", amigo.telefono);
    return 0;
}