// Employee discount calculator - calculates discount based on employee category (A, B, C, D)
// with different percentage rates, includes input validation and error handling
//#include<stdio.h>
//int main() {
//	
//	char category;
//	float salary, allowance;
//
//	
//	printf("Enter employee category: ");
//	scanf("%c", &category);
//	
//	printf("Enter basic salary: ");
//	scanf("%f", &salary);	
//	
//	
//	if(category == 'A') {
//		allowance = salary * 12 / 100;
//	}
//	
//	else if(category == 'B') {
//		allowance = salary * 6 / 100;
//	}
//	
//	else if(category == 'C') {
//		allowance = salary * 3 / 100;
//	}
//	
//	else if(category == 'D') {
//		allowance = salary * 0 / 100;
//	}
//	
//	printf("Alllowance: %.2f", allowance);
//	
//	return 0;
//}

#include <stdio.h>

int main() {
    char employeeType;
    float basicSalary, discount = 0;

    // Taking inputs from the user
    printf("Enter employee category (A, B, C, or D): ");
    scanf(" %c", &employeeType);

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    // Calculating discount based on employee type using if-else statements
    if (employeeType == 'A') {
        discount = 12 / 100.0 * basicSalary;
    } else if (employeeType == 'B') {
        discount = 6 / 100.0 * basicSalary;
    } else if (employeeType == 'C') {
        discount = 3 / 100.0 * basicSalary;
    } else if (employeeType == 'D') {
        discount = 0;
    } else {
        printf("Invalid employee type!\n");
        return 1; // Exiting program with error code
    }

    // Displaying the calculated discount
    printf("Discount for employee type %c is: %.2f\n", employeeType, discount);

    return 0;
}
