#include <stdio.h>

int main(void) {

	FILE * fp = fopen("data.txt", "wt");
	if(fp == NULL) {
		puts("File open fail");
		return -1;
	}
	
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
}
