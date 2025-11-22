#include<stdio.h>
#include<assert.h>
#include<math.h>

float calcInterest(int FDType, float depositAmount);
float calcTax(float annualInterest);
void displayDetails(float interest, float taxAmount);
void testcalcInterest();

int main() {
	
	int FD;
	float depAmount,annualInt,withdrawlTax;
	
	testcalcInterest();//calling test function
	
	//taking details from user
	printf("Fixed Deposit Type: ");
	scanf("%d",&FD);
	printf("Deposit Amount: ");
	scanf("%f",&depAmount);
	
	//calculate annual interst
	annualInt = calcInterest(FD,depAmount);

	//calculate withholding tax
	withdrawlTax= calcTax(annualInt);
	
	//calculating and displaying Payable amount
	displayDetails(annualInt, withdrawlTax);

	return 0;
}
float calcInterest(int FDType, float depositAmount){
	float rate,interest;
	
	if(FDType==1){
		rate=16.0;
	}
	else if(FDType==2){
		rate=15.0;
	}
	else if(FDType==3){
		rate=15.5;
	}
	else if(FDType==4){
		rate=17.5;
	}
	interest=depositAmount*rate;
	return interest;
}
//
float calcTax(float annualInterest){
	float withdTdax;
	
	withdTdax=annualInterest*0.05;
	return withdTdax;        
}
//
void displayDetails(float interest, float taxAmount){
	float payableInt;
	
	payableInt=interest-taxAmount;
	
	printf("Annual Interest    Tax amount\tAmount Payable\n");
	printf("%10.2f%17.2f%15.2f",interest,taxAmount,payableInt);
}
//
void testcalcInterest(){
	assert(fabs(calcInterest(2,100)-1500.00)<0.01);
	assert(fabs(calcInterest(4,500)-8750.00)<0.01);
}