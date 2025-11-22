#include<stdio.h>
#include<assert.h>

float calcPayment(float medicalCharge,int type,int days);
float calcDiscount(char seniorCitizen,char loyaltyMember);
void testCalcPayment();

int main() {
	
	int mediCharge,accType,stdays;
	float bill,rate,netPay;
	char senior,loyalty;
	
	testCalcPayment();
	
	printf("Medical charge: ");
	scanf("%d",&mediCharge);
	printf("Accommodation type: ");
	scanf("%d",&accType);
	printf("No of days: ");
	scanf("%d",&stdays);
	
	bill=calcPayment(mediCharge,accType,stdays);
	
	printf("Is patient a senior citizen: ");
	scanf(" %c",&senior);
	printf("Is patient a loyalty member: ");
	scanf(" %c",&loyalty);
	
	rate=calcDiscount(senior,loyalty);
		
	netPay=bill-(bill*rate);
	
	printf("\nYour bill = Rs.%.2f",netPay);
	
	return 0;
}
float calcPayment(float medicalCharge,int type,int days){
	float accommodationCharge,totalBill;
	
	if(type==1){
		accommodationCharge=17000*days;
	}
	else if(type==2){
		accommodationCharge=25000*days;
	}
	else if(type==3){
		accommodationCharge=32000*days;
	}
	
	totalBill=accommodationCharge+medicalCharge;
	return totalBill;
}

float calcDiscount(char seniorCitizen,char loyaltyMember){
	float discRate;
	
	if(seniorCitizen=='Y' || seniorCitizen=='y'){
		discRate=0.05;
	}
	else if(loyaltyMember=='Y' || loyaltyMember=='y'){
		discRate=0.1;
	}
	else{
		discRate=0;
	}
	
	return discRate;
}
void testCalcPayment(){
	assert(calcPayment(1000,2,2)==51000);
}