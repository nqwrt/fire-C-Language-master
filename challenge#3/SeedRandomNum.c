#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int seed, i;
	printf("Seed: ");
	scanf("%d", &seed);
	srand(seed);

	for(i=0; i<5; i++) {
		printf("Random number: %d\n", rand());
	}
	return 0;
}
