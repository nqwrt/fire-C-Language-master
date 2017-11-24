#include <stdio.h>

typedef struct {
	char name[10];
	char idNum[20];
	char phone[20];
} Person;

int main(void) {
	Person p1;
	fgets(p1.name, sizeof(p1.name), stdin);
	fgets(p1.idNum, sizeof(p1.idNum), stdin);
	fgets(p1.phone, sizeof(p1.phone), stdin);

	FILE * fp = fopen("mystory.txt", "wt");

	fputs(p1.name, fp);
	fputs(p1.idNum, fp);
	fputs(p1.phone, fp);

	fputs("Food: JJambbong, Tangsu6\n", fp);
	fputs("Hobby: Socces\n", fp);

	fclose(fp);


	return 0;
}
