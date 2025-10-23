// Burger pricing calculator - calculates total price for different burger types
// with varying prices, continues until invalid type entered
#include<stdio.h>
int main() {
	
	int type, qty;
	float price;
	
	printf("Enter burger type:");
	scanf("%d", &type);
	
	while(type>=1 && type<=3) {
		printf("Enter Quantity   :");
		scanf("%d", &qty);
		
		if(type == 1){
			price = 500* qty;
		}
		if(type == 2){
			price = (500+50)* qty;
		}
		if(type == 3){
			price = (500+100)* qty;
		}
		
		printf("Total Price   Rs :%.2f\n", price);
		printf("\nEnter burger type:");
		scanf("%d", &type);
	}
	
	return 0;
}