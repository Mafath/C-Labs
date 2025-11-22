#include<stdio.h>
int main(){
	
	int array1[10]={0};
	int array2[5]={0};
	int array3[2]={0};
	int j=0;
	int evenSum=0,oddSum=0;
	int arr1Sum=0,arr2Sum=0;
	
//	
	for(int i=0;i<10;i++){
		printf("Insert array 1[%d]: ",i);
		scanf("%d",&array1[i]);
	}
	
	for(int i=0,j;i<10;i++){
		if(array1[i]%2==0){
			array2[j]= array1[i];
			j++;
			evenSum+=array1[i];
		}
		else{
			oddSum+=array1[i];
		}
	}
	
	for(int i=0;i<10;i++){
		arr1Sum+=array1[i];
	}
	array3[0]=arr1Sum;
	printf("\nSum of elements in array 1: %d\n",array3[0]);
	
	for(int i=0;i<5;i++){
		arr2Sum+=array2[i];
	}
	array3[1]=arr2Sum;
	printf("\nSum of elements in array 2: %d\n",array3[1]);	
	
	printf("\nThe sum of even numbers: %d\n",evenSum);
	printf("The sum of odd numbers: %d\n",oddSum);
	
	return 0;
}