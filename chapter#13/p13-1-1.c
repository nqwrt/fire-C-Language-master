#include <stdio.h>

int main(void) {
	int arr[5] = {1, 2, 3, 4, 5};
	int* ptr = arr;
	int i=0;
	for(i=0; i<5; i++) {
		*ptr += 2;
		ptr++;
	}

	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return 0;
	
	
}
