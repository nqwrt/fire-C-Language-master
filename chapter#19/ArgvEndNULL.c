#include <stdio.h>

int main(int argc, char *argv[]) {
	int i=0;
	printf("Number of String: %d \n", argc);
	
	while(argv[i]!=NULL) {
		printf("%dth String: %s \n", i+1, argv[i]);	
		i++;
	}
	return 0;
}
