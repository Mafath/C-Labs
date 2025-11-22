#include<stdio.h>
int main() {
	
	int image[5][5];
	int count = 0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d",&image[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",image[i][j]);
		}
		printf("\n");
	}	
	
	
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){	
			if (image [i][j] == 1 && image [i][j+1] == 1 && image [i+1][j] == 1 && image [i+1][j+1] == 1){
				count++;
			}
		}
	}
	
	printf ("Number of 2 by 2 squares: %d", count);
	return 0;
}