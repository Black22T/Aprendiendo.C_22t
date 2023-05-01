#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	float horas, precioh, salario;
	
	scanf("%f", &horas);
	scanf("%f", &precioh);
	if (horas<=40 && horas>0){
		salario=horas*precioh;
	}
	else
		salario=40*precioh + 1.5*precioh*(horas-40);
	
	printf ("Salario= %f", salario);
	return 0;
}

