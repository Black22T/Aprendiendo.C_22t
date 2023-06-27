#include <stdio.h>
#include <conio.h>
#include <string.h>
#define a "C:/Users/franc/Desktop/c/06 21 23 archivo/ejercicio2.bin"

struct registro
{
    int cliente;
    char nombre[20];
    float saldo;
};

int main(int argc, char const *argv[])
{
    FILE *arch;
    struct registro reg;
    char seguir;
    if ((arch = fopen(a, "wb")) == NULL)
    {
        printf("No se pudo abrir el archivo");
        return 1;
    }
    do
    {
        printf("\nIngrese numero de cliente: ");
        scanf("%d", &reg.cliente);
        printf("\nIngrese el nombre: ");
        scanf("%s", &reg.nombre);
        printf("\nIngrese el saldo: ");
        scanf("%f", &reg.saldo);
        fwrite(&reg, sizeof(reg), 1, arch);
        printf("desea terminar s/n:");
        getchar();
        scanf("%c", &seguir);
    } while (seguir == 'n');
    fclose(arch);
    getch();
}