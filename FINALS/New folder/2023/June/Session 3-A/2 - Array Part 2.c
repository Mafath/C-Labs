#include<stdio.h>
int main() {
	
	float accountDetails[4][3];
	float balance,overDraft,withdraw;
	
	for(int i=0;i<4;i++){
		while(1){
			printf("Customer %d\n",i+1);
			
			printf("\tBalance: ");
			scanf("%f",&balance);
				
			printf("\tOverdraft limit: ");
			scanf("%f",&overDraft);
			
			printf("\tWithdrawal limit: ");
			scanf("%f",&withdraw);
			
			if(balance < -overDraft){
				printf("Bank balance can't be less than -%.2f\n",overDraft);
				printf("\n");
			}
			else{
				accountDetails[i][0]=balance;
				accountDetails[i][1]=overDraft;
				accountDetails[i][2]=withdraw;
				
				printf("\n");
				break;
			}		
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;i++){
			printf("%.2f  ",accountDetails[i][j]);
		}
		printf("\n");
	}

	
	
	return 0;
}