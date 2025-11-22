#include<stdio.h>
#include<assert.h>

float paymentAmount(int date,char cardType,double amount);
void displayLoyaltytype(double payment);	
void testpaymentAmount();

int main() {
	
	int date;
	char type;
	float amount,totalBill;
	
	printf("Enter the date: ");
	scanf("%d", &date);
	
	printf("Enter card type: ");
	scanf(" %c",&type);
	
	printf("Enter amount: ");
	scanf("%f", &amount);
//	
	totalBill=paymentAmount(date,type,amount);
	printf("\nYour total bill = %.2f\n",totalBill);
//
	displayLoyaltytype(totalBill);
//
	testpaymentAmount();

	
	return 0;
}
//
float paymentAmount(int date,char cardType,double amount){
	
	float discount,total;
	
	if(date==5){
		if(cardType=='a' || cardType=='A'){
			discount=amount*0.2;
			total=amount-discount;
		}
		else{
			total=amount;
		}
	}
	if(date==6){
		if(cardType=='b' || cardType=='B'){
			discount=amount*0.25;
			total=amount-discount;
		}
		else{
			total=amount;
		}
	}
	if(date==7){
		if(cardType=='a' || cardType=='A'|| cardType=='c' || cardType=='C'){
			discount=amount*0.3;
			total=amount-discount;
		}
		else{
			total=amount;
		}
	}
	if(date==8){
		if(cardType=='b' || cardType=='B'|| cardType=='c' || cardType=='C'){
			discount=amount*0.2;
			total=amount-discount;
		}
		else{
			total=amount;
		}
	}
	return total;
}
//
void displayLoyaltytype(double payment){
	if(payment>30000){
		printf("Your Loyalty card type is Gold\n");
	}
	else if(payment>10000 && payment<30000){
		printf("Your Loyalty card type is Silver\n");
	}
	if(payment<10000){
		printf("Your Loyalty card type is Bronze\n");
	}
}
//
void testpaymentAmount(){
	float expected1=10000+(10000*0.2);
	float actual1=paymentAmount(5,'a',10000);
	assert(expected1 == actual1  && "Test case 1 failed: Incorrect payment amount");
	//thawa test 2k danna.
	printf("\nAll cases passed successfully!\n");
}
