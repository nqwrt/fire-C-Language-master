#include <stdio.h>

int power(int);

int main(void) {
	int num;
	printf("input: ");
	scanf("%d", &num);
	printf("%d\n", power(num));
	return 0;
}

int power(int num) {
	int i=0;
	int base=2;	
	while(1) {
		base *= 2;
		i++;
		if(base > num) break;
	}
	return i;
}

