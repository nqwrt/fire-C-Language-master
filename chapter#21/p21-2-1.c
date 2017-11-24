#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[20];
	int i;
	int result = 0;
	fgets(str, sizeof(str), stdin);

	for(i=0; i<20; i++) {
		switch(str[i]) {
			case 49: result+=1; break;
			case 50: result+=2; break;
			case 51: result+=3; break;
			case 52: result+=4; break;
			case 53: result+=5; break;
			case 54: result+=6; break;
			case 55: result+=7; break;
			case 56: result+=8; break;
			case 57: result+=9; break;
		}
	}
	printf("Result: %d\n", result);
	return 0;
}
