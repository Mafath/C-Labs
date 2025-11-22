#include<stdio.h>
int main(){
	
	int accountDetails[3][4];
	
	
	for(int i=0;i<4;i++){
		printf("Input the acount details of customer %d\n",i+1);
		for(int j=0;j<3;j++){
			
			printf("Input the balance: ");
			scanf("%f",&accountDetails[i][j]);
			printf("Input the overdraft limit: ");
			scanf("%f",&accountDetails[i][j]);
			printf("Input the withdrawal limit: ");
			scanf("%f",&accountDetails[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%.2f\t",accountDetails[i][j]);
		}
		printf("\n");
	}

		


	

	
	return 0;
}