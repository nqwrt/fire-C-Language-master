#include <stdio.h>

void SquareByValue(int);
void SquareByReference(int*);


int main(void) {
	int num = 5;
	SquareByValue(num);
	printf("%d\n", num);
	SquareByReference(&num);
	printf("%d\n", num);
}

void SquareByValue(int num) {
	num = num*num;
}

void SquareByReference(int* num) {
	*num = (*num) * (*num);
}
