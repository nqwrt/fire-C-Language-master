#include <stdio.h>

struct employee {
	char name[20];
	char idNum[20];
	int salary;
};

int main(void) {
	
	struct employee staff;
	printf("name: "); scanf("%s", staff.name);
	printf("idNum: "); scanf("%s", staff.idNum);
	printf("salary: "); scanf("%d", &staff.salary);

	printf("%s %s %d\n", staff.name, staff.idNum, staff.salary);
	return 0;
}
