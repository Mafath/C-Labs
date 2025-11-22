#include<stdio.h>
#include<conio.h>

int main() {
	FILE *Fpointer;
	char data[25] = "hello";
	int length = strlen(data);
	int counter;
	
	Fpointer =fopen("code.txt","a");
	
	if(Fpointer == NULL){
		printf("Unable to create the file");
	}
	else{
		for(int counter = 0;counter<length;counter++){
			printf("Writing the character %c\n",data[counter]);//for info
			fputc(data[counter],Fpointer);
		}
		
		printf("Data written to the file successfully");
		fclose(Fpointer);
	}
	
	
	return 0;
}