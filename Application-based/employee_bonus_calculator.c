// Employee bonus calculator - calculates bonus based on employee category (A, B, C)
// with different percentage rates, supports both uppercase and lowercase input
#include<stdio.h>
int main() {
	
	char empCategory;
	float salary, bonus;
	
	printf("Enter employee category: ");
	scanf("%c", &empCategory);
	
	printf("Enter basic salary: Rs.");
	scanf("%f", &salary);
	
	if(empCategory =='A' || empCategory =='a') {
		bonus = salary * 5 / 100;
		printf("bonus = %.2f",bonus);
	}
	
	else if(empCategory =='B' || empCategory =='b') {
		bonus = salary * 10 / 100;
		printf("bonus = %.2f",bonus);
	}
	
	else if(empCategory =='C' || empCategory =='c') {
		bonus = salary * 15 / 100;
		printf("bonus = %.2f",bonus);
	}
	
	return 0;
}