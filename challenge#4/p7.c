#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	char name[20];
	char phone[20];
} Person;

int init(Person * list, int count) {
	FILE * load = fopen("list.txt", "rt");
	char ch;
	int i = 0;
	int flag = 0;
	
	if(load == NULL) {
		return 0;
	} else {
		while((ch = fgetc(load)) != EOF) {
			if(ch == '\t') {
				flag = 1;
				i = 0;
				continue;
			} else if(ch == '\n') {
				flag = 0;
				count++;
				i = 0;
				continue;
			}
	
			if(flag == 0) {
				list[count].name[i++] = ch;
			} else if (flag == 1) {
				list[count].phone[i++] = ch;
			}
		}
	
		fclose(load);
		return count;
	}
}	

Person insert(void) {
	Person p;
	printf("Input Name: ");
	scanf("%s", p.name);
	printf("Input Phone: ");
	scanf("%s", p.phone);

	return p;
};

void search(Person * list) {
	int i;
	char * name;
	printf("Search Name: ");
	scanf("%s", name);

	for(i=0; i<30; i++) {
		if(!strcmp(name, list[i].name)) {
			printf("Search result: %s %s\n", list[i].name, list[i].phone);
		}
	}
}

void delete(Person * list, int count, Person p) {
	int i=0;
	char * name;
	printf("Delete Name: ");
	scanf("%s", name);
 	for(i=0; i<count; i++) {
		if(!strcmp(name, list[i].name)) {
			list[i] = p;
			for(i=i+1; i<count; i++) {
				list[i-1] = list[i];
			}
			return ;
		}
	}
	printf("Doesn't have that information\n");
}

void printAll(Person * list, int count) {
	int i=0;
	for(i=0; i<count; i++) {
		printf("Name: %s\tTel:%s\n", list[i].name, list[i].phone);
	}
}

void saveAndExit(Person * list, int count) {
	FILE * save = fopen("list.txt", "wt");
	int i;
	for(i=0; i<count; i++) {
		fputs(list[i].name, save);
		fputs("\t", save);
		fputs(list[i].phone, save);
		fputs("\n", save);
	}
	return;
}
	
	

int main(void) {

	int selection, i=0;
	Person list[30];
	Person p, nullP;
	int count = 0;
	count = init(list, count);
	while(1) {
		printf("***** Menu *****\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Search\n");
		printf("4.Print All\n");
		printf("5.Exit\n");

		printf("Choose the item: ");
		scanf("%d", &selection);
		switch(selection) {
		case 1:
			count++;
			p = insert();
			list[i++] = p;
			break;
		case 2:
			delete(list, count, nullP);
			count--;
			break;
		case 3:
			search(list);
			break;
		case 4:
			printAll(list, count);
			break;
		case 5:
			saveAndExit(list, count);
			return 0;	
		}
	}
}
