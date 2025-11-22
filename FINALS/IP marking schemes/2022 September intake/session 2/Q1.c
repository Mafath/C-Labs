//header file
#include <stdio.h>

//main method
int main () {
	int num, digit_1, digit_2, digit_3, digit_4;
	
	printf("Enter a four digit number");
	scanf("%d",&num);
	
	while (num < 1000 || num >9999){
	
	printf("Invalid number\n");
	
		
	printf("Enter a four digit number");
	scanf("%d", &num);
	}
	
	digit_1 = num / 1000;
	digit_2 = (num / 100) % 10;
	digit_3 = (num / 10) % 10;
	digit_4 = num % 10;
	
	if((digit_1 == digit_4) && (digit_2 == digit_3)){
		printf("It is a palindrome");
		
	}else{
		printf("It is not a palindrome");
	}
	
return 0;
}//end of main function
