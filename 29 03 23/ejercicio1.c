#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    int dia=0, lluvia, lluviame=0, lluviama=1000000, diame, diama;
    float ra, promedio;
    while (dia<7)
    {
        dia++;
        printf("Introduce la cantidad de lluvia del Dia %i :", dia);
        scanf("%i" , &lluvia);
        if (lluvia<lluviama){
            lluviama=lluvia;
            diama=dia;
        }
        if (lluvia>lluviame)
        {
            lluviame=lluvia;
            diame=dia;
        }
        promedio=promedio+lluvia;
    }
    promedio=promedio/7;
    printf("Dia de mayor lluvia fue el dia: %i", diama);
    printf("\nDia de menor lluvia fue el dia: %i", diame);
    printf("\nEl promedio de lluvia fue: %f", promedio);
	return 0;
}