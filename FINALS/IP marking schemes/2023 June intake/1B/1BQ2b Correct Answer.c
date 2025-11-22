#include <stdio.h>

int main() {
    int maze[5][5] = {0};
    int i, j,k;
    int x, y;

	for (k =0; k < 5; )
	{
		
			printf("Enter the location of obstacle %d  ", k+1);
			scanf("%d %d", &i,&j);
			if ((maze[i][j] != 1) && (i < 5) && (j < 5))
			{
				maze[i][j]=1;
				k++;
			}
			else{
			printf("Sorry, there is an obstacle in this place or invalid location.\n");	
			}
				
	}

    // Fill the remaining array elements with 0s
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (maze[i][j] != 1) {
                maze[i][j] = 0;
            }
        }
    }

    // Display the maze
    printf("\nMaze:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
	printf("Enter the start location " );
	scanf("%d %d", &x,&y);
	if(maze[x][y] == 1){
		printf("This is an obstacle\n");
	}
	else{

    // Find and display the possible directions the object can move
    printf("\nYou can move: ");
    if (x > 0 && maze[x - 1][y] == 0) {
        printf("up ");
    }
    if (x < 4 && maze[x + 1][y] == 0) {
        printf("down ");
    }
    if (y > 0 && maze[x][y - 1] == 0) {
        printf("left ");
    }
    if (y < 4 && maze[x][y + 1] == 0) {
        printf("right");
    }
    printf("\n");
    }
    return 0;
}