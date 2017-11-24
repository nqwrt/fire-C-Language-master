#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	
	char * sentence = (char *)malloc(sizeof(char) * 30);
	fgets(sentence, 30, stdin);
	char * temp = strtok(sentence, "\n");
	char * word[10] = {0, };
	temp = strtok(temp, " ");
	word[0] = temp;
	int i = 1;

	while(temp = strtok(NULL, " ")) {
		word[i] = temp;
		i++;
	}

	for(i=10; i>-1; i--) {
		if(word[i] != NULL) {
			printf("%s ", word[i]);
		}
	}

	printf("\n");

	
	free(sentence);
	return 0;
}
	
