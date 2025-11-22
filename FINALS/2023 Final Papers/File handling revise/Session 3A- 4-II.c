#include<stdio.h>
#include<string.h>
int main() {

	char day[25];
	char date[30];
	int range,max=0;
	FILE *fpointer;
	
	fpointer = fopen("rain.txt","r");
	
	if(fpointer ==NULL){
		printf("Unable to open the file");
	}
	
	while(fscanf(fpointer,"%s %d", &day,&range)!=EOF){
		
		if(range>max){
			max=range;
			strcpy(date,day);
		}
	}
	
	printf("%s\t%d mm", date,max);
	
	
	fclose(fpointer);	
	return 0;
}