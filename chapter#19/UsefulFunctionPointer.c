#include <stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)) {
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2) {
	if(age1 > age2) return age1;
	else if (age1 < age2) return age2;
	else return 0;
}

int YoungerFirst(int age1, int age2) {
	if(age1 < age2) return age1;
	else if(age1 > age2) return age2;
	else return 0;
}

int main(void) {
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("Order#1 \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d, %d -> %d \n\n", age1, age2, first);
	
	printf("Order#2 \n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d, %d -> %d \n\n", age1, age2, first);
	return 0;
}
	
