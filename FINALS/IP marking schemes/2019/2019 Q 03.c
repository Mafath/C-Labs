#include<stdio.h>
#include<assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount(); 




int main (void)
{
	float amount , tot;
	float rate , calRate;
	int i;
	testTotalAmount();
	
	printf("Enter Initial Amount to be invested : ");
	scanf("%f" , &amount);
	
	printf("Enter Annual interest Rate(in percentage) : ");
	scanf("%f" , &rate);
	
	printf("\n");
	for(i=0 ; i<5 ; i++)
	{
		calRate = calcAnnualInterest(rate, amount);
		tot = findTotalAmount(calRate, amount);
		
		printf("Amount after year %d : %.2f\n" , i+1 , tot);
		amount = tot ;
	}
	
	return 0;
}

float calcAnnualInterest(float interestRate, float amount)
{
	float calRate;
	if(amount> 100000000.0f)
	calRate = (amount * (interestRate +0.5f)) / 100.0f;
	else
	calRate = (amount * interestRate) / 100.0f;
	
	return calRate;
}

float findTotalAmount(float interestRate, float amount)
{
	float tot;
	
	tot = interestRate + amount;
	
	return tot;
}

void testTotalAmount(){
	
	assert(findTotalAmount(1000.0, 10000.0f)==11000.0f);
	assert(findTotalAmount(2000.0f, 15000.0f)==17000.0f);
	printf("Test Completed\n");
}
