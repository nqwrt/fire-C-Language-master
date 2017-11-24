#include <stdio.h>

int main(void) {
	int i=0, sum=0, j=0;
	do {
		j=i;
		while(j%2 == 0) {
			sum+=j;
			j++;
		}
		i++;
	} while(i <= 100);
	printf("Summation: %d\n", sum);
	return 0;
}
