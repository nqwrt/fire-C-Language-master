#include <stdio.h>

int main(void) {
	FILE * fp = fopen("simple.txt", "wt");
	if(fp == NULL) {
		puts("File opens fail");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Teakho\n", fp);
	fputs("Your name is Nam\n", fp);
	fclose(fp);
	return 0;
}
