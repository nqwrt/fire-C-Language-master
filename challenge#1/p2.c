#include <stdio.h>

void print99(int, int);

int main(void) {
	int num1, num2;
	int i,j;
	int temp;
	printf("input: ");
	scanf("%d %d", &num1, &num2);
	print99(num1, num2);
	return 0;
}

void print99(int num1, int num2) {
	int temp;
	int i, j;
	if(num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for(i=num1; i<=num2; i++) {
		for(j=1; j<10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
}
