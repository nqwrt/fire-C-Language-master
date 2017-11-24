#include <stdio.h>

int main(void) {
	int num=1, sum=0;
	while(num != 0) {
		printf("input: ");
		scanf("%d", &num);
		sum += num;
	}
	printf("Sumation of input: %d\n", sum);
	return 0;
}
		
