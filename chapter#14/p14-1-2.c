#include <stdio.h>

void Swap(int*, int*, int*);


int main(void) {
	int num1=1, num2=2, num3=3;
	printf("%d %d %d\n", num1, num2, num3);
	Swap(&num1, &num2, &num3);
	printf("%d %d %d\n", num1, num2, num3);
	Swap(&num1, &num2, &num3);
	printf("%d %d %d\n", num1, num2, num3);
}

void Swap(int* num1, int* num2, int* num3) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;
}


