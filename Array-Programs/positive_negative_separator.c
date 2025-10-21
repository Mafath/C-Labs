// Positive and negative number classifier - processes 10 numbers,
// separates them into positive and negative arrays, shows all lists with proper formatting
#include<stdio.h>
int main() {
	
	int arr[10];
	int positiveNum[10], negativeNum[10];
	int pos=0, neg=0;
	
	for(int i=0;i<10;i++) {
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(int i=0;i<10;i++){
		if(arr[i]>0){
			positiveNum[pos++]= arr[i];
		}
		else if(arr[i]<0){
			negativeNum[neg++]= arr[i];
		}
	}
	
	printf("Number series:- ");
	for(int i=0;i<10;i++) {
		printf("%d", arr[i]);
		if(i!=9){
			printf(", ");
		}
	}
	
	printf("\nPositive numbers:- ");
	for(int j=0;j<pos; j++){
		printf("%d",positiveNum[j]);
		if(j!=(pos-1)) {
			printf(", ");
		}
	}	

	printf("\nNegative numbers:- ");
	for(int j=0;j<neg; j++){
		printf("%d",negativeNum[j]);
		if(j!=(neg-1)) {
			printf(", ");
		}
	}	

	return 0;
}