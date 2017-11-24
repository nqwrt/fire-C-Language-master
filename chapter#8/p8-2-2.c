#include <stdio.h>

int main(void) {
	int a=0, z=0;
 	for(a=0; a<10; a++) {
		z = 9 - a;
		printf("(%d, %d)\n", a, z);
	}
	
	return 0;
}
