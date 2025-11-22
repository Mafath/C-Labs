#include<stdio.h>
int main() {
	
	FILE *fpointer;
/*	
	fpointer=fopen("item.txt","w");
	if(fpointer==NULL){
		printf("Unable to create file\n");
		return 1;
	}
*/	
	int itemNo,qty,price;
/*	
	for(int i=1;i<=4;i++){
		printf("Item no: ");
		scanf("%d",&itemNo);
		printf("Quantity sold: ");
		scanf("%d",&qty);
		printf("Price of one item: ");	
		scanf("%d",&price);
		
		fprintf(fpointer,"%d\t%d\t%d\n",itemNo,qty,price);
	}
	
	fclose(fpointer);
*/	
	
	fpointer=fopen("item.txt","r");
	if(fpointer==NULL){
		printf("Unable to open file\n");
		return 1;
	}
	
	float bill;
	
	printf("\nItem No.\tTotal Amount\n");
	while(fscanf(fpointer,"%d %d %d",&itemNo,&qty,&price)!=EOF){
		bill=qty*price;
		if(qty>3){
			bill-=bill*0.05;
		}
		
		printf("%d\t\t%.2f\n",itemNo,bill);
	}
	
	fclose(fpointer);
	
	return 0;
}