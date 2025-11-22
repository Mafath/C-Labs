# include <stdio.h>
int main(void)
{
	int myArr[4][4];
	int i, j, num;
	int found = 0;
	for (i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; )
		{
			printf("Enter the number at %d %d ", i+1, j+1);
			scanf("%d", &num);
			if (num>=0)
			{
				myArr[i][j] = num;
				
				j++;
			}
			
		}
	}
	for (i =0; i <4;i++ )
	{
		for(j=0; j < 4; j++)
		{
			printf("%d ", myArr[i][j]);
		}
		printf("\n");
	}
	
	printf("Input a number");
	scanf("%d", &num);
	for (i =0; i < 4;i++ )
	{
		for(j=0; j < 4; j++)
		{
			if (myArr[i][j]== num)
			{
			
				printf("[%d][%d]", i, j) ;
				found = 1;
			}
		}
		printf("\n");
	}
	if (found == 0)
		printf("Number not found");
	
}
