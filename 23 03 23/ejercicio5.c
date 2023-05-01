#include <stdio.h>

int main(int argc, char *argv[]) {
	char a;
	printf("Introduce vocal \n");
	
	scanf(" %c", &a);
	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
		printf("corresponde a una vocal y es %c",a);
	}
	else 
		printf("No es una vocal");
	return 0;
}