#include <stdio.h>

typedef struct {
	unsigned short upper;
	unsigned short lower;
} DBShort;

typedef union {
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
} RDBuf;

int main(void) {
	RDBuf buf;
	printf("input integer: ");
	scanf("%d", &(buf.iBuf));

	printf("Upper 2 Byte: %u \n", buf.sBuf.upper);
	printf("Lower 2 Byte: %u \n", buf.sBuf.lower);
	printf("Upper 1 Byte: %c \n", buf.bBuf[0]);
	printf("Lower 1 Byte: %c \n", buf.bBuf[1]);
	
	return 0;
}
