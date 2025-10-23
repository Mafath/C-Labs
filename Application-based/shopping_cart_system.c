// Simple shopping cart system - calculates total bill for multiple items
// with different prices, accumulates total cost (use -99 to exit)
#include <stdio.h>
int main() {
	
	int item, qty;
	float total, bill = 0;
	
	printf("Enter item    :");
	scanf("%d", &item);
	
	while(item != -99) {
		
		printf("Enter Quantity:");
		scanf("%d", &qty);
		
		if(item == 1) {
			total = qty * 30;
		}
		if(item == 2) {
			total = qty * 45;
		}
		if(item == 3) {
			total = qty * 55.50;
		}
		
		bill += total;
		
		printf("\nEnter item    :");
		scanf("%d", &item);
	}
	
	printf("Total price to pay Rs: %.2f", bill);


	
	return 0;
}