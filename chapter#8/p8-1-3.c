#include <stdio.h>

int main(void) {
	int ko=0, en=0, ma=0;
	double aver=0.0;
	printf("input: ");
	scanf("%d %d %d", &ko, &en, &ma);
	aver = (ko + en + ma) / 3;
	if(aver >= 90) printf("A\n");
	else if(aver >= 80) printf("B\n");
	else if(aver >= 70) printf("C\n");
	else if(aver >= 50) printf("D\n");
	else printf("F\n");
	return 0;
}
	
	
