// Sales commission system - tracks 5 salespeople's sales, adds 5000 bonus
// for sales over 20000, and displays the final sales amounts in a table
#include<stdio.h>
int main() {
	
	double sales[5]={0};
	double value;
	
	for(int i=0;i<5;i++) {
		printf("Input the sales of salesmen %d: ", i+1);
		scanf("%lf", &value);
		if(value<0) {
			printf("Please re-enter the amount\n");
			i--;
		}
		else{
			sales[i] = value;
			if(value>20000){
				sales[i]+=5000;
			}
		}
	}

	printf("Sales person number\tSales amount\n");
	
	for(int j=0;j<5;j++) {
		printf("%7d%25.2lf\n",j+1,sales[j]);
	}
	
	return 0;
}