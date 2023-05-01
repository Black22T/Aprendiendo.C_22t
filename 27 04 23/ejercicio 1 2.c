#include <stdio.h>
#include <conio.h>

char vocales(char car);

int main()
{
    char car; 
    int a;
    printf("Ingrese un caracter\n");
    scanf("%c", &car);
    a = vocales(car);
    if (a==1)
    {
        printf("%c es vocal", car);
    }
    else
    {
        printf("%c no es vocal ", car);
    }
    return 0;
}

char vocales(char car)
{
    if (car=='a' || car=='e' || car=='i' || car=='o' || car=='u')
    {
        return 1;
    }
    else if (car=='A' || car=='E' || car=='I' || car=='O' || car=='U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}