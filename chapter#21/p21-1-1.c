#include <stdio.h>

int main(void) {
	
	int ch;
	
	while(1) {
		printf("Input: ");
		ch = getchar();

		if (ch >= 'A' && ch <= 'Z') {
			ch+=32;
			getchar();
		} else if (ch >= 'a' && ch <= 'z') {
			ch-=32;
			getchar();
		} else {
			printf("Please input alphabet\n");
			getchar();
			continue;
		}
		if( ch == EOF) break;

		fputc(ch, stdout);
		printf("\n");
	}
	
	return 0;
}
