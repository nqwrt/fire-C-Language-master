#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(int n1, int n2) {
	if (n1 == 1 && n2 == 1) return 0;
	else if (n1 == 2 && n2 == 2) return 0;
	else if (n1 == 3 && n2 == 3) return 0;
	else if (n1 == 1 && n2 == 2) return 1;
	else if (n1 == 1 && n2 == 3) return -1;
	else if (n1 == 2 && n2 == 1) return -1;
	else if (n1 == 2 && n2 == 3) return 1;
	else if (n1 == 3 && n2 == 1) return 1;
	else if (n1 == 3 && n2 == 2) return -1;
}

int main(void) {
	int user, com, result;
	int draw=0, win=0;

	while(1) {
		srand((int)time(NULL));
		printf("Rock=1, Scissors=2, Paper=3 : ");
		scanf("%d", &user);
		com = rand()%3+1;
		result = game(user, com);
		if (result == 0) {
			draw++;
			printf("Draw\n");
		} else if (result == 1) {
			win++;
			printf("Win\n");
		} else if (result == -1) {
			printf("Lose\n");
			printf("Result: %d wins, %d draws \n", win, draw);
			break;
		}
		
	}

	return 0;
}
