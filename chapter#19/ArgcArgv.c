#include <stdio.h>

int main(int argc, char *argv[]) {
	int i=0;
	printf("Number of String: %d \n", argc);
	
	for(i=0; i<argc; i++) {
		printf("%dth String: %s \n", i+1, argv[i]);
	}
	return 0;
}
