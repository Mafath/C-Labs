#include<stdio.h>
#include<assert.h>

float calcPayment(int pType,float totalData);
float calcTax(float payment);
void displayDetails(float payment, float tax);
int main() {
	
	for(int i=1;i<=3;i++){
		printf("Customer %d\n",i);
		int type,dataUsage;
		float bill,taxAmount;
		
		printf("\tPackage type: ");
		scanf("%d",&type);
		
		printf("\tTotal data usage(GB): ");
		scanf("%d",&dataUsage);
		
		bill=calcPayment(type,dataUsage);
		taxAmount=calcTax(bill);
		displayDetails(bill,taxAmount);	
	}

	return 0;
}
//
float calcPayment(int pType,float totalData){
	float excessData,excessUsageCharge,payment;
	
	if(pType==1){
		excessData=totalData-1.5;
		excessUsageCharge=(excessData*1024)*2;
		
		payment=excessUsageCharge+120;
	}
	else if(pType==2){
		excessData=totalData-5;
		excessUsageCharge=(excessData*1024)*1.5;
		
		payment=excessUsageCharge+350;
	}
	else if(pType==3){
		excessData=totalData-10;
		excessUsageCharge=(excessData*1024)*1;
		
		payment=excessUsageCharge+660;
	}
	else if(pType==4){
		excessData=totalData-20;
		excessUsageCharge=(excessData*1024)*0.5;
		
		payment=excessUsageCharge+1200;
	}
	
	return payment;
}
//
float calcTax(float payment){
	float tax;
	
	tax=payment*0.05;
	return tax;
}
//
void displayDetails(float payment, float tax){
	
	float finalBill=payment+tax;
	
	printf("\nPayment\t\tTax amount\tMonthly bill payment\n");
	printf("%.2f\t%.2f\t\t%.2f",payment,tax,finalBill);
}
