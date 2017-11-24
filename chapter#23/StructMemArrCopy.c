#include <stdio.h>

typedef struct {
	char name[20];
	char phone[20];
	int age;
} Person;

void ShowPersonInfo(Person man) {
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phone);
	printf("age: %d \n", man.age);
};

Person ReadPersonInfo(void) {
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phone);
	printf("age? "); scanf("%d", &man.age);
	return man;
}

int main(void) {
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
};

