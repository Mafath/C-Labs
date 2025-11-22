#include<stdio.h>
int main() {
	
	int matrix[5][5];
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nOriginal array\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMirrored array\n");
	for(int i=0;i<5;i++){
		for(int j=4;j>=0;j--){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}