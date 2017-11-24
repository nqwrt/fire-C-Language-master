#include <stdio.h>

int main(void) {
	
	int arr[4][4] = {{ 1,  2,  3,  4},
			 { 5,  6,  7,  8},
			 { 9, 10, 11, 12},
			 {13, 14, 15, 16}};
	
	int arr90[4][4], arr180[4][4], arr270[4][4], arr360[4][4];
	int i, j;

	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			arr90[j][3-i] = arr[i][j];
		}
	}


	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			arr180[j][3-i] = arr90[i][j];
		}
	}


	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			arr270[j][3-i] = arr180[i][j];
		}
	}


	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			arr360[j][3-i] = arr270[i][j];
		}
	}

	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("%d\t", arr90[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");


	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("%d\t", arr180[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("%d\t", arr270[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("%d\t", arr360[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	return 0;

}
