#include <stdio.h>

typedef struct {
	double n;
	double i;
} CN;

int main(void) {
	CN num1, num2;
	printf("First complex number: ");
	scanf("%lf %lf", &num1.n, &num1.i);
	printf("Second complex number: ");
	scanf("%lf %lf", &num2.n, &num2.i);

	printf("+: %lf %lf\n", num1.n+num2.n, num1.i+num2.i);
	printf("*: %lf %lf\n", (num1.n*num2.n - num1.i*num2.i), (num1.i*num2.n+num1.n*num2.i));
	return 0;
}
