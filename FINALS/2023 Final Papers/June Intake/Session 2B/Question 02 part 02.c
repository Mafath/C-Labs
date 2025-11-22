#include<stdio.h>
int main() {
	
	int myArr[4][4];
	int num;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d", &myArr[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ", myArr[i][j]);
		}
		printf("\n");
	}
	
	printf("Input a number: ");
	scanf("%d",&num);
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){	
			if(myArr[i][j]==num){
				printf("You can find %d at [%d,%d]",num,i+1,j+1);
			}
			else{
				printf("Error");
			}
		}
	}
	
	
//	else{
//		printf("Number not found.\n");
//	}
	
	
	return 0;
}