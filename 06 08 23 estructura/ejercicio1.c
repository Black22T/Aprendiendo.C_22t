#include <stdio.h>
#include <string.h>
#define tami 10

struct amigo
    {
        int id;
        char nombre[20];
        char direccion[20];
        char email[20];
    };

int main(int argc, char const *argv[])
{   
    struct amigo record={1};
    record.id=1;
    strcpy(record.nombre,"Franco");
    strcpy(record.direccion,"Calle 1");
    strcpy(record.email,"7francogimenez@gmail.com");

    printf("ID: %d\n",record.id);
    printf("Nombre: %s\n",record.nombre);
    printf("Direccion: %s\n",record.direccion);
    printf("Email: %s\n",record.email);
    return 0;
}