#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
	int i, j;
	int com[] = {0, 0, 0};
	int user[] = {0, 0, 0};
	int strike, ball;
	int count=0;
	for(i=0; i<3; i++) {
		srand((int)time(NULL));
		com[i] = rand()%10;
		if((i == 1 && com[i] == com[i-1]) || (i == 2 && (com[i] == com[i-2]) || (com[i] == com[i-1]))) {
			i--;
		}
	}
	

	printf("\n\n\n");
	for(i=0; i<3; i++) printf("%d ", com[i]);
	printf("\n\n\n");

	while(1) {
		count++;
		strike = 0, ball = 0;
		printf("User input: ");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);

		for(i=0; i<3; i++) {
			for(j=0; j<3; j++) {
				if(user[i] == com[j] && i == j) strike++;
				else if(user[i] == com[j]) ball++;
			}
		}

		printf("%dth input: %d Strike, %d Ball\n", count, strike, ball);
		if(strike == 3) {
			printf("Game Over!");
			break;
		}
	}
	
	return 0;
}
