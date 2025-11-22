#include<stdio.h>
int main() {
	
	
	FILE *fpointer;
	
	fpointer=fopen("pizza.txt","r");
	if(fpointer==NULL){
		printf("Unable to open file\n");
	}
	
	int orderNum,pizzaNum,price;
	float total=0;
	
	printf("Order No.\tTotal Amount\n");

	while(fscanf(fpointer,"%d %d %d",&orderNum,&pizzaNum,&price)!=EOF){
		total=pizzaNum*price;
		if(total>10000){
			total-=total*0.1;
		}
		
		printf("%d%20.2f\n",orderNum,total);
	}

	fclose(fpointer);

	
	
	
	return 0;
}