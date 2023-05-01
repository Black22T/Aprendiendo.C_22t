#include <stdio.h> /* necesario para utilizar printf()*/
#include <conio.h> /* necesario para utilizar getch()*/

int main() {
	char c;
	c=getchar();
	printf ("El valor ingresado por teclado es:"),
	putchar (c);
	getch();
	return 0;
}