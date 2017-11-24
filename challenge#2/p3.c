#include <stdio.h>

int main(void) {

	int arr[10] = {0,};
	int i, j=0, k=9;
	int num;
	for(i=0; i<10; i++) {
		printf("Input: ");
		scanf("%d", &num);
		if(num%2 == 0) arr[k--] = num;
		else arr[j++] = num;
	}
	for(i=0; i<10; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");

	return 0;
}
