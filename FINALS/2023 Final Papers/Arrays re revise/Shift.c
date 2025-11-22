#include<stdio.h>
int main() {
	
	int numArr[8]={0};
	int move,num;
	
	for(int i=0;i<8;i++){
		printf("Enter number %d: ",i+1);
		scanf("%d",&numArr[i]);
	}
	
	printf("\nHow many do you want to shift: ");
	scanf("%d",&num);	
	
	printf("\nOriginal Array\n");
	for(int i=0;i<8;i++){
		printf("%d ",numArr[i]);
	}
	
	printf("\nLeft shift\n");
	for(int i=num;i<8;i++){
		printf("%d ",numArr[i]);
	}
	for(int i=0;i<num;i++){
		printf("%d ",numArr[i]);
	}
	
	printf("\nRight shift\n");
	for(int i=8-num;i<8;i++){
		printf("%d ",numArr[i]);
	}
	for(int i=0;i<8-num;i++){
		printf("%d ",numArr[i]);
	}
	
	
	
	return 0;
}