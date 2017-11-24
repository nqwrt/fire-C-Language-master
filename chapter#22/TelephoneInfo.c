#include <stdio.h>
#include <string.h>

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) {
	struct person man1, man2;
	strcpy(man1.name, "Taekho Nam");
	strcpy(man1.phoneNum, "010-3536-6217");
	man1.age = 26;

	printf("Name: "); scanf("%s", man2.name);
	printf("Phone: "); scanf("%s", man2.phoneNum);
	printf("Age: "); scanf("%d", &man2.age);


	printf("%s \t %s \t %d\n", man1.name, man1.phoneNum, man1.age);
	printf("%s \t %s \t %d\n", man2.name, man2.phoneNum, man2.age);

	return 0;
}
