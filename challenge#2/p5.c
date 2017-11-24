#include <stdio.h>

int main(void) {
	int i, j, temp;
	int num[5];
	for(i=0; i<5; i++) {
		printf("Input: ");
		scanf("%d", &num[i]);
	}
	
	for(i=5; i>0; i--) {
		for(j=0; j<i; j++) {
			if(num[j] > num[j+1]) {
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}

	for(i=4; i>=0; i--) {
		printf("%d  ", num[i]);
	}

	printf("\n");
				
}
