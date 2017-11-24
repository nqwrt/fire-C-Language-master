#include <stdio.h>

int main(void){
	int num;
	int i;
	int count=0;
	int binary[10] = {2};
	printf("Decimal Number: ");
	scanf("%d", &num);
	

	for(i=0; ;i++) {
		if(num == 0) break;
		else {
			count++;
			if(num%2 == 0) {
				binary[i] = 0;
				num = num/2;
			}
			else {
				binary[i] = 1;
				num = num/2;
			}
		}
	}
	for(i=count-1; i>=0; i--) {
		printf("%d ", binary[i]);
	}
	printf("\n");
	return 0;
}
