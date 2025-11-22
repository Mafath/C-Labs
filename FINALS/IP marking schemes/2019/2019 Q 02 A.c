#include<stdio.h>
int main(void)
{
	int fib[10]={0,1};
	int i , j ;
	
	
	for(i=1 ; i<9 ; i++)
	{
		fib[i+1] = fib[i-1] + fib[i];
	}
	
	printf("Array Elements are : ");
	for(i=0 ; i<10 ; i++)
	{
		printf("\t%d\t" , fib[i]);
	}
	
	return 0;
}
