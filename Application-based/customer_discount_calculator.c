// Customer discount calculator - calculates discount based on customer type and bill amount,
// applies different discount rates for different customer types and bill thresholds
#include<stdio.h>
int main() {
	
	int type;
	float billAmount, discount, finalBill;
	
	printf("Enter the customer type: ");
	scanf("%d", &type);
	
	printf("Enter bill amount: Rs.");
	scanf("%f", &billAmount);
	
	if(type==1) {
		if(billAmount <= 2000) {
			discount = billAmount * 15 / 100;
			printf("Discount Amount: Rs.%.2f\n", discount);
			
			finalBill = billAmount - discount;
			printf("Finall bill Amount: Rs.%.2f\n", finalBill);
		}
		else if(billAmount > 2000) {
			discount = billAmount * 25 / 100;
			printf("Discount Amount: Rs.%.2f\n", discount);
			
			finalBill = billAmount - discount;
			printf("Finall bill Amount: Rs.%.2f\n", finalBill);
		}
	}
	
	if(type==2) {
		if(billAmount > 3000) {
			discount = billAmount * 15 / 100;
			printf("Discount Amount: Rs.%.2f\n", discount);
			
			finalBill = billAmount - discount;
			printf("Finall bill Amount: Rs.%.2f\n", finalBill);
		}
	}

	
	return 0;
}
