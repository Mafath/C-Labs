#include<stdio.h>
#include <assert.h>

float calcPayment(int peak, int offPeak);
float calcServiceCharge(int peak, int offPeak);
void  testcalcpayment();

int main() {
	int peakUnts,offpeakUnts;
	float bill1,bill2,finalBill;
	
	printf("Enter the no. of units used in peak hours: ");
	scanf("%d", &peakUnts);
	
	printf("Enter the no. of units used in off-peak hours: ");
	scanf("%d", &offpeakUnts);
	
	bill1 = calcPayment(peakUnts,offpeakUnts);
	printf("Electricity Payment: %.2f\n",bill1);

	bill2=calcServiceCharge(peakUnts,offpeakUnts);		
	printf("Service charge: %.2f\n",bill2);
	
	finalBill = bill1+bill2;
	printf("Total monthly bill payment: %.2f\n",finalBill);
	
	testcalcpayment();
	
	return 0;
}
//function1
float calcPayment(int peak, int offPeak){
	
	int price1,price2,totalPrice;
	
	if(peak>=0 && peak<=90){
		price1 = peak*55;
	}
	else if(peak>=91 && peak<=180){
		price1 = peak*60;
	}
	else if(peak>180){
		price1 = peak*100;
	}
//
	if(offPeak>=0 && offPeak<=90){
		price2 = offPeak*42;
	}
	else if(offPeak>=91 && offPeak<=180){
		price2 = offPeak*50;
	}
	else if(offPeak>180){
		price2 = offPeak*75;
	}
	
	totalPrice = price1+price2;
	return(totalPrice);
}

//function2
float calcServiceCharge(int peak, int offPeak){
	
	int totalUnits;
	float charge;
	
	totalUnits = peak+offPeak;
	if(totalUnits>=0 && totalUnits<=100){
		charge = 550;
	}
	else if(totalUnits>=101 && totalUnits<=200){
		charge = 650;
	}
	else if(totalUnits>200){
		charge = 1200;
	}
	
	return(charge);
	
}
//assert function
void  testcalcpayment(){
	
    // Test case 1: Peak = 80, Off-Peak = 70
    float expected1 = 80 * 55 + 70 * 42;
    float actual1 = calcPayment(80, 70);
    assert(expected1 == actual1);

//    // Test case 2: Peak = 150, Off-Peak = 120
//    float expected2 = 150 * 60 + 120 * 50;
//    float actual2 = calcPayment(150, 120);
//    assert(expected2 == actual2);

    printf("\nAll test cases passed successfully!");
}
