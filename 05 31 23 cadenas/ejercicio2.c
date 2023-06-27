#include <stdio.h>

#define palabra 20
#define oracion 100

void cargarcadena(char cadena[]);
int contadordepalabras(char cadena[]);
int contadordeoraciones(char cadena[]);
void cantidaddepalabraspororacion(char cadena[]);

int main(int argc, char const *argv[])
{
    char cadena[oracion];
    cargarcadena(cadena);
    printf("La cadena ingresada es: %s \n", cadena);
    printf("La cantidad de oraciones es: %i \n", contadordeoraciones(cadena));
    printf("La cantidad de palabras es: %i \n", contadordepalabras(cadena)+contadordeoraciones(cadena));
    return 0;
}

void cargarcadena(char cadena[])
{
    scanf("%s", cadena);
}

int contadordepalabras(char cadena[])
{
    int i = 0, contador = 0;
    while (cadena[i] != '\0')
    {
        if (cadena[i] == '*')
        {
            contador++;
        }
        i++;
    }
    return contador;
}

int contadordeoraciones(char cadena[])
{
    int i = 0, contador = 0;
    while (cadena[i] != '\0')
    {
        if (cadena[i] == '.')
        {
            contador++;
        }
        i++;
    }
    return contador;
}

