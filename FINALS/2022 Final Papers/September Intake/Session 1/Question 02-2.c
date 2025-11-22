#include<stdio.h>
int main() {
	
	int identityArr[4][4];
	int count1=0,count0=0;
	
	for(int i=0;i<4;i++){
		printf("Values for row%d\n",i+1);
		for(int j=0;j<4;j++){
			printf("\tEnter element %d: ",j+1);
			scanf("%d",&identityArr[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",identityArr[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				if(identityArr[i][j]==1){
					count1++;
				}
			}
			else{
				if(identityArr[i][j]==0){
					count0++;
				}
			}
		}
	}
	
	if(count1==4 && count0==12){
		printf("\nAbove matrix is an Identity matrix\n");
	}
	else{
		printf("\nAbove matrix isn't an Identity matrix\n");		
	}
	
	return 0;
}