#include<stdio.h>
int main() {
	
	
	FILE *fpointer;
	
	fpointer=fopen("pizza.txt","w");
	if(fpointer==NULL){
		printf("Unable to create file\n");
	}
	
	int orderNum,pizzaNum,price;
	
	for(int i=1;i<=4;i++){
		
		printf("Order no: ");
		scanf("%d",&orderNum);
		printf("No of pizzas: ");
		scanf("%d",&pizzaNum);
		printf("Price for a pizza: ");
		scanf("%d",&price);
		
		fprintf(fpointer,"%d\t%d\t%d\n",orderNum,pizzaNum,price);
	}
	fclose(fpointer);

	
	
	
	return 0;
}