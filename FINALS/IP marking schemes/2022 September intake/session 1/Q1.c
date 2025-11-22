#include<stdio.h>

int main(){
	
	int i, j, nlines;
	char opt1, opt2;
	
	printf("Enter 1st character : ");
	scanf(" %c", &opt1);
	
	printf("Enter 2nd character : ");
	scanf(" %c", &opt2);
	
	printf("Enter number of lines : ");
	scanf("%d", &nlines);
	
	for(i=1; i<=nlines; i++){
		for(j=1; j<=i; j++){
			
			if(j % 2 == 0){
			printf("%c", opt2);
		    }
		    else{
		    	printf("%c", opt1);
			}
		}
		printf("\n");
	}
	
	return 0;
}
