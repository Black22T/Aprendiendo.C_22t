#include <stdio.h>
#define n 9

int main(int argc, char const *argv[])
{
    int lista[n]={0, 4, 78, 5, 32, 9, 77, 1, 23};
    for (int i = 0; i < n; i++)
    {
        printf("Digito %i: %i\n", i, lista[i]);
    }
    for (int j = n-1; j >= 0; j--)
    {
        printf("Digito %i: %i\n", j, lista[j]);
    }
    return 0;
}
