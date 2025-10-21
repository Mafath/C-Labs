// Even and odd number separator - takes 6 numbers from user input,
// separates them into even and odd arrays, then displays all three lists
#include<stdio.h>
int main() {
	
	int numArr[6];
	int oddNum[6];
	int evenNum[6];
	int oddCount, evenCount = 0;
	
	for(int i=0;i<6;i++) {
		printf("Enter number %d: ", i+1);
		scanf("%d",&numArr[i]);
	}
	
	for(int i=0;i<6;i++) {
		if(numArr[i]%2==0){
			evenNum[evenCount]=numArr[i];
			evenCount++;
		}
		else{
			oddNum[oddCount]=numArr[i];
			oddCount++;
		}
	}

	printf("Number series: ");
	for(int i=0;i<6;i++) {
		printf("%d ", numArr[i]);
	}	

	printf("\nOdd numbers: ");
	for(int i=0;i<oddCount;i++) {
		printf("%d ", oddNum[i]);
	}
	
	printf("\nEven numbers: ");
	for(int i=0;i<evenCount;i++) {
		printf("%d ", evenNum[i]);
	}
	
	return 0;
}