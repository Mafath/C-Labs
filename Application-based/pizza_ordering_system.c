// Pizza ordering system with discount calculation - takes pizza type and quantity,
// applies discounts for orders over 3 items, calculates final price (use -1 to exit)
#include <stdio.h>
int main() {
	
	int type, qty, price;
	float discount, final_price;
	
	
	printf("Enter Pizza Type: ");
	scanf("%d", &type);
	
	while(type!=-1) {

		printf("Enter Quantity:   ");
		scanf("%d", &qty);
		
		if(qty>3) {
			if(type == 1) {
				price = qty * 1000;
				discount = price * (float)10/100;
				final_price = price - discount;
			}
			
			if(type == 2) {
				price = qty * 1600;
				discount = price * (float)12/100;
				final_price = price - discount;

			}
			
			if(type == 3) {
				price = qty * 1400;
				discount = price * (float)15/100;
				final_price = price - discount;

			}
		}
		
		
		else if(qty<3) {
			if(type == 1) {
				final_price = qty * 1000;
			}
			
			if(type == 2) {
				final_price = qty * 1600;
			}
			
			if(type == 3) {
				final_price = qty * 1400;
			}
		}
		
		printf("Total Price Rs: %.2f\n", final_price);
		printf("\n");
		
		printf("Enter Pizza Type: ");
		scanf("%d", &type);
		
	}
	
	
	return 0;
}