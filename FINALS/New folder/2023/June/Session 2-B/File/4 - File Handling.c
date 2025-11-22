#include<stdio.h>
int main() {
	
	FILE *fpointer;
/*	
	fpointer=fopen("sales.txt","w");
	if(fpointer==NULL){
		printf("Unable to create file\n");
	}
*/	
	int num,qty,price;
	char des[15];
/*	
	for(int i=1;i<=4;i++){
		printf("Item no: ");
		scanf("%d",&num);
		printf("Description: ");
		scanf("%s",&des);
		printf("Quantity: ");
		scanf("%d",&qty);
		printf("Price per item: ");
		scanf("%d",&price);
		printf("\n");
		
		fprintf(fpointer,"%d\t%s\t%d\t%d\n",num,des,qty,price);
	}
	
	fclose(fpointer);
*/	
	fpointer=fopen("sales.txt","r");
	if(fpointer==NULL){
		printf("Unable to open file\n");
	}
	
	float amount,total=0;
	
	printf("Item No.\tDescription\tAmount earned\n");
	while(fscanf(fpointer,"%d %s %d %d",&num,&des,&qty,&price)!=EOF){
		amount=qty*price;
		total+=amount;
		
		printf("%d\t\t%s\t\t%.2f\n",num,des,amount);
	}
	printf("\nTotal amount: %.2f",total);
	
	
	fclose(fpointer);
	
	return 0;
}