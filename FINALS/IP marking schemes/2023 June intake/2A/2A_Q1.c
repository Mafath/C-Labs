#include <stdio.h>

int main(void) {
    int num1, num2, i, sum = 0;

    while (num1 <= 0)
	{
	printf("Enter the first positive integer: ");
    scanf("%d", &num1);

    if (num1 <= 0) {
        printf("Please enter a positive integer for the first number.\n");
       
    }
	}
	
	while (num2 <= 0)
	{
	
    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    if (num2 <= 0) {
        printf("Please enter a positive integer for the second number.\n");
    
    }
	}
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (i = num1; i <= num2; i++) {
        if (i % 4 == 0) {
        	printf("%d ",i);
            sum += i;
        }
    }

    printf("\nThe sum of all integers between %d and %d that are divisible by 4 is: %d\n", num1, num2, sum);

    return 0;
}

