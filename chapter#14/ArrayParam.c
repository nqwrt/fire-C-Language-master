#include <stdio.h>


void ShowArrayElem(int*, int);

int main(void) {
	int arr1[3] = {1, 2, 3};
	int arr2[5] = {1, 2, 3, 4, 5};

	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArrayElem(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}

void ShowArrayElem(int* param, int len) {
	int i;
	for(i=0; i<len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

