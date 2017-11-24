#include <stdio.h>

int main(void) {
	int num1=0;
	printf("input: ");
	scanf("%d", &num1);
	printf("%d x %d / %d = %d\n", num1, 8, 4, (num1<<3)>>2);
	return 0;
}
	
