#include <stdio.h>

struct employee {
	char name[20];
	char idNum[20];
	int salary;
};

int main(void) {
	
	struct employee staff[3];
	int i;
	for(i=0; i<3; i++) {
		printf("name: "); scanf("%s", staff[i].name);
		printf("inNum: "); scanf("%s", staff[i].idNum);
		printf("salary: "); scanf("%d", &staff[i].salary);
	}

	for(i=0; i<3; i++)
		printf("%s %s %d\n", staff[i].name, staff[i].idNum, staff[i].salary);

	return 0;
}
