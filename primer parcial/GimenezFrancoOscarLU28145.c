#include <stdio.h>
#include <math.h>
#include <windows.h>
//la lista de colores para la consola de windows 
//son: \033[0;31m rojo \033[0;32m verde \033[0;33m amarillo \033[0;34m azul \033[0;35m magenta \033[0;36m cyan \033[0;37m blanco

int main(int argc, char const *argv[])
{
    int comi = 0, alum = 0, i; //declaracion de variables enteras
    system("cls");
    printf("\033[0;31m");//color rojo
    float nota1, nota2, nota3, promedioalu = 0, promediocomi = 0; //declaracion de variables con decimal
    printf("Ingrese el numero de la comision: ");//se muestra por pantalla y dato que se espera
    scanf("%i", &comi); //se toma los datos ingresados por teclado y se almacena en la variable correspondiente
    printf("Ingrese el numero de Alumnos: ");
    scanf("%i", &alum);
    while (alum <= 0 || comi <= 0)//se valida los datos ingresados por el usuarios, estos teniendo que ser mayores a 0
    {
        if (alum<=0 && comi<=0)//si es el numero de alumnos <=0 y de comision <=0 se pide ambos datos
        {
            printf("\nIngresaste mal ambos datos\n");
            printf("Ingrese el numero de la comision: ");
            scanf("%i", &comi);
            printf("Ingrese el numero de Alumnos: ");
            scanf("%i", &alum);
        }
        else if (comi <= 0)//si es el numero de comision <=0 solo se pide este dato
        {
            printf("\nIngreso mal un dato\n");
            printf("Por favor ingrese el numero de la comision: ");
            scanf("%i", &comi);
        }
        else //si es el numero de alumno <=0 solo se pide este dato
        {
            printf("\nIngreso mal un dato\n");
            printf("Ingrese el numero de Alumnos: ");
            scanf("%i", &alum);
        }
        
    }
    for (i = 1; i <= alum; i++) //se toma la cantidad de alumnos, y se la compara con el contador que comienza en i=1
    {
        printf("\nIndique las tres notas\n");//se muestra por pantalla y dato que se espera
        scanf("%f", &nota1);//se toma los datos ingresados por teclado y se almacena en la variable correspondiente
        scanf("%f", &nota2);
        scanf("%f", &nota3);
        while (nota1 < 0 || nota2 < 0 || nota3 < 0)
        {
            printf("Las notas no pueden ser menor a 0, vuelve a ingresar");
            printf("\nIndique las tres notas\n");//se muestra por pantalla y dato que se espera
            scanf("%f", &nota1);//se toma los datos ingresados por teclado y se almacena en la variable correspondiente
            scanf("%f", &nota2);
            scanf("%f", &nota3);
        }
        printf("\nImprimir datos y resultados");
        printf("\n--------------------------------------------------------------------------------------------\n");
        printf("Reporte de calificacion del estudiante: %i\n", i); //se imprime por pantalla un mensaje y los datos ingresados
        printf("La primer  nota parcial y su porcentaje son:    %.2f     \033[0;32m 0.25\n\033[0;31m", nota1);//se imprime por pantalla un mensaje y los datos ingresados
        printf("La segunda nota parcial y su porcentaje son:    %.2f     \033[0;32m 0.30\n\033[0;31m", nota2);
        printf("La tercera nota parcial y su porcentaje son:    %.2f     \033[0;32m 0.45\n\033[0;31m", nota3);
        nota1 = nota1 * 0.25;//se opera los datos ingresados y se guarda en otra variable para su posterior operacion
        nota2 = nota2 * 0.30;
        nota3 = nota3 * 0.45;
        promedioalu = nota1 + nota2 + nota3;//se opera y se guarda el promedio del alumno=i
        printf("La nota final del estudiante es:                %.2f\n", promedioalu); //se muestra la variable anteriormente guardada
        promediocomi = promediocomi + promedioalu;//esto es el acumulador, donde se guarda la suma de todos los alumnos
    }
    promediocomi=promediocomi/alum;//se opera el acumulador anterior dividiendo por la cantidad de alumnos, para obtener el promedio de la comision
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("Promedio de la comision: %i", comi);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("Promedio: %.2f", promediocomi);//se muestra los resultados finales
    return 0;
}