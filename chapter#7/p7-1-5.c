#include <stdio.h>

int main(void) {
	int count=0;
	int num=0;
	int sum=0;
	int i=0;
	printf("The number of inputs: ");
	scanf("%d", &count);
	while(i < count) {
		printf("input#%d: ", ++i);
		scanf("%d", &num);
		sum+=num;
	}
	printf("The average of inputs: %d / %d = %f\n", sum, count, (double)sum/count);
	return 0;

}
	
