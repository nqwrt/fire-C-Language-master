#include <stdio.h>

int max(int, int, int);
int min(int, int, int);

int main(void) {
	int num1=0, num2=0, num3=0;
	printf("input: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("max: %d\n", max(num1, num2, num3));
	printf("min: %d\n", min(num1, num2, num3));
	return 0;
}

int max(int a, int b, int c) {
	return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int min(int a, int b, int c) {
	return a < b ? (a < c ? a : c) : (b < c ? b : c);
}
