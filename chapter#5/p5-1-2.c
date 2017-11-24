#include <stdio.h>

int main(void) {
	double d1=0, d2=0;
	printf("input: ");
	scanf("%lf %lf", &d1, &d2);
	printf("%f + %f = %f\n", d1, d2, d1+d2);
	printf("%f - %f = %f\n", d1, d2, d1-d2);
	printf("%f * %f = %f\n", d1, d2, d1*d2);
	printf("%f / %f = %f\n", d1, d2, d1/d2);
	return 0;
}
	
