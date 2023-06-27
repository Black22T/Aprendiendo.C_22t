#include <stdio.h>
#include <string.h>

void imprimir(char cadena[]);

int main(int argc, char const *argv[])
{
    FILE *archivo;
    char nombres[255]="";
    archivo = fopen("C:/Users/franc/Desktop/c/06 21 23 archivo/ejercicio1.txt", "w"); // Abrir el archivo en modo escritura
    if (archivo == NULL)                                                              // Verificar si la apertura fue exitosa
    {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    printf("Ingrese cinco nombres separados por punto:\n"); // Solicitar al usuario ingresar los nombres y guardarlos en el archivo
    for (int i = 0; i < 5; i++)
    {
        char nombre[50];
        scanf("%s", nombre);
        strcat(nombres,nombre);
        getchar();
    }
    fputs(nombres, archivo);                                // Escribir el nombre en el archivo
    fclose(archivo);                                        // Cerrar el archivo
    archivo = fopen("nombres.txt", "r");                    // Abrir el archivo en modo lectura
    printf("Contenido del archivo:\n");                     // Mostrar el contenido del archivo
    fgets(nombres, sizeof(nombres), archivo);
    imprimir(nombres);
    fclose(archivo); // Cerrar el archivo
    return 0;
}

void imprimir(char cadena[])
{
    int i = 0, cantidad = 0;
    while (cadena[i] != '\0')
    {
        if (cadena[i] == '.')
        {
            printf("\n");
        }
        else
        {
            printf("%c", cadena[i]);
        }
        i++;
    }
}