#include<stdio.h>
int main(){
	
	int maze[5][5]={0};
	int row,column;
	
	for(int i=1;i<=5;i++){
		printf("Enter the location of obstacle %d: ",i);
		scanf("%d %d",&row,&column);
		
		if(maze[row-1][column-1]==1){
			printf("Sorry,there is an obstacle in this place\n");
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
	
	int strow,stcolumn;
	int nwstrow,nwstcolumn;
	
	while(1){
		printf("Enter ur start location: ");
		scanf("%d %d",&strow,&stcolumn);
		
		nwstrow=strow-1;
		nwstcolumn=stcolumn-1;
		
		if(maze[nwstrow][nwstcolumn]==1){
			printf("Starting location can not be an obstacle.Re enter\n");
		}
		else if(maze[nwstrow][nwstcolumn]==0){
			break;
		}
	}
	
	printf("\nYou can move ");
	if(maze[nwstrow-1][nwstcolumn]==0){
		printf("up ");
	}
	if(maze[nwstrow][nwstcolumn-1]==0){
		printf("left ");
	}
	if(maze[nwstrow+1][nwstcolumn]==0){
		printf("down ");
	}
	if(maze[nwstrow][nwstcolumn+1]==0){
		printf("right ");
	}

	return 0;
}