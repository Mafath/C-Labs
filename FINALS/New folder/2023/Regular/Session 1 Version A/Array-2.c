#include<stdio.h>
int main() {
	
	int A[2][3];
	int B[3][3];
	int C[2][3]={0};
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("Enter [%d][%d]: ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n");

	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Enter [%d][%d]: ",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	printf("\n");
	
	
    // Matrix multiplication
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}