//This program assume that the locations are countered starting from 0,0

# include <stdio.h>
int main(void)
{
	int maze[5][5] = {0};
	int i,j,k;
	for (k =1; k <=5; )
	{
		
			printf("Enter the location of obstacle %d  ", k  );
			scanf("%d %d", &i,&j);
			if (maze[i][j] != 1 && i <5 && j <5)
			{
				maze[i][j]=1;
				k++;
			}
			else
				printf("Sorry, there is an obstacle in this place or invalid location.\n ");
	}
	
	for (i = 0; i <5; i++ )	
	{
		for(j = 0; j <5; j++)
		{
			if (maze[i][j] != 1)
				maze[i][j] = 0;
		}
	}
	for (i = 0; i <5; i++ )	
	{
		for(j = 0; j <5; j++)
		{
			printf("%d ", maze[i][j]);
			
		}
		printf("\n");
	}
	printf("Enter the start location " );
	scanf("%d %d", &i,&j);
	printf("You can move");
	
	if(maze[i-1][j] == 0)
		printf("Up ");
	if(maze[i+1][j] == 0)
		printf("Down ");
	if (maze[i][j+1] == 0)
		printf("Right ");
	if (maze[i][j-1] == 0)
		printf("Left ");
}
