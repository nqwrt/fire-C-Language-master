#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[20];
	char str2[20];
	printf("String #1: ");
	scanf("%s", str1);
	
	printf("String #2: ");
	scanf("%s", str2);

	if(!strcmp(str1, str2)) puts("Same!");
	else {
		puts("Not Same!");
		if(!strncmp(str1, str2, 3)) puts("First three characters are same.");
	}
	
	return 0;
}
