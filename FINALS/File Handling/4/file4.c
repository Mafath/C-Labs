#include<stdio.h>
int main() {
	
	FILE *pf;  //pf is the file pointer
	char name[25];
	int age;
	printf("Enter your name and age\n");
	scanf("%s%d",name,&age);
	
	pf = fopen("anil.txt","w");

	if( pf==NULL) {
		printf("Unable to open the file.\n");
	}
	else{
		fprintf(pf,"%s\t%d\n",name,age);
		printf("Data has written successfully");
		fclose(pf);
	}
	
	
	return 0;
}