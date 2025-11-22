#include<stdio.h>
int main() {
	
	int sawanType,num;
	char orderType,condition;
	float totalAmount,extra,finalPayment;
	
	
	for(int i=1;i<=5;i++){
		printf("Sawan type: ");
		scanf("%d", &sawanType);
		if(sawanType!=1 && sawanType!=2 && sawanType!=3){
			i--;
			printf("Invalid sawan type.Re enter\n");
			continue;
		}
		
		printf("No of sawans: ");
		scanf("%d",&num);
		printf("Order type: ");
		scanf(" %c",&orderType);
		if(orderType!='I' && orderType!='i' && orderType!='T' && orderType!='t' && orderType!='D' && orderType!='d'){
			printf("Invalid order type\n");
			break;
		}
		
		
		if(sawanType==1){
			totalAmount=7000*num;
		}
		else if(sawanType==2){
			totalAmount=10000*num;
		}
		else if(sawanType==3){
			totalAmount=12000*num;
		}
		
		if(orderType=='I' || orderType=='i'){
			extra=totalAmount*0.05;
		}
		else if(orderType=='T' || orderType=='t'){
			extra=0;
		}
		else if(orderType=='D' || orderType=='d'){
			extra=totalAmount*0.1;
		}
		
		finalPayment=totalAmount+extra;
		printf("The amount to be paid: %.2f\n",finalPayment);
		
		printf("Do you want to input the net order details: ");
		scanf(" %c",&condition);
		if(condition=='N' || condition=='n'){
			break;
		}
	}
	
	
	return 0;
}