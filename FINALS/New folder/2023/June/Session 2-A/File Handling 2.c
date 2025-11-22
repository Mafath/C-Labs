#include<stdio.h>
int main() {
	
	FILE *fpointer;
	
	fpointer=fopen("hire.txt","r");
	if(fpointer==NULL){
		printf("Unable to open file\n");
		return -1;
	}
	
	int hireNo,dist;
	int start[20],stop[20];
	float bill,total=0;
	
	printf("Hire No.\tAmount earned\n");
	while(fscanf(fpointer,"%d %s %s %d",&hireNo,&start,&stop,&dist)!=EOF){
		
		bill=dist*150;
		total+=bill;
		printf("%d\t\t%.2f\n",hireNo,bill);
	}
	printf("Total amount:\t%.2f",total);
	
	fclose(fpointer);	
	
	
	return 0;
}