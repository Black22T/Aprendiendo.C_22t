#include <stdio.h>
#define n 9
int t=0;

int insertarelemtentoarray(int array[], int a);

int main(int argc, char const *argv[])
{
    int array[n], a, e;
    size_t i = sizeof(array) / sizeof(array[0]);
    e=i;
    while (e < n)
    {
        printf("Introduce los valores del array\n");
        scanf("%i", &a);
        e=insertarelemtentoarray(array, a);
    }
    return 0;
}

int insertarelemtentoarray(int array[], int a)
{
    size_t j = sizeof(array) / sizeof(array[0]);
    array[t] = a;
    t++;
    return j;
}