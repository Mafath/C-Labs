#include<stdio.h>
int main() {
	
	int x,num,a,b,c,d;

	printf("Enter a 4 digit number: ");
	scanf("%d", &num);
	
	while(num<1000 || num>9999){
		printf("Invalid number\n");
		printf("Enter a 4 digit number: ");
		scanf("%d", &num);
	}
	
	
	printf("%d\n",num);
	
	a = num/1000;
	b = (num%1000)/100;
	c = (num%100)/10;
	d = num%10;
	
	
	printf("%d %d %d %d",a,b,c,d);
	
	return 0;
}