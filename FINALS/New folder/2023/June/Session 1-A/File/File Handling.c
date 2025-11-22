#include<stdio.h>
int main() {
	
	FILE *fpointer;
/*	
	fpointer=fopen("Pizza.txt","w");
	if(fpointer==NULL){
		printf("Unable to create file\n");
	}
*/	
	int orderNum,pizzaNum,price;
/*	
	for(int i=1;i<=4;i++){
		printf("Order no: ");
		scanf("%d",&orderNum);
		printf("No of pizzas: ");
		scanf("%d",&pizzaNum);
		printf("Price per pizza: ");
		scanf("%d",&price);
		
		fprintf(fpointer,"%d\t%d\t%d\n",orderNum,pizzaNum,price);
	}

	fclose(fpointer);
*/	
	
	fpointer=fopen("Pizza.txt","r");
	if(fpointer==NULL){
		printf("Unable to open file\n");
	}
	
	float bill;
	
	printf("Order No.\tTotal Amount\n");
	while(fscanf(fpointer,"%d %d %d",&orderNum,&pizzaNum,&price)!=EOF){
		bill=pizzaNum*price;
		if(bill>10000){
			bill-=bill*0.1;
		}
		
		printf("%d\t\t%.2f\n",orderNum,bill);
	}
	fclose(fpointer);
	
	return 0;
}