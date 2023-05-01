#include <stdio.h>

int main(int argc, char *argv[]) {
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);
	if (a>b && a>c){
		printf("\n a es el mayor");
	}
	else if (b>a && b>c){
		printf("\n b es el mayor");
	}
	else printf("\n c es el mayor");
	return 0;
}

