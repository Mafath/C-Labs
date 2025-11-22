//This program assume that the locations are countered starting from 0,0

# include <stdio.h>
int main(void)
{
	char mazeMap[5][5];
	int i,j,k;
	for (k =1; k <=5; )
	{
		
			printf("Enter the location of obstacle %d  ", k  );
			scanf("%d %d", &i,&j);
			if (mazeMap[i][j] != 'X' && i <5 && j <5)
			{
				mazeMap[i][j]='X';
				k++;
			}
			else
				printf("Sorry, there is an obstacle in this place or invalid location.\n ");
	}
	
	for (i = 0; i <5; i++ )	
	{
		for(j = 0; j <5; j++)
		{
			if (mazeMap[i][j] != 'X')
				mazeMap[i][j] = 'O';
		}
	}
	for (i = 0; i <5; i++ )	
	{
		for(j = 0; j <5; j++)
		{
			printf("%c ", mazeMap[i][j]);
			
		}
		printf("\n");
	}
	printf("Enter the start location " );
	scanf("%d %d", &i,&j);
	printf("You can move");
	
	if(mazeMap[i-1][j] == 'O')
		printf("Up ");
	if(mazeMap[i+1][j] == 'O')
		printf("Down ");
	if (mazeMap[i][j+1] == 'O')
		printf("Right ");
	if (mazeMap[i][j-1] == 'O')
		printf("Left ");
}
