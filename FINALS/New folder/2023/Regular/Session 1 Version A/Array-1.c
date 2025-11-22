#include<stdio.h>
int main() {
	
	int prices[10];
	int sum=0,count=0;
	float x=0;
	
	for(int i=0;i<10;i++){
		printf("Enter price %d: ",i+1);
		scanf("%d",&prices[i]);
	}
	
	for(int i=0;i<10;i++){
		sum+=prices[i];
	}
	float avg=(float)sum/10;
	printf("Average price of products: %.2f\n", avg);
	
	float max=prices[0];
	for(int i=0;i<10;i++){
		if(prices[i]>max){
			max=prices[i];
		}
	}
	printf("Highest price: Rs.%.2f\n",max);
	
	for(int i=0;i<10;i++){
		if(prices[i]<100){
			count++;
		}
	}
	printf("No of products that cost less than Rs.100.00: %d\n",count);
	
	for(int i=0;i<10;i++){
		if(prices[i]>500){
			x+=prices[i];
		}
	}
	printf("Total cost of all products that cost more than Rs.500.00: %.2f\n",x);
	return 0;
}