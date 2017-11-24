#include <stdio.h>

void bubble(int[]);

int main(void) {
	int num[5];
	printf("input: ");
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	bubble(num);
	printf("Sum: %d\n", sum(num));
	return 0;

}

void bubble(int num[]) {
	int i,j;
	int temp;
	for(i=0; i<5; i++) {	
		for(j=0; j<i; j++) {
			if(num[j] > num[j+1]) {
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	printf("Max: %d, Min: %d\n", num[4], num[0]);
}

int sum(int num[]) {
	int i;
	int sum=0;
	for(i=0; i<5; i++) {
		sum+=num[i];
	}
	return sum;
}
