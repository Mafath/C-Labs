// Service rating frequency counter - collects customer ratings (1-5 scale),
// counts frequency of each rating, and displays results in a formatted table
// (use -1 to stop input early)
#include<stdio.h>
int main() {
	
	int rate[5] = {0};
	int value;
	
	for(int i=0;i<5;i++) {
		printf("Pls input the service rating (1-5): ");
		scanf("%d", &value);
		
		if(value == -1){
			break;
		}
		else if(value==1){
			rate[0]++;
		}
		else if(value==2){
			rate[1]++;
		}
		else if(value==3){
			rate[2]++;
		}
		else if(value==4){
			rate[3]++;
		}
		else if(value==5){
			rate[4]++;
		}
	}
	
	printf("\nRating\t\tNumber of response\n");
	for(int j=0;j<5;j++){
		printf("%5d%15d\n",j+1,rate[j]);
	}
	
	
	return 0;
}