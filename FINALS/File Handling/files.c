#include<stdio.h>
#include<conio.h>

int main() {
	FILE *Fpointer;
	
	Fpointer =fopen("code.txt","w");
	
	if(Fpointer == NULL){
		printf("Unable to create the file");
	}
	else{
		printf("File opened successfully");
		fclose(Fpointer);
	}
	
	
	return 0;
}