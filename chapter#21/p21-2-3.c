#include <stdio.h>
#include <string.h>

int main(void) {

	char person1[20];
	char person2[20];
	char *name1;
	char *name2;
	char *age1;
	char *age2;

	char *token = NULL;
	
	fgets(person1, sizeof(person1), stdin);
	fgets(person2, sizeof(person2), stdin);

	name1 = strtok(person1, " ");
	age1 = strtok(NULL, " ");

	name2 = strtok(person2, " ");
	age2 = strtok(NULL, " ");

	if(!strcmp(name1, name2) && !strcmp(age1, age2)) printf("Same Name, Same Age\n");
	else if(!strcmp(name1, name2)) printf("Same Name, Not Same Age\n"); 
	else if(!strcmp(age1, age2)) printf("Same Age, Not Same Name\n");
	else printf("Not Same Name, Not Same Age\n");

	

	


	return 0;
}
