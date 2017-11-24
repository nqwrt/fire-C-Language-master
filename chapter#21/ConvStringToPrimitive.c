#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[20];
	printf("input integer: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("input double: ");
	scanf("%s", str);
	printf("%f \n", atof(str));

	return 0;
}
