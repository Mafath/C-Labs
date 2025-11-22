#include<stdio.h>

int main() {
	
	int num,dist;
	char start[100];
	char stop[100];
	float total=0,price;
	
	FILE *fpointer;
	
	fpointer =fopen("hire.txt","r");
	
	if(fpointer == NULL){
		printf("Unable to open the file\n");
	}
	
	printf("Hire No.\tAmount earned\n");
	while(fscanf(fpointer,"%d %s %s %d", &num,&start,&stop,&dist)!=EOF){
//	while(!feof(fpointer)){
//		fscanf(fpointer,"%d %s %s %d", &num,&start,&stop,&dist);
		price = dist * 150;
		total+=price;
		printf("%d\t\t%.2f\n",num,price);
	}
//	}
	printf("Total amount:\t%.2f", total);
	fclose(fpointer);
	
	return 0;
}