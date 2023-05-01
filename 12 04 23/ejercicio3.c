#include <stdio.h>

int main(int argc, char *argv[]) {
    int a=0;
    int b=0;
    int con;
    printf("Iniciando conteo ");
    for (con = 0; con < 5; con++)
    {
        a++;
        b--;
        printf(",%i  %i  " ,a,b);
    }
    printf("Operacion terminada");
	return 0;
}