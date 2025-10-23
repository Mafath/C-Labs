// Multiplication table generator - generates multiplication table for a given number
// up to a specified range, displays formatted multiplication results
#include<stdio.h>
int main() {
	
	int number,range,times;
	int i;
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
	printf("Enter the range: ");
	scanf("%d", &range);
	
	for(i=1; i<=range; i++) {
		times = number * i;
		printf("%d x %d = %d\n", number,i,times);
	}
	
	return 0;
}