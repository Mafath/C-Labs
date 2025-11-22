#include<stdio.h>
int main() {
	
	int maze[5][5]={0};
	int row,column;
	
	for(int i=1;i<=5;i++){
		printf("Enter the location of obstacle %d: ",i);
		scanf("%d %d",&row,&column);
		
		if(maze[row-1][column-1]==1){
			printf("Sorry,there is an obstacle in this place\n");
			i--;
		}
		else if(maze[row-1][column-1]==0){
			maze[row-1][column-1]=1;
		}
	}
	
	printf("\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",maze[i][j]);
		}
		printf("\n");
	}
	
	int stRow,stColumn;
	int nwstRow,nwstColumn;
//	int signal;	

	while(1){
		printf("Enter your current location in the maze: ");
		scanf("%d %d", &stRow,&stColumn);
		
		nwstRow=stRow-1;
		nwstColumn=stColumn-1;
		
		if(maze[nwstRow][nwstColumn]==1){
			printf("Starting location can not be an obstacle\n");
		}
		else if(maze[nwstRow][nwstColumn]==0){
			break;
		}	
	}
	
	
	printf("\nYou can move ");
	if(maze[nwstRow-1][nwstColumn]==0){
		printf("up ");
	}
	if(maze[nwstRow][nwstColumn-1]==0){
		printf("left ");
	}
	if(maze[nwstRow+1][nwstColumn]==0){
		printf("down ");
	}
	if(maze[nwstRow][nwstColumn+1]==0){
		printf("right ");
	}


	
	return 0;
}