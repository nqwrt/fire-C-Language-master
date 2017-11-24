#include <stdio.h>

int power(int);

int main(void) {
	int num;
	printf("input: ");
	scanf("%d", &num);
	printf("%d\n", power(num));
	return 0;
}

int power(int num) {
	if(num == 0) return 1;
	else return power(num-1)*2;
}

