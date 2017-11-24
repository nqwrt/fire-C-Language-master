#include <stdio.h>

int main(void) {
	int num=0, i=0;
	printf("input: ");
	scanf("%d", &num);
	while(i < num) {
		printf("Hello world!\n");
		i++;
	}
	return 0;
}

