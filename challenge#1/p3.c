#include <stdio.h>

int gcm(int, int);

int main(void) {
	int num1, num2;
	printf("input: ");
	scanf("%d %d", &num1, &num2);
	printf("gcm: %d\n", gcm(num1, num2));
}


int gcm(int num1, int num2) {
	int temp;
	int start=1;
	int gcm=1;
	if(num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	while(start <= num2) {
		if((num1 % start == 0) && (num2 % start == 0)) {
			gcm = start;
		}
		start++;
	}
	return gcm;
}

