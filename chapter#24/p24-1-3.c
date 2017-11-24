#include <stdio.h>

int main(void) {
	
	int ch;
	FILE * fp = fopen("mystory.txt", "rw");
	if(fp == NULL) {
		puts("file open fail");
		return -1;
	}
	
	while((ch=fgetc(fp)) != EOF) 
		fputc(ch, stdout);
	
	fclose(fp);
	return 0;
}
