// Interactive player score calculator - calculates average scores for players
// across 3 rounds each, allows user to continue with more players (y/n)
#include<stdio.h>
int main() {
	
	int score,total=0;
	float average;
	int i;
	int playerCount=1;
	char des;
	
	do{
		printf("Enter the scores of player %d(between 0 - 4)\n", playerCount);
		
		for(i=1;i<=3;i++) {
			printf("round %d - ", i);
			scanf("%d", &score);
			total+=score;
		}
		average = (float)total/3;
		printf("average score - %.2f\n", average);
		total=0;
		i=1;
		
		printf("Do you want to enter scores for another player (y/n)?: ");
		scanf(" %c", &des);
		
		playerCount++;
		
	}while(des =='y');
	
	return 0;
}
