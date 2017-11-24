#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

typedef struct {
	Point p1;
	Point p2;
} Rectangle;

void ShowAreaOfRectangle(Rectangle * rptr) {
	printf("Area of Rectangle: %d\n", ((rptr->p2).xpos - (rptr->p1).xpos) * ((rptr->p2).ypos - (rptr->p1).ypos));
}

int main(void) {
	Rectangle r1 = {{0, 0}, {100, 100}};
	ShowAreaOfRectangle(&r1);
	return 0;
}
