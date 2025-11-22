//2D arrays without using an additional array(method 2k)
#include<stdio.h>
int main(){

	int matrix[5][5];
	
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
	printf("\n\n");
	
	
	for(int i=0;i<5;i++){
		for(int j=4;j>=0;j--){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",matrix[i][4-j]);
		}
		printf("\n");
	}
	
	return 0;
}