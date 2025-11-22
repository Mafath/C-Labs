#include<stdio.h>
#include<assert.h>

float calcPayment(float medicalcharge, int type, int days);
float calcDiscount(char seniorcitizen, char loyaltyMember);
void testcalcpayment();


int main(){
	
	float mediCharge,payment,discount,totalDiscount,netPayment;
	int accType, days;
	char senior,loyalty;
	
	printf("Enter medical charge: ");
	scanf("%f",&mediCharge);
	
	printf("Enter accommodation type: ");
	scanf("%d",&accType);
	
	printf("Enter number of days: ");
	scanf("%d",&days);
	
	payment = calcPayment(mediCharge,accType,days);
	printf("\nPayment = %.2f\n",payment);
//	
	printf("Is patient a senior citizen?(Y/N) ");
	scanf(" %c",&senior);

	printf("Is patient a loyalty citizen?(Y/N) ");
	scanf(" %c",&loyalty);
	
	discount = calcDiscount(senior,loyalty);
	totalDiscount = payment * discount;
	printf("\nDiscount = %.2f\n",totalDiscount);

	
	
	netPayment = payment - totalDiscount;
	printf("\nNet hospital bill = %.2f\n",netPayment);
	
	testcalcpayment();
	
	return 0;
}
//function 1
float calcPayment(float medicalcharge, int type, int days){
	
	float accomodation,payment;
	
	if(type==1){
		accomodation = days * 17000;
	}
	else if(type==2){
		accomodation = days * 25000;
	}
	else if(type==3){
		accomodation = days * 32000;
	}
	
	payment = medicalcharge + accomodation;
	return(payment);	
}
//function 2
float calcDiscount(char seniorcitizen, char loyaltyMember){
	
	float discount;
	
	if(seniorcitizen=='Y' || seniorcitizen=='y'){
		discount = (float)5/100;
	}
	if(loyaltyMember=='Y' || loyaltyMember=='y'){
		discount = (float)10/100;
	}
	
	return(discount);
}
//assert
// Function to test the calcPayment() function
void testcalcpayment() {
    float expectation = 60000; // Expected payment for test case 1
    
    assert(calcPayment(10000, 2, 2) == expectation);
    printf("\nAll test cases passed successfully!\n");
}