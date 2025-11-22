#include<stdio.h>
int main() {
	
	FILE *pf;  //pf is the file pointer
	char input[25];
	
	pf = fopen("anil.txt","w");
	/*fopen is gonna return the address of the structure of the type file
	and we need to store it in the pointer pf. that's why we are writing pf.
	Here anil.txt is the name of the file
	*/
	/*
	Now if this fopen can open that anil.txt file then it's gonna return the
	address of the structure which is stored in this pf pointer.Is this fopen
	fails, then it's gonna return a null value.So let's check that whether this
	file opened successfully or not by using a if statement.
	*/
	
	if( pf==NULL) {
		printf("Unable to open the file.\n");
	}
	else{
		printf("Enter a string to write to the file\n");
		gets(input);
//		scanf("%s", &input);
		fputs(input, pf);
		printf("Data has written successfully\n");
		fclose(pf);
	}
	
	
	return 0;
}