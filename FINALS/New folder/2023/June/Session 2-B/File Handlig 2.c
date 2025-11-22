#include<stdio.h>
int main() {
	
	FILE *fpointer;
	
	fpointer=fopen("sales.txt","r");
	if(fpointer==NULL){
		printf("Unable to create file\n");
		return -1;
	}
	
	int num,qty,price;
	char des[10];
	float bill,sum=0;
	
	printf("Item No.\tDescription\tAmount earned\n");
	while(fscanf(fpointer,"%d %s %d %d",&num,&des,&qty,&price)==4){
		bill=qty*price;
		sum+=bill;
		
		printf("%d\t\t%s\t\t%.2f\n",num,des,bill);
	}
	printf("\nTotal amount: %.2f",sum);
	
	
	fclose(fpointer);
	
	
	return 0;
}