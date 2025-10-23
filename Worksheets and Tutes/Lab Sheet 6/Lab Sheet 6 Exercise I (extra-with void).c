#include <stdio.h>

void calPayment(int para1, int para2);

int main() {
	int code, quantity;
	
	printf("Enter item code: ");
	scanf("%d", &code);
	if(code == 1 || code == 2)
	{
		printf("Enter the quantity: ");
		scanf("%d", &quantity);
		
		calPayment(code,quantity);
	}
	else
	{
		printf("Invalid item code detected.");
	}

	
	return 0;
}

void calPayment(int para1, int para2)
{
	if(para1 == 1)
	{
		float pay = para2*50;
		printf("%.2f", pay);
	}
	else if(para1 == 2)
	{
		float pay = para2*100;
		printf("%.2f", pay);
	}
}

