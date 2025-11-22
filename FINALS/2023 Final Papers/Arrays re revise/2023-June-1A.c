//#include<stdio.h>
//int main() {
//	
//	int array1[7];
//	int array2[7];
//	int array3[7];
//	int temp;
//	
//	for(int i=0;i<7;i++){
//		printf("Insert array1[%d]: ",i+1);
//		scanf("%d", &array1[i]);
//	}
//	
//	for(int i=0;i<7;i++){
//		temp=array1[i];
//		array2[i]=array1[7-1-i];
//		array2[7-1-i]=temp;
//	}
//
//	printf("Array1\n");	
//	for(int i=0;i<7;i++){
//		printf("%d ",array1[i]);
//	}
//	
//	printf("\nArray2\n");	
//	for(int i=0;i<7;i++){
//		printf("%d ",array2[i]);
//	}
//	
//	for(int i=0;i<7;i++){
//		array3[i]=array1[i]+array2[i];
//	}
//	
//	printf("\nArray3\n");	
//	for(int i=0;i<7;i++){
//		printf("%d ",array3[i]);
//	}
//	
//	return 0;
//}

#include<stdio.h>
int main() {
	
	int maze[5][5]={0};
	int row,column;
	
	for(int i=0;i<5;i++){
		printf("Enter the location of obstacle %d: ",i+1);
		scanf("%d%d",&row,&column);
		if(maze[row-1][column-1]==1){
			printf("Sorry,there is an obstacle in this place\n");
			i--;
		}
		else{
			maze[row-1][column-1]=1;
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
	
	int strow,stcolumn;
	
	while(1){
		printf("Enter your start location: ");
		scanf("%d%d",&strow,&stcolumn);
		
		if(maze[strow-1][stcolumn-1]==1){
			printf("Start location can not be an obstacle\n");
		}
		else{
			break;
		}
	}
	
	
	
	printf("You can move ");
	if(maze[strow-1-1][stcolumn-1]==0){
		printf("up ");
	}
	if(maze[strow-1][stcolumn-1-1]==0){
		printf("left ");
	}
	if(maze[strow-1+1][stcolumn-1]==0){
		printf("down ");
	}
	if(maze[strow-1][stcolumn-1+1]==0){
		printf("right ");
	}
	else{
		printf("Nowhere");
	}
	
	
	
	
	return 0;
}