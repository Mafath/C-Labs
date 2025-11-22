#include<stdio.h>
int main() {
	
	int array1[7]={0};
	int array2[7]={0};
	int array3[7]={0};
	
	//getting inputs from user to a 1D array
	for(int i=0;i<7;i++){
		printf("Inser array 1[%d]: ",i);
		scanf("%d",&array1[i]);
	}
	//reverse a 1D array and store in another array
	for(int i=6;i>=0;i--){
		array2[6-i]=array1[i];
	}
	
	for(int i=0;i<7;i++){
		array3[i]=array1[i]+array2[i];
	}
	//printing a 1D array
	for(int i=0;i<7;i++){
		printf("%d\t",array3[i]);
	}
	
	return 0;
}