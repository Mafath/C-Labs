#include<stdio.h>
int main() {
	
	FILE *fpointer;
/*	
	fpointer=fopen("hire.txt","w");
	if(fpointer==NULL){
		printf("Unable to create file\n");
	}
*/	
	int hireNo,dist;
	char start[15],stop[15];
/*	
	for(int i=1;i<=4;i++){
		printf("Hire No: ");
		scanf("%d",&hireNo);
		printf("Start location: ");
		scanf(" %s",&start);
		printf("Stop location: ");
		scanf(" %s",&stop);
		printf("Distance: ");
		scanf("%d",&dist);
		printf("\n");
		
		fprintf(fpointer,"%d\t%s\t%s\t%d\n",hireNo,start,stop,dist);
	}
	
	fclose(fpointer);
*/	
	
	fpointer=fopen("hire.txt","r");
	if(fpointer==NULL){
		printf("Unable to open file\n");
	}
	
	float bill,sum;
	
	printf("Hire No.\tAmount earned\n");
	while(fscanf(fpointer,"%d %s %s %d",&hireNo,&start,&stop,&dist)!=EOF){
		bill=(float)dist*150;
		sum+=bill;
		
		printf("%3d\t\t%.2f\n",hireNo,bill);
	}
	printf("\nTotal amount:\t%.2f",sum);
	
	fclose(fpointer);
	
	return 0;
}