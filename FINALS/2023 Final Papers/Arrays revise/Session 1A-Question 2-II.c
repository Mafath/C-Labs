#include<stdio.h>
int main() {
	
	int maze[5][5]={0};
	int row,column;
	
	//getting inputs from user to a 2D array
	for(int i=0;i<5;i++){
		printf("Enter the location of obstacle %d : ",i+1);
		scanf("%d%d", &row,&column);

		if(maze[row-1][column-1]==0){
			maze[row-1][column-1]=1;
		}
		else{
			printf("Sorry, there is an obstacle in this place\n");
			i--;
		}
	} 

	//printing a 2D array	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}