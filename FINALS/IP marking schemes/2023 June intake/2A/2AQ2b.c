# include <stdio.h>
int main(void)
{
	int matrix[5][5];
	int i, j, num, temp;
	for (i =0; i <5; i++)
	{
		for(j=0; j < 5; )
		{
			printf("Enter the number at %d %d ", i+1, j+1);
			scanf("%d", &num);
			if (num>=0)
			{
				matrix[i][j] = num;
				
				j++;
			}
			
		}
	}
	for (i =0; i <5;i++ )
	{
		for(j=0; j < 5; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	for (i =0; i <5;i++ )
	{
		for(j=0; j < 5/2; j++)
		{
			temp = matrix[i][j];
			matrix[i][j] = matrix[i][5-1-j];
			matrix[i][5-1-j] = temp; 
		}
		printf("\n");
	}
	for (i =0; i <5;i++ )
	{
		for(j=0; j < 5; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
}
