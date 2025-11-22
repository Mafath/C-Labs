#include<stdio.h>
int main(){
	
	int id,qty;
	char type,size;
	
	FILE *fpointer;
	
	fpointer = fopen("orders.dat","w");
	
	if(fpointer==NULL){
		printf("Unable to create file");
	}
	

	do{
		printf("Enter transaction ID: ");
		scanf("%d",&id);
		if(id==-1)
		break;
		
		printf("Enter pizza type(V/C/S): ");
		scanf(" %c",&type);
		
		printf("Enter pizza size(R/L): ");
		scanf(" %c",&size);
		
		printf("Enter quantity: ");
		scanf("%d",&qty);
		
		fprintf(fpointer,"%d\t%c\t%c\t%d\n",id,type,size,qty);
	}while(id!=-1);
	
	
	fclose(fpointer);
	
	return 0;
}