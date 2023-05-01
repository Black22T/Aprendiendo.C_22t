#include <stdio.h>
#define tarifa1 1.2
#define tarifa2 1.0
#define tarifa3 0.9

int main(int argc, char *argv[]) {
	
	float gasto, tasa;
	printf("\n Gasto de corriente= ");
	scanf("%f", &gasto);
	if (gasto < 1000.0){
		tasa = tarifa1;
	}
	else 
		if (gasto >= 1000.0 && gasto <=1850.0){
			tasa= tarifa2;
		}
		else
			tasa = tarifa3;
	printf("\n tasa que le corresponde a %.1f kwxh es de %f\n", gasto, tasa);
	return 0;
}

