#include<stdio.h>

int main(){
	
	FILE * Fpointer;
	int orderNumber,numPizzas,pizzaPrice;
	
	Fpointer = fopen("pizza.txt","w");
	
	if(Fpointer == NULL) {
		printf("Unable to create the file\n");
	}
	else{
		for(int i=1;i<=4;i++){
			printf("User %d\n",i);
			
			printf("Enter Order Number: ");
			scanf("%d", &orderNumber);
			
			printf("Enter Number of pizzas: ");
			scanf("%d", &numPizzas);
			
			printf("Enter price of one pizza: ");
			scanf("%d", &pizzaPrice);
			
			fprintf(Fpointer,"%d\t%d\t%d\n",orderNumber,numPizzas,pizzaPrice);
		}
		
		fclose(Fpointer);
	}
	
	
	return 0;
}
