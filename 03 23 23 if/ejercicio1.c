#include <stdio.h>

int main(int argc, char *argv[]) {
		int n;
		printf ("Teclee un numero entero: ");
		scanf ("%d", &n);
		if (n > 0) printf ("Positivo");
			else if (n < 0) printf ("Negativo");
				else printf ("Cero");
		getch();
	return 0;
}