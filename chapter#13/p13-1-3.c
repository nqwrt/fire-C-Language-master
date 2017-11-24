#include <stdio.h>

int main(void) {

	int arr[5] = {1, 2, 3, 4, 5};
	int* ptr = &arr[4];
	int i=0, sum=0;
	for(i=5; i>0; i--) {
		sum += *ptr;
		ptr--;
	}

	printf("%d\n", sum);

}
