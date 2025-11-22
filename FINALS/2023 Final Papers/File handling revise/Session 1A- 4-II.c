#include<stdio.h>

int main(){
	
	int order,num,price;
	float total=0,discount=0,finalAmnt=0;

	FILE *fpointer;
	
	fpointer = fopen("pizza.txt","r");
	
	if(fpointer ==NULL){
		printf("Unable to open file");
	}

	printf("Order No.\tTotal Amount\n");
	while(fscanf(fpointer,"%d %d %d",&order,&num,&price)!=EOF){
		total = num * price;
		if(total>10000){
			discount=total*0.1;
			finalAmnt=total-discount;
		}
		else{
			finalAmnt=total;			
		}
		printf("%d\t\t%.2f\n",order,finalAmnt);
	}
	
	fclose(fpointer);
	
	
	return 0;
}