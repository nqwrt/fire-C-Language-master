#include <stdio.h>

char name[20];

char * ReadUserName(void) {
	printf("What's your name? ");
	fgets(name, sizeof(name), stdin);
	return name;
}

int main(void) {
	char * name1;
	char * name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	return 0;
}
