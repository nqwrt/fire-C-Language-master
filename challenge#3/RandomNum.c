#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("Range of random numbers: 0 ~ %d\n", 99);
	for(i=0; i<5; i++) {
		printf("Random number: %d\n", rand()%99);
	}
	return 0;
}


