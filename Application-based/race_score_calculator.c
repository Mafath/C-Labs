// Multi-player race score calculator - calculates average scores for multiple players
// across 2 rounds each, displays individual player averages
#include<stdio.h>
int main() {
	
	int playerCount,i=1,j,score,sum=0;
	float average;
	
	printf("How many players are in the race:");
	scanf("%d", &playerCount);
	
	while(i<=playerCount) {
		printf("Enter the scores of player %d(between 0 - 7)\n", i);
		
		for(j=1;j<=2;j++) {
			printf("round %d - ", j);
			scanf("%d", &score);
			sum+=score;
		}
		
		average = (float)sum/2;
		printf("average score - %.1f\n", average);
		printf("\n");
		sum=0;
		j=0;
		
		i++;
	}
	
	
	return 0;
}