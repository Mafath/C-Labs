// Multiplication table generator with input validation - generates 10x table
// for a given number, validates positive input, handles invalid numbers
#include<stdio.h>

int main() {
	
	int number,i,result;
	
	printf("Enter Number:");
	scanf("%d", &number);
	
	while(number<0) {
		
		printf("Invalid Number.\n");
		
		printf("Enter Number:");
		scanf("%d", &number);
	}
	
	for(i=1;i<=10;i++) {
		result = number * i;
		printf("%d x %d = %d\n", number,i,result);
	}
	
	return 0;
}