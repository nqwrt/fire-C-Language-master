#include <stdio.h>

int main(void) {
	int ux=0,uy=0;
	int lx=0,ly=0;
	printf("upper x, y: ");
	scanf("%d %d", &ux, &uy);
	printf("lower x, y: ");
	scanf("%d %d", &lx, &ly);
	printf("The size of area on square: %d\n", (lx-ux)*(ly-uy));
	return 0;
}
	
