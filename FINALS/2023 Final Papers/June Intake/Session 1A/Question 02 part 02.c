#include<stdio.h>
int main() {
	
	int maze[5][5]={0};
	int row,column;
	int signal;
	int startRow,startColumn;
	int nwstartColumn,nwstartRow;

	
	for(int i=0;i<5;i++){
		printf("Enter the location of obstacle %d: ",i+1);
		scanf("%d%d",&row,&column);
		
		if(maze[row-1][column-1]==0){
			maze[row-1][column-1]=1;
		}
		else{
			printf("Sorry, there is an obstacle in this place.\n");
			i--;
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
	
	do{
		printf("Enter your current location in the maze: ");
		scanf("%d %d", &startRow,&startColumn);
		
		nwstartRow=startRow-1;
		nwstartColumn=startColumn-1;
		
		if(maze[nwstartRow][nwstartColumn]==1){
			printf("Start location can't be an obstacle.\n");
		}
		else{
			signal=1;
		}
	}while(signal!=1);
	

	
	
	printf("You can move ");
	if(maze[nwstartRow-1][nwstartColumn]==0){
		printf("up ");
	}
	if(maze[nwstartRow][nwstartColumn-1]==0){
		printf("left ");
	}
	if(maze[nwstartRow+1][nwstartColumn]==0){
		printf("down ");
	}
	if(maze[nwstartRow][nwstartColumn+1]==0){
		printf("right");
	}

	
	return 0;
}