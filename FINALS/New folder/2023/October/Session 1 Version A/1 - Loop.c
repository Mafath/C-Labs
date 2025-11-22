#include<stdio.h>
int main() {
	
	int category,days,by;
	float salary,payment,bonus;
	char condition;
	int count=1;
	do{
		printf("Employee %d\n",count);
		
		printf("Enter employee category: ");
		scanf("%d",&category);
		
		printf("Basic salary: ");
		scanf("%f",&salary);
		
		printf("working days: ");
		scanf("%d",&days);
		
		printf("Daily payment: ");
		scanf("%f",&payment);
		
		if(category==1){
			printf("Enter a number between 1-3: ");
			scanf("%d",&by);
			
			bonus=salary*by;
		}
		
		else if(category==2){
			if(days>240){
				bonus=payment*20;
			}
			else{
				bonus=0;
			}
		}
		
		else if(category==3){
			bonus=50000;
		}
		
		printf("\nBonus amount is Rs.%.2f\n",bonus);

		printf("Do you want to continue? ");
		scanf(" %c",&condition);
		printf("\n");
		
		bonus=0;
		count++;		
	}while(condition=='Y' || condition=='y');

	
	
	return 0;
}