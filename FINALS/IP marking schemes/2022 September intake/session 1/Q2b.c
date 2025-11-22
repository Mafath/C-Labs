#include<stdio.h>

int main(){
	
	int identityArr[4][4];
	int identity_or_not_identity = 1;
	int i, j;
	
	
	
	for(i = 0; i < 4; i++){
		printf("\nEnter for row %d\n", i+1);
		
		for(j = 0; j < 4; j++){
			printf("\tEnter element %d : ", j+1);
			scanf("%d", &identityArr[i][j]);
		}
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(i == j && identityArr[i][j] != 1){
				identity_or_not_identity = 0;
			}
			else if(i != j && identityArr[i][j] != 0){
				identity_or_not_identity = 0;
			}
		}
	}
	
	printf("The matrix is %s an identity matrix\n", identity_or_not_identity ? "" : "not");
	
	
	return 0;
}
