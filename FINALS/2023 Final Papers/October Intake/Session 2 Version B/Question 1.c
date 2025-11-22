#include<stdio.h>
#include<assert.h>

float calcPayment(int age, float size);
float calcSubsidy(float payment);
void displayDetails(float payment,float subsidy);
void testCalcPayment();

int main() {
	
	for(int i=1;i<=3;i++){
		int ages;
		float sizes,payments,subsidy;
		
		printf("Enter the age of the paddy crops(weeks): ");
		scanf("%d", &ages);
		printf("Enter the paddy field size(hectares): ");
		scanf("%f", &sizes);
		
		payments = calcPayment(ages,sizes);
	//
		subsidy = calcSubsidy(payments);
	//
		displayDetails(payments,subsidy);
	//
		testCalcPayment();		
	}



	return 0;
}

float calcPayment(int age, float size){
	
	int ureaAmount,tspAmount,mopAmount;
	float payUrea,payTsp,payMop,payment;
	
	if(age == 0){
		ureaAmount = size*0;
		tspAmount = size*35;
		mopAmount = size*0;
	}
	else if(age == 2){
		ureaAmount = size*30;
		tspAmount = size*0;
		mopAmount = size*0;
	}
	else if(age == 4){
		ureaAmount = size*65;
		tspAmount = size*0;
		mopAmount = size*25;
	}
	else if(age == 6){
		ureaAmount = size*50;
		tspAmount = size*0;
		mopAmount = size*25;
	}
	else if(age == 7){
		ureaAmount = size*30;
		tspAmount = size*0;
		mopAmount = size*0;
	}
	
	payUrea = ureaAmount*68;
	payTsp = tspAmount*60;
	payMop = mopAmount*75;
	
	payment = payUrea+payTsp+payMop;
	return payment;
}

float calcSubsidy(float payment){
	float subsAmount;
	subsAmount = payment* (float)15/100;
	return subsAmount;
}

void displayDetails(float payment,float subsidy){
	float finalAmount;
	finalAmount = payment - subsidy;
	
	printf("\nPayable amount\tSubsidy amount\n");
	printf("%.2f\t%.2f\n",finalAmount,subsidy);
}

void testCalcPayment(){
	float expected1 = (10*30)*68;
	float actual1 = calcPayment(7,10);
	assert(expected1 == actual1);
	
	float expected2 = 68*(50*50) + 75*(25*50);
	float actual2 = calcPayment(6,50);
	assert(expected2 == actual2);
	
    printf("\nAll test cases passed successfully!\n\n");

}