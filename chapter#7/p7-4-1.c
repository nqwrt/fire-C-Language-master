#include <stdio.h>

int main(void) {
	int num1=0, num2=0;
	int i=0, sum=0;
	printf("input: ");
	scanf("%d %d", &num1, &num2);
	for(i=num1; i<=num2; i++) {
		sum+=i;
	}
	printf("Summation: %d\n", sum);
	return 0;
}
