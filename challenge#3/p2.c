#include <stdio.h>

int main(void) {

	int size;
	int num=0;
	int i=0, j=0;
	
	printf("Array Size ?: ");
	scanf("%d", &size);

	int arr[size][size];
	int total_size = size*size;
	int flag = size+2;

	while(num <= total_size) {
		num++;
		if(num <= size) {
			arr[i][j++] = num;
			if(j == size) j--;
		} else if(num <= size+size-1) {
			arr[++i][j] = num;
		} else if(num <= size+size-1+size-1) {
			arr[i][--j] = num;
		} else if(num <= size+size-1+size-1+size-2) {
			arr[--i][j] = num;
		} else if(num <= size+size-1+size-1+size-2+size-2) {
			arr[i][++j] = num;
		} else if(num <= size+size-1+size-1+size-2+size-2+size-3) {
			arr[++i][j] = num;
		} else if(num <= size+size-1+size-1+size-2+size-2+size-3+size-3) {
			arr[i][--j] = num;
		} else if(num <= size+size-1+size-1+size-2+size-2+size-3+size-3+size-4) {
			arr[--i][j] = num;
		} else if(num <= size+size-1+size-1+size-2+size-2+size-3+size-3+size-4+size-4) {
			arr[i][++j] = num;
		} else if(num <= size+size-1+size-1+size-2+size-2+size-3+size-3+size-4+size-4+size-5) {
			arr[++i][j] = num;
		} else if(num <= size+size-1+size-1+size-2+size-2+size-3+size-3+size-4+size-4+size-5+size-5) {
			arr[i][--j] = num;
		} else if(num <= size+size-1+size-1+size-2+size-2+size-3+size-3+size-4+size-4+size-5+size-5+size-6) {
			arr[--i][j] = num;
		}

	}
		
	printf("\n\n");
	for(i=0; i<size; i++) {
		for(j=0; j<size; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}
