#include <stdio.h>

int main(void) {

	int score[5][5] = {0, };
	int i, j;
	for(i=0; i<4; i++) {
		printf("Input Score:");
		scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
	}
	
	for(i=0; i<4; i++) {
		score[i][4] = score[i][0] + score[i][1] + score[i][2] + score[i][3];
		score[4][i] = score[0][i] + score[1][i] + score[2][i] + score[3][i];
	}

	for(i=0; i<4; i++) {
		score[4][4] += score[i][4];
	}
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
