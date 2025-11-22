#include<stdio.h>
int main() {
	
	int array1[10]={0};
	int array2[5]={0};
	int array3[2]={0};
	
	int count=0,evenSum=0,oddSum=0;
	
	
	for(int i=0;i<10;i++){
		printf("Insert array[%d]: ",i);
		scanf("%d",&array1[i]);
	}
	
	for(int i=0;i<10;i++){
		if(array1[i]%2==0){
			array2[count]=array1[i];
			count++;
			evenSum+=array1[i];
		}
		else{
			oddSum+=array1[i];
		}
	}
	
	for(int i=0;i<7;i++){
		array3[i]=array1[i]+array2[i];
	}
	
	
	printf("The sum of even numbers: %d\n", evenSum);
	printf("The sum of odd numbers: %d", oddSum);
	
	return 0;
}