#include <stdio.h>

int main(int argc, char *argv[]) {
	float a,b,c;
	printf("Introduce tres numeros \n");
	scanf("%f %f %f", &a, &b, &c);
	if (a==b && c==b){
		printf("Los tres son iguales");
	}
		else if (a==b){
			printf("A y B son iguales");
		}
			else if (b==c){
				printf("B y C son iguales");
			}
			else if (a==c){
				printf("a y C son iguales");
			}
				else 
					printf("Ninguno son iguales");
	return 0;
}

