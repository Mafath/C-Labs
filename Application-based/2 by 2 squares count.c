#include<stdio.h>
int main() {
	
	int matrix[5][5];
	int count = 0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(matrix[i][j]==1 && matrix[i][j+1]==1 && matrix[i+1][j]==1 && matrix[i+1][j+1]==1){
				count++;
			}
		}
	}	
	
	printf("\n%d",count);
	
	return 0;
}