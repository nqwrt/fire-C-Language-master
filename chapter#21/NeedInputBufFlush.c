#include <stdio.h>

int main(void) {
	char perID[7];
	char name[10];

	fputs("Input your birthday: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	
	fputs("Input your name: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("Birthday: %s \n", perID);
	printf("Name: %s \n", name);

	return 0;
}
