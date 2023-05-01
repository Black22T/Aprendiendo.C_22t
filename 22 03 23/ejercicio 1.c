#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a;
	printf ("");
	scanf("%d", &a);
	
	if (a %2==0){
		a=a+1;
		printf ("Ahora es impar: %d",a);
		}
		else printf("Ya es impar");
	getch();
	return 0;
}