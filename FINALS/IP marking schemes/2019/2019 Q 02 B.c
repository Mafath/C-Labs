#include<stdio.h>
int main (void)
{
	int arr[3][4] , maxfilm  ;
	int count , i , j ;
	float tot[3] = {0} , max = -99 , avg;
	
	for(i = 0 ; i< 3 ; i++)
	{
		avg = 0;
		for(j = 0 ; j < 4 ; j++)
		{
			printf("Movie %d : reviewer %d : \t", i+1 , j+1);
			scanf("%d" , &arr[i][j]);
			
			tot[i] = tot[i] + arr[i][j];
		}
		printf("\n**************\n");
		avg = tot[i] / 4.0;
		if(max < avg)
		{
			max = avg;
			maxfilm = i+1;
		}
	}
	
	for(i = 0 ; i< 3 ; i++)
	{

		for(j = 0 ; j < 4 ; j++)
		{
			printf("%d\t" , arr[i][j]);
		}
	printf("\n");
	}
	
	for(i = 0 ; i<3 ; i++)
	{
		printf("Film %d average Time : %.2f\n" , i+1 , tot[i]/4.0f );
	}
	
	printf("\n Highest Average Rating film is : film no - %d\n" , maxfilm );
	
	return 0;
}
