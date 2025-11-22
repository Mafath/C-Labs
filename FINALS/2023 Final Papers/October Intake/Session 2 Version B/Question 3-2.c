#include<stdio.h>
int main() {
	
	int matrixS[4][4];
	int count=0;
	
	for(int i=0;i<4;i++){
		printf("Values for row %d\n", i+1);
		for(int j=0;j<4;j++){
			printf("\tEnter element %d: ", j+1);
			scanf("%d",&matrixS[i][j]);
		}
	}
	
	printf("\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ", matrixS[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(matrixS[i][j]==matrixS[j][i]){
				count++;
			}
		}
	}
	
	if(count==16){
		printf("\nAbove matrix is a symmetric matrix");
	}
	else{
		printf("\nAbove matrix is not a symmetric marix");
	}
	
	return 0;
}