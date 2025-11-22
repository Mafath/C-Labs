#include<stdio.h>
int main() {
	
	int image[4][4];
	
	for(int i=0;i<4;i++){
		printf("Values for row %d\n", i+1);
		for(int j=0;j<4;j++){
			printf("\tEnter element: ");
			scanf("%d", &image[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(image[i][j]>55){
				printf("1 ");
			}
			else if(image[i][j]<55){
				printf("0 ");
			}
		}
		printf("\n");
	}
	
	
	
	return 0;
}