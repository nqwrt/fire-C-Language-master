#include <stdio.h>
#define HOUR 3600
#define MINUTE 60

void time(int);

int main(void) {
	int sec;
	printf("input: ");
	scanf("%d", &sec);
	time(sec);
}

void time(int num) {
	int hour, minute, second;
	hour = num / HOUR;
	minute = (num - (hour * HOUR)) / MINUTE;
	second = num - (hour * HOUR) - (minute * MINUTE);
	printf("[h:%d, m:%d, s:%d]\n", hour, minute, second);
}

