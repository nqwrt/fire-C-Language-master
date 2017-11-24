#include <stdio.h>

void MaxandMin(int arr[], int **dp1, int **dp2) {
	int i, j;
	int max = -100;
	int min = 100;
	for(i=0; i<5; i++) {
		if(arr[i] < min) min = arr[i];
		if(arr[i] > max) max = arr[i];
	}
	*dp1 = &max;
	*dp2 = &min;
}

int main(void) {
	int *maxPtr, *minPtr;
	int arr[5];
	int i, num;
	for(i=0; i<sizeof(arr)/sizeof(int); i++) {
		printf("Input: ");
		scanf("%d", &num);
		arr[i] = num;
	}

	MaxandMin(arr, &maxPtr, &minPtr);
	printf("%d %d\n", *maxPtr, *minPtr);
	
	return 0;
}
