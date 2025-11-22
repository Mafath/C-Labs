#include<stdio.h>
int main() {
	
	int num,dist;
	char start[100];
	char stop[100];
	
	FILE *fpointer;
	
	fpointer = fopen("hire.txt","w");
	
	if(fpointer == NULL){
		printf("Unable to create file\n");
	}
	
	for(int i=0;i<4;i++){
		printf("Enter hire number: ");
		scanf("%d",&num);
		
		printf("Enter start location: ");
		scanf("%s",&start);
	
		printf("Enter destination: ");
		scanf("%s",&stop);
		
		printf("Enter distance: ");
		scanf("%d",&dist);
		
		fprintf(fpointer,"%d\t%s\t%s\t%d\n",num,start,stop,dist);
	}
	
	
	fclose(fpointer);
	
	return 0;
}