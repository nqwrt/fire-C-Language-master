#include <stdio.h>

typedef struct {
	char title[20];
	char author[20];
	int pages;
} Book;

int main(void) {
	Book books[3];
	int i;
	printf("Input book information\n");
	for(i=0; i<3; i++) {
		printf("%dth book title, author, pages: ", i+1);
		scanf("%s %s %d", books[i].title, books[i].author, &(books[i].pages));
		getchar();
	}
	printf("Output book information\n");
	for(i=0; i<3; i++) {
		printf("%dth Book: %s, %s, %d\n", i+1, books[i].title, books[i].author, books[i].pages);
	}
	return 0;
}
