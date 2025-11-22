#include<stdio.h>
int main() {
	
	char day[25];
	int range;
	FILE *fpointer;
	
	fpointer = fopen("rain.txt","w");
	
	if(fpointer==NULL){
		printf("Unable to create file\n");
	}
	
	for(int i=0;i<7;i++){
		printf("Enter the day: ");
		scanf("%s",&day);
		
		printf("Enter the rainfall(in mm): ");
		scanf("%d",&range);
		
		fprintf(fpointer,"%s\t\t%d", day,range);
		if(i!=6){
			fprintf(fpointer,"\n");
		}	
	}
	
	fclose(fpointer);
	
	return 0;
}