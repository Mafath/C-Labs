#include<stdio.h>
int main() {
	
	int array1[7]={0};
	int array2[7]={0};
	int array3[7]={0};
	
	for(int i=0;i<7;i++){
		printf("Insert array 1 [%d]: ",i);
		scanf("%d",&array1[i]);
	}
	
	for(int i=0;i<7;i++){
		array2[i]=array1[6-i];
	}
	
	for(int i=0;i<7;i++){
		array3[i]=array1[i]+array2[i];
	}
	
	printf("\nArray 3\n");
	for(int i=0;i<7;i++){
		printf("%d\t",array3[i]);
	}
	
	
	return 0;
}