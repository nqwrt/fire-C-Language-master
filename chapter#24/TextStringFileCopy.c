#include <stdio.h>

int main(void) {
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("des.txt", "wt");
	char str[20];

	if(src == NULL || des == NULL) {
		puts("Files open fail");
		return -1;
	}

	while(fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if(feof(src) != 0) 
		puts("File open success");
	else
		puts("File open fail");

	fclose(src);
	fclose(des);
	
	return 0;
}
