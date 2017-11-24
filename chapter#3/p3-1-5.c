#include <stdio.h>

int main() {
	int num1=0, num2=0, num3=0;
	printf("input :");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("(%d - %d)(%d + %d)(%d %% %d) = %d\n", num1, num2, num2, num3, num3, num1, (num1-num2)*(num2+num3)*(num3%num1));
	return 0;
}

