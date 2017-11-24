#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len-1] = 0;
}

int main(void) {
	char str[100];
	printf("Input String: ");
	fgets(str, sizeof(str), stdin);
	printf("Length: %zu, Content: %s \n", strlen(str), str);
	
	RemoveBSN(str);
	printf("Length: %zu, Content: %s \n", strlen(str), str);
	return 0;
}
