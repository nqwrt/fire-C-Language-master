#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	
	char * sentence = (char *)malloc(sizeof(char) * 30);
	fgets(sentence, 30, stdin);
	
	
	free(sentence);
	return 0;
}
	
