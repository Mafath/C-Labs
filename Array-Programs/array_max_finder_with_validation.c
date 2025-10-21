// Smart array max finder with input validation - only accepts numbers between 10-100,
// keeps track of the maximum value entered, and handles invalid inputs gracefully
#include<stdio.h>
int main() {
	
	int array[5];
	int i,number;
	int max = 0;
	
	for(i=0; i<5; i++) {
		printf("Enter number %d: ",i+1);
		scanf("%d", &number);
		if(number>=10 && number<=100){
			array[i]= number;
			if(max<number){
				max=number;
			}
		}
		else{
			printf("Invalid input");
			i--;
		}
	}
	
	printf("%d", max);
	
	return 0;
}