/*
#include<stdio.h>
int main(){
	
	int matrix[5][5];
	int neww[5][5];
	int a,i;
	int save0,save1;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);	
		}
	}
	
	printf("\nmatrix array\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	
	
	for(int k=0;k<5;k++){
		save0 = matrix[k][0];
		save1 = matrix[k][1];
		for(a=0,i=4;a<3;a++,i--){
			matrix[k][a]=matrix[k][i];
		}
		matrix[k][3]=save1;
		matrix[k][4]=save0;
	}

	
	
	
	printf("\nnew array\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",matrix[i][j]);
		}
		
		printf("\n");
	}	

	
	
	return 0;
}
*/
#include<stdio.h>
int main(){
	
	int matrix[5][5];
	int neww[5][5];
	int a,i;
	int save0,save1;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);	
		}
	}
	
	printf("\nmatrix array\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	
	
	for(int k=0;k<5;k++){
		save0 = matrix[k][0];
		save1 = matrix[k][1];
		for(a=0,i=4;a<3;a++,i--){
			matrix[k][a]=matrix[k][i];
		}
		matrix[k][3]=save1;
		matrix[k][4]=save0;
	}

	
	
	
	printf("\nnew array\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}	

	
	
	return 0;
}