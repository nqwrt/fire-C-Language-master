#include <stdio.h>

int main(void) {

	int i=1, j=1;
	do {
		j=1;
		while(j < 10) {
			printf("%d x %d = %d\n", i, j, i*j);
			j++;
		}
		printf("\n");
		i++;
	} while(i < 10);
	return 0;
}
