#include <stdio.h>

int main(void) {
	int i=0, j=0, k=0;
	int num = 0;
	int odd[5];
	int even[5];
	for (i=0; i<10; i++) {
		printf("input: ");
		scanf("%d", &num);
		if(num%2 == 0) even[j++] = num;
		else odd[k++] = num;
	}
	

	printf("Odd Number: ");
	for(i=0; i<5; i++) printf("%d ", odd[i]);
	printf("\n");
	printf("Even Number: ");
	for(i=0; i<5; i++) printf("%d ", even[i]);
	printf("\n");

	return 0;
}
