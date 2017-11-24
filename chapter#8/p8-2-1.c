#include <stdio.h>

int main(void) {
	int i=1, j=1;
	while(i < 10) {
		if(i % 2 != 0) {	
			i++;
			continue;
		}
		for(j=1; j<=i; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		i++;
	}
}
