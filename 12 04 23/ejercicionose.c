//to while

#include <stdio.h>

int main(int argc, char *argv[]) {
    int nu=1;
    do
    {
        printf("%d\n", nu);
        nu++;
    } while (nu<=10);
    printf("condicion de salida:%d\n", nu-1);
	return 0;
}