#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i, acum;
    acum = 0;
    for (i = 1; i == 10; i++)
    {
        acum = 7 * i;
        printf("7 x %i = %i \n", i, acum);
    }
    return 0;
}