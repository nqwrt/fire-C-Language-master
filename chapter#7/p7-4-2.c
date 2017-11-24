#include <stdio.h>

int main(void) {
	int i=0, num=0;
	int sum=1;
	printf("input: ");
	scanf("%d", &num);
	for(i=1;i<=num;i++) {
		sum*=i;
	}
	printf("Factorial of n: %d\n", sum);
	return 0;
}
