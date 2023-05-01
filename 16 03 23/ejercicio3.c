#include <stdio.h> /* necesario para utilizar printf()*/
#include <conio.h> /* necesario para utilizar getch()*/

int main() {
	int a,b,c;
	printf ("Teclee dos Numeros enteros: \n");
	scanf ("%i \n %i", &a , &b);
    printf ("Los valores ingresados son: A = %i y B = %i\n", a, b);
	c=a;
    a=b;
    b=c;
    printf ("Los valore intercambiados son: A = %i y B = %i", a, b);
	return 0;
}