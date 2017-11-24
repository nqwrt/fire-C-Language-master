#include <stdio.h>

int main(void) {
	int num=10, i=0;
	int sum=0;
	while(i < 5) {
		printf("input: ");
		scanf("%d", &num);
		sum+=num;
		i++;
		
		while(num < 1) {
			i--;
			sum-=num;
			num=10;
		}
	}
	printf("Summation of inputs: %d\n", sum);
	return 0;
}
