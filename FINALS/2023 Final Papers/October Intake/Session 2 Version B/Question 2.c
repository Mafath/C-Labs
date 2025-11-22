#include<stdio.h>
int main() {
	
	char type,add,serviceType;
	int num;
	float price,discount,totalPrice;
	
	printf("Package Type: ");
	scanf(" %c",&type);
	
	printf("No of Participants: ");
	scanf("%d",&num);
	
	if(type=='G' || type=='g'){
		price = 20000*num;
		if(num>10){
			discount=price*0.1;
		}
		else{
			discount=0;
		}
	}
	else if(type=='S' || type=='s'){
		price = 15000*num;
		if(num>10){
			discount=price*0.1;
		}
		else{
			discount=0;
		}
	}
	else if(type=='B' || type=='b'){
		price = 10000*num;
		if(num>10){
			discount=price*0.1;
		}
		else{
			discount=0;
		}
	}
	totalPrice = price-discount;
	

	printf("Do you want to add additional Services: ");
	scanf(" %c",&add);

	while(add=='Y' || add=='y'){
		
		printf("Enter the service you like to book: ");
		scanf(" %c",&serviceType);
		
		if(serviceType=='C' || serviceType=='c'){
			totalPrice+=5000;
		}
		else if(serviceType=='V' || serviceType=='v'){
			totalPrice+=7500;
		}
		if(serviceType=='E' || serviceType=='e'){
			totalPrice+=10000;
		}
		
		printf("Do you want to add additional Services: ");
		scanf(" %c",&add);
	}
	
	
	printf("\nTotal Amount to be Paid: Rs. %.2f\n",totalPrice);
		
	
	return 0;
}