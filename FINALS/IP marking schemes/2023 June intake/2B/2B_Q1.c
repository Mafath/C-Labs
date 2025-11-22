#include <stdio.h>

int main() {
    int num1, num2, i, sum = 0;

    // Prompt the user to enter the first positive integer
    do {
        printf("Enter the first positive integer: ");
        scanf("%d", &num1);

        if (num1 <= 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (num1 <= 0);

    // Prompt the user to enter the second positive integer
    do {
        printf("Enter the second positive integer: ");
        scanf("%d", &num2);

        if (num2 <= 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (num2 <= 0);

    // Ensure that num1 is the smaller number
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Calculate and print the sum of odd numbers between num1 and num2
    printf("Odd numbers between %d and %d are: ", num1, num2);
    for (i = num1; i <= num2; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum of odd numbers between %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

