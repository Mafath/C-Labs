// Shopping cart with item pricing - calculates total cost for multiple items
// with different unit prices, accumulates running total (use -1 to exit)
#include <stdio.h>
int main() {
	
	int item, qty;
	float total, sum = 0;
	
	printf("Enter item    :");
	scanf("%d", &item);
	
	while(item != -1) {
		printf("Enter Quantity:");
		scanf("%d", &qty);
		
		if(item == 1) {
			total = qty * 300.25;
		}
		if(item == 2) {
			total = qty * 145.50;
		}
		if(item == 3) {
			total = qty * 525.00;
		}
		
		sum+= total;
		
		printf("\nEnter item    :");
		scanf("%d", &item);
	}
	
	printf("Total price to pay Rs:%.2f", sum);
	
	return 0;
}