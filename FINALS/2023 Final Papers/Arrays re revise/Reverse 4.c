//2D arrays without using an additional array
#include<stdio.h>
int main(){

	int matrix[5][5];
	int news[5][5],temp;  //with using an additional array
	
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

	//with using an additional array

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			temp=matrix[i][j];
			news[i][j]=matrix[i][5-1-j];
			news[i][5-1-j]=temp;
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",news[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}