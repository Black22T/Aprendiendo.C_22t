#include <stdio.h>
#include <string.h>
#define max 20

void ingresarcadena(char cadena[]);
int cadenamaslarga(char cadena1[], char cadena2[]);
int comparacionABC(char cadena1[], char cadena2[]);
void concatenar(char cadena1[], char cadena2[]);

int main(int argc, char const *argv[])
{
    char c1[max+1], c2[max+1];
    int cadenamayor, mayorABC;
    ingresarcadena(c1);
    ingresarcadena(c2);
    printf("La cadena c1 resultante es: %s\n", c1);
    printf("La cadena c2 resultante es: %s\n", c2);
    cadenamayor=cadenamaslarga(c1, c2);
    mayorABC=comparacionABC(c1, c2);
    if (cadenamayor == 1)
    {
        concatenar(c2, c1);
    }
    else if (cadenamayor == 2)
    {
        concatenar(c1, c2);
    }
    else
    {
        printf("Se compara alfabeticamente\n");
        if (mayorABC <= 0)
        {
            concatenar(c1, c2);
        }
        else if (mayorABC > 0)
        {
            concatenar(c2, c1);
        }
    }
    return 0;
}

void ingresarcadena(char cadena[])
{
    printf("Introduce una cadena: ");
    scanf("%s", cadena);
}

int cadenamaslarga (char cadena1[], char cadena2[]){
    int longitud1, longitud2;
    longitud1 = strlen(cadena1);
    longitud2 = strlen(cadena2);
    if (longitud1 > longitud2)
    {
        printf("La cadena mas larga es: %s\n", cadena1);
        return 1;
    }
    else if (longitud1 < longitud2)
    {
        printf("La cadena mas larga es: %s\n", cadena2);
        return 2;
    }
    else
    {
        printf("Las cadenas son iguales\n");
        return 0;
    }
}

int comparacionABC(char cadena1[], char cadena2[]){
    int comparacion;
    comparacion = strcmp(cadena1, cadena2);
    if (comparacion < 0)
    {
        printf("La cadena 1 es menor que la cadena 2\n");
        return comparacion;
    }
    else if (comparacion > 0)
    {
        printf("La cadena 1 es mayor que la cadena 2\n");
        return comparacion;
    }
    else
    {
        printf("Las cadenas son iguales\n");
        return comparacion;
    }
}

void concatenar(char cadena3[], char cadena4[]){
    strcat(cadena3, cadena4);
    printf("La cadena concatenada es: %s\n", cadena3);
}