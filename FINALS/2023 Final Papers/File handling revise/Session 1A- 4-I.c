#include<stdio.h>
int main() {
	
	int order,num,price;
	
	FILE *fpointer;
	
	fpointer = fopen("pizza.txt","w");
	
	if(fpointer==NULL){
		printf("Unable to create file");
	}
	
	for(int i=0;i<4;i++){
	
	printf("User %d\n",i+1);
	
	printf("Enter order number: ");
	scanf("%d", &order);

	printf("Enter number of pizzas: ");
	scanf("%d", &num);

	printf("Enter price per pizza: ");
	scanf("%d", &price);
	
	fprintf(fpointer,"%d\t%d\t%d\n", order,num,price);
	}
	

	fclose(fpointer);
	
	
	return 0;
}