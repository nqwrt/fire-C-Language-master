#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char* str;
	str = (char*) malloc(20);
	int i=0;
	int flag=0;
	printf("Input String: ");
	
	scanf("%s", str);
	
	

	for(i=0; i<strlen(str)/2; i++) {
		if(*(str+i) != *(str+strlen(str)-(i+1))) {
			flag = 1;
		} else {

		}
	}	

	if (flag == 0) printf("Palindrome!\n");
	else printf("Not Palindrome!\n");

	free(str);
	return 0;
}
