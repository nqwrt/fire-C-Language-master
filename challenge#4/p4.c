#include <stdio.h>
#include <string.h>

int main(void) {
	FILE * fp = fopen("text.txt", "rt");
	int countA = 0, countP = 0;
	

	char ch = fgetc(fp);
	if(ch == 'A' || ch == 'a') countA++;
	if(ch == 'P' || ch == 'p') countP++;
	while((ch=fgetc(fp)) != EOF) {
		if(ch == '\n' || ch == ' ' || ch == '\t') {
			ch = fgetc(fp);
			if(ch == 'A' || ch == 'a') countA++;
			if(ch == 'P' || ch == 'p') countP++;
		}
	}
	printf("Starting A: %d\n", countA++);
	printf("Starting P: %d\n", countP++);
	return 0;
}

