#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float a,b,c,r1,r2;
	scanf("%f %f %f", &a, &b, &c);
	if (b<0 && b>0 && c>0 && c<0){
		r1= (2*a)/(-b- sqrt (b*b -4 *a*c));
		r2= (2*a)/(-b+ sqrt (b*b -4 *a*c));
	}
		else if (b==0){
			r1=-sqrt(-c/a);
			r2=+sqrt(-c/a);
		}
			else if(c==0){
				r1=-b/a;
			}
	else if
	return 0;
}

