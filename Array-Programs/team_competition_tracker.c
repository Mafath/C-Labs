// Team competition tracker - compares scores between two teams across 3 rounds,
// determines winner for each round, then declares overall winner
#include<stdio.h>
int main() {
	
	int team1[3]={6,5,3};
	int team2[3]={0};
	
	int count1=0;
	int count2=0;
	
	
	for(int i=0; i<3;i++) {
		printf("Enter point %d: ", i+1);
		scanf("%d", &team2[i]);
	}
	
	printf("team 1\n");
	for(int j=0;j<3;j++){
		printf("%d, ", team1[j]);
	}
	
	printf("\nteam 2\n");
	for(int k=0;k<3;k++){
		printf("%d, ", team2[k]);
	}
	printf("\n");
	
	printf("\nWinners\n");
	for(int m=0;m<3;m++){
		
		if(team1[m]>team2[m]){
			printf("round %d : team1\n",m+1);
			count1++;
		}
		else{
			printf("round %d : team2\n",m+1);
			count2++;
		}
	}

	
	if(count1>count2){
		printf("Overall winner : team 1");
	}
	else if(count2>count1){
		printf("Overall winner : team 2");
	}
		
	return 0;
}
