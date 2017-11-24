#include <stdio.h>
#include <string.h>

int main(void) {

	FILE * t1 = fopen("d1.txt", "rt");
	FILE * t2 = fopen("d2.txt", "rt");
	char ch1, ch2;
	while((ch1 = fgetc(t1)) != EOF && (ch2 = fgetc(t2)) != EOF) {
		if(ch1 != ch2) {
			printf("Not Same!\n");
			break;
		}
	}
	
	if(ch1 == EOF || ch2 == EOF) {
		printf("Same!\n");
	}

	return 0;
}
		
