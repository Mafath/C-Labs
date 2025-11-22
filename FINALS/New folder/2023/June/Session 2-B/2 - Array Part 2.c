#include<stdio.h>
int main() {
	
	int myArr[4][4];
	int num;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d",&myArr[i][j]);
		}
	}
	
	printf("\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",myArr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nenter a number: ");
	scanf("%d",&num);
	
	
	int count=0;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(myArr[i][j]==num){
				count++;
				if(count==1){
					printf("You can find %d at ",num);
				}
				printf("[%d,%d] ",i,j);
			}
		}
	}
	
	if(count==0){
		printf("\nNumber not found.\n");
	}
	
	return 0;
}