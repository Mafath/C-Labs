#include<stdio.h>

int main(){
	
	int numArr[8];
	int n;
	int i, j;
	int last_index;
	
	printf("Enter 8 Integer Values : ");
	
	for(i = 0; i < 8; i++){
		scanf("%d", &numArr[i]);
	}
	
	
	printf("original  array  : ");
	
	for(i = 0; i < 8; i++){
		printf("%d", numArr[i]);
	}
	printf("\n");
	
	printf("Enter a value for n : ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		last_index = numArr[7];
		for(j = 7; j > 0; j--){
			numArr[j] = numArr[j-1];
		}
		numArr[0] = last_index;
	}
	
	printf("New order of array element : ");
	
	for(i = 0; i < 8; i++){
		printf("%d", numArr[i]);
	}
	printf("\n");

	return 0;
}
