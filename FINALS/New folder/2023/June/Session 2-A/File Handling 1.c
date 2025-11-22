#include<stdio.h>
int main() {
	
	FILE *fpointer;
	
	fpointer=fopen("hire.txt","w");
	if(fpointer==NULL){
		printf("Unable to create file\n");
		return -1;
	}
	
	int hireNo,dist;
	int start[20],stop[20];
	
	for(int i=1;i<=4;i++){
		printf("Hire No: ");
		scanf("%d",&hireNo);
		printf("Start: ");
		scanf("%s",&start);
		printf("Destination: ");
		scanf("%s",&stop);
		printf("Distance: ");
		scanf("%d",&dist);
		
		fprintf(fpointer,"%d\t%s\t%s\t%d\n",hireNo,start,stop,dist);
	}
	
	fclose(fpointer);	
	
	
	return 0;
}