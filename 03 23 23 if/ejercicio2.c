#include <stdio.h>
#define pi 3.14

int main(int argc, char *argv[]) {
	float a;
	printf("Introduce el radio ");
	scanf("%f", &a);
	if (a>0){
		a=pi*a*2;
		printf("\n El perimetro es= %f" ,a);
	}
	else 
		printf("\n El radio no es valido");
	return 0;
}

