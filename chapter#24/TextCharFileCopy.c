#include <stdio.h>

int main(void) {
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("des.txt", "wt");
	int ch;

	if (src == NULL || des == NULL) {
		puts("Files open fail");
		return -1;
	}

	while((ch=fgetc(src)) != EOF) 
		fputc(ch, des);

	if(feof(src) != 0) puts("File copy success");
	else puts("File copy fail");

	fclose(src);
	fclose(des);
	return 0;
}
