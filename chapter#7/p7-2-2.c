#include <stdio.h>

int main(void) {
	int i=0, j=0;
	while(i < 5) {
		j=0;
		while(j < i) {
			printf("O");
			j++;
		}
		i++;
		printf("*\n");
	}
}