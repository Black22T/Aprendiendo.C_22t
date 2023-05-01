#include <stdio.h>

int main() {
	float a,b;
	int selector;
	printf("Introduce dos numeros a operar \n");
	scanf("%f %f", &a, &b); //se pide itroducir los valores a operar para cargar a su correspondeinte variable
	printf("Operacion a realizar\n");
	printf(" 1__*Suma\n 2__*Resta\n 3__*Producto\n 4__*Division\n 5__*Salir\n");
	printf("Elegi el numero correspondiente a la operacion deseada\n");
	scanf("%i", &selector); //se carga la variable selector con el valor elegido para su posterior comparacion
	
	switch (selector){ //se utiliza la variable selector para realizar la operacio deseada
	case 1:
			a=a+b;
			printf("El resultado de la suma es = %f", a);
			break;
	case 2 :
			a=a-b;
			printf("El resultado de la resta es = %f", a);
			break;
	case 3 :
			a=a*b;
			printf("El resultado de la multiplicacion es = %f", a);
			break;
	case 4 :
			if (b!=0){ //se comprueba que el divisor sea !=0
				a=a/b;
				printf("El resultado de la division es = %f", a);
				break;
			}
			else printf("valor del divisor no valido\n");
			break;
	case 5 :
			printf("Saliste de la calculadora");
			break;
	}
	return 0;
}