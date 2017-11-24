#include <stdio.h>

int main(void) {
	int num=0;
	printf("input: ");
	scanf("%d", &num);
	num = ~num;
	num += 1;
	printf("%d\n", num);
	return 0;
}
	
