#include <stdio.h>
#include <assert.h>
#include <math.h>
float calcPayment(int peak, int OffPeak);
float calcServiceCharge(int peak, int OffPeak);
void testCalcPayment();
int main()
{
	int unitP, unitO, i;
	float billPayment;
	
	testCalcPayment(); //call test function
	
	for(i = 1; i <= 4; i++) //take details of four customers
	{
		printf("Enter no. of units used in peak hours : ");
		scanf("%d", &unitP);
	
		printf("Enter no. of units used in off peak hours : ");
		scanf("%d", &unitO);
	
		//calculate bill payment
		billPayment = calcPayment(unitP, unitO) + calcServiceCharge(unitP, unitO);
		
		printf("Bill payment of customer %d :  %.2f\n\n", i, billPayment);
	}
	
    return 0;
}

float calcPayment(int peak, int OffPeak)
{
	float charge, payment;
	
	if(peak >= 0 && peak <= 90)
		charge = 55;
	else if(peak <= 180)
		charge = 60;
	else if(peak > 180)
		charge = 100;
		
	payment = peak * charge;
	
	if(OffPeak >= 0 && OffPeak <= 90)
		charge = 42;
	else if(OffPeak <= 180)
		charge = 50;
	else if(OffPeak > 180)
		charge = 75;
		
	payment = payment + OffPeak * charge;	
	
	return payment;
}

float calcServiceCharge(int peak, int OffPeak)
{	
	int totalUnit = peak + OffPeak;
	
	if(totalUnit >= 0 && totalUnit <= 100)
		return 550;
	else if(totalUnit <= 200)
		return 650;
	else if(totalUnit > 200)
		return 1200;		
}

void testCalcPayment()
{
	
	assert(calcPayment(10, 10) - 970.00 < 0.01);
	assert(calcPayment(100, 100) - 11000.00 < 0.01);
	
	printf("success\n");
	
//	assert(calcPayment(10, 10)==970);
	
		
}
