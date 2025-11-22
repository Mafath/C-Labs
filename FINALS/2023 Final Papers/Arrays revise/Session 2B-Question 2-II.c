#include<stdio.h>
int main(){
	
	int myArr[4][4];
	
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d",&myArr[i][j]);
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",myArr[i][j]);
		}
		printf("\n");
	}	
	
	
	
	return 0;
}