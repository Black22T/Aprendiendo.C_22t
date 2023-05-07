/*
3. Escriba una función recursiva MCD que regrese el máximo común divisor de x y de y. 
El máximo común divisor de los enteros x e y es el número más grande que divide en forma 
completa tanto a x como a y. El gcd de x y de y, se define en forma recursiva como sigue: 
Si y es igual a 0, entonces gcd (de x, y) es x; de lo contrario  gcd (de x, y) es igual a gcd(y, x%y). 
*/

#include <stdio.h>

int mcd(int x, int y);

int main(int argc, char const *argv[])
{
    int x, y;
    printf("Ingrese dos numeros para calcular su MCD: ");
    scanf("%d %d", &x, &y);
    printf("El MCD de %d y %d es: %d", x, y, mcd(x, y));
    return 0;
}

int mcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return mcd(y, x % y);
    }
}