#include<stdio.h>
int main() {
	
	int int1,int2;
	int num1,num2;
	int digit1,digit2;
	int x;
	int sum=0;
	
	
	while(1){
		printf("Enter the first positive integer: ");
		scanf("%d",&int1);
		if(int1>=0){
			num1=int1;
			break;
		}
		else{
			printf("Invalid input.\n");
		}		
	}
	
	while(1){
		printf("Enter the second positive integer: ");
		scanf("%d",&int2);
		if(int2>=0){
			num2=int2;
			break;
		}
		else{
			printf("Invalid input.\n");
		}	
	}
	
	if(num2>num1){
		digit1=num1;
		digit2=num2;
	}
	else if(num1>num2){
		digit1=num2;
		digit2=num1;
	}
	
	x=digit1;
	
	printf("Odd numbers between %d and %d are: ",digit1,digit2);
	
	while(1){
		if(digit1%2==1){
			printf("%d ",digit1);
			sum+=digit1;
		}
		
		digit1++;
		if(digit1==digit2){
			break;
		}		
	}
	
	printf("\nSum of odd numbers between %d and %d is: %d\n",x,digit2,sum);


	
	
	return 0;
}