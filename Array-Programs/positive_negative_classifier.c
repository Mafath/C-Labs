// Positive and negative number classifier - processes 10 numbers,
// separates them into positive and negative arrays using separate loops
#include<stdio.h>
int main() {
	
	int intArr[10];
	int positiveNum[10];
	int negativeNum[10];
	
	int posCount=0, negCount=0;
	
	for(int i=0;i<10;i++){
		printf("Enter number %d: ",i+1);
		scanf("%d",&intArr[i]);
	}

	for(int i=0;i<10;i++){
		if(intArr[i]>=0){
			positiveNum[posCount]= intArr[i];
			posCount++;
		}
	}	
	
	for(int i=0;i<10;i++){
		if(intArr[i]<0){
			negativeNum[negCount]= intArr[i];
			negCount++;
		}
	}

	printf("\nNumber series: ");
	for(int i=0;i<10;i++){
		printf("%d ",intArr[i]);
	}	

	printf("\nPositive Numbers: ");
	for(int i=0;i<posCount;i++){
		printf("%d ",positiveNum[i]);
	}

	printf("\nNegative Numbers: ");
	for(int i=0;i<negCount;i++){
		printf("%d ",negativeNum[i]);
	}			
	return 0;
}