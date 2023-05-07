#include <stdio.h>
#define n 9

int comprobarcapicua(int lista[]);

int main(int argc, char const *argv[])
{
    int lista[n] = {23, 1, 77, 9, 32, 9, 77, 1, 23}, resu;
    resu=lista[n];
    if (resu == 1)
    {
        printf("Es capicua");
    }
    else
        printf("No es capicua");
    return 0;
}

int comprobarcapicua(int lista[n])
{
    int i=n-1, capicua=0;
    for (int h = 0; h < n; h++)
    {
        if (lista[h] == lista[i])
        {
            capicua++;
        }
        i--;
    }
    if (capicua == n)
    {
        return 1;
    }
    else 
        return 0;
}