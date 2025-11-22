#include<stdio.h>
#include<assert.h>

float calcPayment(int noBricks, char brickType);
float calcAdditionalPayment(char transportation, char unloading);
void testcalcpayment();

int main(){
	
	int noBrick;
	char type,trans,unload;
	float payment,extra,netPayment;
	
	printf("Enter number of bricks: ");
	scanf("%d",&noBrick);
	printf("Enter type of bricks: ");
	scanf(" %c",&type);
	
	payment = calcPayment(noBrick,type);
	printf("\nPayment = %.2f\n",payment);

//	
	printf("Enter Y if you need transportation(else N): ");
	scanf(" %c", &trans);
	printf("Enter Y if you need assistance with unloading(else N): ");
	scanf(" %c", &unload);
	
	extra = calcAdditionalPayment(trans, unload);
	printf("\nExtra payment = %.2f\n",extra);
	
	netPayment = payment + extra;
	printf("\nNet payment = %.2f\n",netPayment);
	
	testcalcpayment();
	
	return 0;
}
//function 1
float calcPayment(int noBricks, char brickType){
	
	float payment;
	
	if(brickType=='S'||brickType=='s'){
		payment = noBricks*20;
	}
	else if(brickType=='L'||brickType=='l'){
		payment = noBricks*85;
	}
	else if(brickType=='C'||brickType=='c'){
		payment = noBricks*35;
	}
	
	return payment;
	
}
//function 2
float calcAdditionalPayment(char transportation, char unloading){
	
	float extra = 0;
	
	if(transportation=='Y' || transportation=='y') {
		extra+=150;
	}
	if(unloading=='Y' || unloading=='y'){
		extra+=3000;
	}
	
	return extra;
}
// Function to test the calcPayment() function
void testcalcpayment() {
    float expectation1 = 200; // Expected payment for test case 1
    float expectation2 = 8500; // Expected payment for test case 1
    
    assert(calcPayment(10,'S') == expectation1);
    assert(calcPayment(100,'L') == expectation2);
    printf("\nAll test cases passed successfully!\n");
}


