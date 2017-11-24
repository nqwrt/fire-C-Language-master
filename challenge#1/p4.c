#include <stdio.h>

/* Not Completed */

#define BREAD	500
#define SHRIMP	700
#define COLA	400

void purchase(int, int, int, int, int);

int main(void) {
	int i,j,k;
	int money;
	printf("input: ");
	scanf("%d", &money);

	for(i=1; i<money/BREAD; i++) {
		for(j=1; j<money/SHRIMP; j++) {
			for(k=1; k<money/COLA; k++) {
				if(money == BREAD*i+SHRIMP*j+COLA*k) {
					printf("B: %d, S: %d:, C %d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}
				
