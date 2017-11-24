#include <stdio.h>

int main(void) {
	int num=0, i=9;
	printf("input :");
	scanf("%d", &num);
	while(i > 0) {
		printf("%d x %d = %d\n", num, i, num*i);
		i--;
	}
	return 0;
}

