#include <stdio.h>

void printPrime(int);

int main(void) {
	int num;
	printf("input: ");
	scanf("%d", &num);
	printPrime(num);
	return 0;
}

void printPrime(int num) {
	int i, j;
	int count=0;
	for(i=2; ;i++) {
		for(j=2; j<=i; j++) {
			if(i % j == 0) {
				if(i == j) {
					printf("%d\n", i);
					count++;
				} else {
					break;
				}
			}
		} 
		if(count == num) break;
	}
}



