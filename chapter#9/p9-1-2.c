#include <stdio.h>

double CelToFah(double);
double FahToCel(double);


int main(void) {
	double temp = 0.0;
	int flag = 0;
	printf("input :");
	scanf("%lf %d", &temp, &flag);
	if(flag) printf("%f\n", CelToFah(temp));
	else printf("%f\n", FahToCel(temp));
	return 0;
}

double CelToFah(double n) {
	return n * 1.8 + 32;
}

double FahToCel(double n) {
	return (n - 32) / 1.8;
}
	
	
	
