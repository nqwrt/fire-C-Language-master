#include <stdio.h>

int main(void) {
	int arr[3] = {0, 1, 2};
	printf("Name of Array:\t %p \n", arr);
	printf("First Element:\t %p \n", &arr[0]);
	printf("Second Element:\t %p \n", &arr[1]);
	printf("Third Element:\t%p \n", &arr[2]);
	return 0;
}
