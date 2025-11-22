#include<stdio.h>
int main() {
	
	int id,num;
	float total,price1,price2,price3,bill,payment,discount;
	char cake,fire,photo;
	

	while(id!=-88){
		printf("Enter the package ID: ");
		scanf("%d",&id);
		
		if(id==-88){
			break;
		}
		
		if(id<1 || id>4){
			printf("Invalid package type\n");
			continue;
		}
		
		printf("Input the number of guests: ");
		scanf("%d",&num);
		
		if(id==1){
			total = 500*num;
		}
		if(id==2){
			if(num<=20){
				total=600*num;
			}
			else if(num>20){
				total=640*num;
			}
		}
		if(id==3){
			
			printf("Do you want a birthday cake?(Y/N): ");
			scanf(" %c",&cake);
			if(cake=='Y'|| cake=='y'){
				price1=3000;
			}
			else{
				price2=0;
			}
			
			printf("Do you want fire works?(Y/N): ");
			scanf(" %c",&fire);			
			if(fire=='Y'|| fire=='y'){
				price1=2500;
			}
			else{
				price2=0;
			}
			
			total=(num*800)+price1+price2;
		}
		if(id==4){
			printf("Do you want a photograph for each guest?(Y/N): ");
			scanf(" %c",&photo);
			
			if(photo=='Y' || photo=='y'){
				price3=num*1000;
			}
			
			bill=num*2000;
			payment=bill+price3;
			discount=payment*0.15;
			total=payment-discount;
		}
		
		printf("\nYou have selected package ID:%d",id);
		printf("\nYour total bill = %.2f\n\n",total);		
	}
	
	printf("hi");
	return 0;
}

/*
#include<stdio.h>
int main() {
	
	int id,num;
	float total,price1,price2,price3,bill,payment,discount;
	char cake,fire,photo;
	
	printf("Enter the package ID: ");
	scanf("%d",&id);	
	
	do{	
		if(id==-88){
			break;
		}
		
		if(id<1 || id>4){
			printf("Invalid package type\n");
			break;
		}
		
		printf("Input the number of guests: ");
		scanf("%d",&num);
		
		if(id==1){
			total = 500*num;
		}
		if(id==2){
			if(num<=20){
				total=600*num;
			}
			else if(num>20){
				total=640*num;
			}
		}
		if(id==3){
			
			printf("Do you want a birthday cake?(Y/N): ");
			scanf(" %c",&cake);
			if(cake=='Y'|| cake=='y'){
				price1=3000;
			}
			else{
				price2=0;
			}
			
			printf("Do you want fire works?(Y/N): ");
			scanf(" %c",&fire);			
			if(fire=='Y'|| fire=='y'){
				price1=2500;
			}
			else{
				price2=0;
			}
			
			total=(num*800)+price1+price2;
		}
		if(id==4){
			printf("Do you want a photograph for each guest?(Y/N): ");
			scanf(" %c",&photo);
			
			if(photo=='Y' || photo=='y'){
				price3=num*1000;
			}
			
			bill=num*2000;
			payment=bill+price3;
			discount=payment*0.15;
			total=payment-discount;
		}
		
		printf("\nYou have selected package ID:%d",id);
		printf("\nYour total bill = %.2f\n\n",total);
		
		printf("Enter the package ID: ");
		scanf("%d",&id);
			
	}while(id!=-88);
	
	return 0;
}


*/
