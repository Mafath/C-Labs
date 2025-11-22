#include<stdio.h>
int main() {
	
	int cata,days;
	float basalary,dailyPay,bonus;
	char cont;
	
	do{
		
		printf("Enter employee category: ");
		scanf("%d",&cata);
		
		printf("Enter basic salary: ");
		scanf("%f", &basalary);
		
		printf("Enter number of working days: ");
		scanf("%d",&days);
		
		printf("Enter daily payment: ");
		scanf("%f", &dailyPay);
		
		if(cata==1){
			bonus = basalary * 2;
		}
		else if(cata==2){
			if(days>240){
				bonus = dailyPay*20;			
			}
			else{
				bonus = 0;
			}
		}
		else if(cata==3){
			bonus = 50000;
		}
		
		printf("\nBonus amount: %.2f\n",bonus);
		
		printf("\nDo you want to continue?(Y/N) ");
		scanf(" %c",&cont);
		
	}while(cont=='Y' || cont=='y');
	
	
	return 0;
}