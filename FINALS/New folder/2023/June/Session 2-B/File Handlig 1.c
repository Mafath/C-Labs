#include<stdio.h>
int main() {
	
	FILE *fpointer;
	
	fpointer=fopen("sales.txt","w");
	if(fpointer==NULL){
		printf("Unable to create file\n");
		return -1;
	}
	
	int num,qty,price;
	char des[10];
	
	for(int i=1;i<=4;i++){
		printf("Item no: ");
		scanf("%d",&num);
		printf("Description: ");
		scanf("%s",&des);
		printf("Items sold: ");
		scanf("%d",&qty);
		printf("Price per item: ");
		scanf("%d",&price);
	
		fprintf(fpointer,"%d\t%s\t%d\t%d\n",num,des,qty,price);		
	}
	
	
	fclose(fpointer);
	
	
	return 0;
}