#include <stdio.h>
#include <assert.h>
#include <math.h>
float calcPayment(float medicalCharge, int type, int days);
float calcDiscount(char seniorCitizen, char loyaltyMember);
void testCalcPayment();
int main()
{
	int type, days, i;
	float charge, payment, discount, netPayment;
	char senior, loyalty;
	
	testCalcPayment(); //call test function
	
	for(i = 1; i <= 5; i++) //take details of five customers
	{
		printf("Enter medical charge, the accommodation type and no. of days stayed : ");
		scanf("%f %d %d", &charge, &type, &days);
	
		printf("Is inpatient a senior citizen : ");
		scanf(" %c", &senior);
		
		printf("Is inpatient a loyalty member : ");
		scanf(" %c", &loyalty);
		
		//calculate net payment
		payment = calcPayment(charge, type, days);
		discount = payment * calcDiscount(senior, loyalty) / 100;
		netPayment = payment - discount;
		
		printf("Net payment of inpatient %d :  %.2f\n\n", i, netPayment);
	}
	
	
    return 0;
}

float calcPayment(float medicalCharge, int type, int days)
{
	float charge, payment;
	
	if(type == 1)
		charge = 17000;
	else if(type == 2)
		charge = 25000;
	else if(type == 3)
		charge = 32000;
	
	payment = medicalCharge + charge * days;
	
	return payment;
}

float calcDiscount(char seniorCitizen, char loyaltyMember) 
{	
	float discount = 0;
	
	if(seniorCitizen == 'Y')
		discount = 5;
		
	if(loyaltyMember == 'Y')
		discount = discount + 10;
	
	return discount;			
}

void testCalcPayment()
{
	assert(fabs(calcPayment(5000, 1, 1) - 22000.00) < 0.01);
	assert(fabs(calcPayment(2000, 2, 2) - 52000.00) < 0.01);
	
}
