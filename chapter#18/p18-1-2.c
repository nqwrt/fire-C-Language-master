#include <stdio.h>

void SimpleFuncOne(int *p1, int *p2) {

}

void SimpleFuncTwo(int (*p1)[4], int (*p2)[4]) {

}

int main(void) {
	
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);

	return 0;
}
