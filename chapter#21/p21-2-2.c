#include <stdio.h>
#include <string.h>

int main(void) {
	
	int i=0;
	char str1[20];
	char str2[20];
	char str3[40];

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	strcpy(str3, str1);
	for(i=0; i<40; i++) {
		if(str3[i] == '\n') 
			str3[i] = 0;
	}
	strcat(str3, str2);

	printf("%s", str3);

	return 0;
}
