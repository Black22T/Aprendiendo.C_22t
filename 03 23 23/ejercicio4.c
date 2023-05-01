#include <stdio.h>

int main(int argc, char *argv[]) {
	char nombre1, apellido1;
	printf("Introduce nombre y apellido \n");
	
	scanf(" %c", &nombre1);
	scanf(" %c", &apellido1);
	if (nombre1!=apellido1 && nombre1!='a' && apellido1!='a'){
		printf("%c",nombre1);
	}
		else 
			printf("%c",apellido1);
	return 0;
}

