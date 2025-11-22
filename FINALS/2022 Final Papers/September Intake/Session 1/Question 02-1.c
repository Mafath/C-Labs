#include<stdio.h>
int main(){
	
	int numArr[8];
	int num,temp,n;
	
	for(int i=0;i<8;i++){
		printf("Enter value %d: ",i+1);
		scanf("%d", &numArr[i]);
	}
	
	for(int i=0;i<8;i++){
		printf("%d ",numArr[i]);
	}
	
	while(1){
		printf("\nEnter a number: ");
		scanf("%d",&num);
		if(num>0 && num<8){
			n=num;
			break;
		}
		else{
			printf("Invalid\n");
		}
	}

	for(int i=0;i<n;i++){
		temp=numArr[7];
		for(int j=7;j>0;j--){
			numArr[j]=numArr[j-1];
		}
		numArr[0]=temp;
	}

	for(int i=0;i<8;i++){
		printf("%d ",numArr[i]);
	}
	
	
	return 0;
}