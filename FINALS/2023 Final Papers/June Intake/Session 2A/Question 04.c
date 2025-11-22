#include<stdio.h>
int main() {
	
	FILE * fpointer;
	int hireNum,dist;
	char start[100];
	char stop[100];
	
	fpointer = fopen("hire.txt","w");
	
	if(fpointer == NULL) {
		printf("Unable to create file\n");
	}
	
	for(int i=1;i<=4;i++){
		printf("Enter hire number: ");
		scanf("%d", &hireNum);
		
		printf("Enter start location: ");
		scanf("%s", start);
		
		printf("Enter destination: ");
		scanf("%s", stop);
		
		printf("Enter distance: ");
		scanf("%d", &dist);
		
		fprintf(fpointer,"%d\t%s\t%s\t%d\n",hireNum,start,stop,dist);
	}
	
	fclose(fpointer);
	
	
	return 0;
}