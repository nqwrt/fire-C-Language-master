#include <stdio.h>
#include <string.h>

int main(void) {

	char str1[100] = "1234567890";
	char str2[20];
	char str3[5];

	/* Case#1 */
	strcpy(str2, str1);
	puts(str2);

	/* Case#2 */
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/* Case#3 */
	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3)-1] = 0;
	puts(str3);
	return 0;
}
