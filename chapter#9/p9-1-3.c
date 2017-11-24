#include <stdio.h>

void fibonacci(int);

int main(void) {
	int num=0;
	printf("input: ");
	scanf("%d", &num);
	fibonacci(num);
	return 0;
}

void fibonacci(int n) {
	int num1=0, num2=1;
	int i=2;
	int temp=0;
	printf("%d\n", num1);
	printf("%d\n", num2);
	while(i < n) {
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		printf("%d\n", temp);
		i++;
	}
}

