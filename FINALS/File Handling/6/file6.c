#include<stdio.h>
int main() {
	
	FILE *pf;  //pf is the file pointer
	char data[10];
	char name[10];
	int age;
	
	pf = fopen("anil.txt","r");

	if( pf==NULL) {
		printf("Unable to open the file.\n");
	}
	else{
		
		fscanf(pf,"%s\t%d",data,&age);
		
		printf("%s\t%d", data,age);
		
		
//		printf("Data has written successfully");
		fclose(pf);
	}
	
	
	return 0;
}