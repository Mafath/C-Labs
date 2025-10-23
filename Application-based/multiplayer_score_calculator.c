// Multi-player game score calculator - calculates average scores for multiple players
// across 4 rounds each, displays individual player averages
#include<stdio.h>
int main() {
	
	int player_qty, i=1, j=1, num, score;
	float average;
	
	printf("How many players are in the race:");
	scanf("%d", &player_qty);
	
	while(i<=player_qty) {

		printf("Enter the score of player %d (between 0-5)\n", i);
		
		while(j<=4) {
			printf("round %d - ",j);
			scanf("%d", &num);
			score+=num;
			j++;				
		}
		
		average = (float)score / 4;
		printf("average score - %.1f\n", average);
		printf("\n");
		score = 0;
		j=1;
		i++;
	}
	

	return 0;
}