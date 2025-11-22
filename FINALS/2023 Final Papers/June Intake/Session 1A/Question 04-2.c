#include<stdio.h>
int main(){
	
	FILE * fpt;
	int numOrder, numPizza, onePrice;
    float totalPrice=0, discountAmount=0, totalPaid;
	
	fpt = fopen("pizza.txt", "r");
	
	if(fpt ==NULL){
		printf("Unable to open the file\n");
	}
	else{
		printf("Order No.\tTotal Amount\n");
		while(fscanf(fpt,"%d%d%d", &numOrder, &numPizza, &onePrice)!=EOF){
			totalPrice = numPizza * onePrice;
			if(totalPrice>10000){
				discountAmount = totalPrice * 0.10;
				totalPaid = totalPrice - discountAmount;
			}
			else{
				totalPaid = totalPrice;
			}
			printf("%d\t\t%.2f\n",  numOrder, totalPaid);
		}
		
		fclose(fpt);
	}	
	return 0;
}