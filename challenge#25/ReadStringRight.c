#include <stdio.h>
#include <stdlib.h>

char * ReadUserName(void) {
	char * name = (char *)malloc(sizeof(int)*30);
	printf("What's your name? ");
	fgets(name, 30, stdin);
	return name;
}

int main(void) {
	char * name1;
	char * name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	
	printf("again name1: %s \n", name1);
	printf("again name1: %s \n", name1);
	free(name1);
	free(name2);

	return 0;
}
