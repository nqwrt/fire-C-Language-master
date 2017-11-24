#include <stdio.h>

int main(void) {
	int num=0, i=0;
	printf("input: ");
	scanf("%d", &num);
	while(i < num) {
		i++;
		printf("%d\n", i*3);
	}
	return 0;
}
	
