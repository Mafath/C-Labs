#include <stdio.h>

int calPayment(int para1, int para2);

int main() {
	int code, quantity;
	
	printf("Enter item code: ");
	scanf("%d", &code);
	if(code == 1 || code == 2)
	{
		printf("Enter the quantity: ");
		scanf("%d", &quantity);
		
		float total = calPayment(code,quantity);
		printf("%.2f", total);
	}
	else
	{
		printf("Invalid item code detected.");
	}

	
	return 0;
}

int calPayment(int para1, int para2)
{
	if(para1 == 1)
	{
		float pay = para2*50;
		return pay;
	}
	else if(para1 == 2)
	{
		float pay = para2*100;
		return pay;
	}
}

