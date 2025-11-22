#include<stdio.h>
int main() {
	
	int array1[7]={0};
	int array2[7]={0};
	int array3[7]={0};
	int j,k;
	
	
	for(int i=0;i<7;i++){
		printf("Insert array 1[%d]: ",i);
		scanf("%d",&array1[i]);
	}
	
	for(j=0,k=6; j<7; j++,k--){
		array2[j]=array1[k];
	}
	
	for(int i=0;i<7;i++){
		array3[i]=array1[i]+array2[i];
	}
	
	printf("\nArray 3\n");
	for(int i=0;i<7;i++){
		printf("%d\t", array3[i]);
	}
	
	
	
/*	
	printf("\nArray 1\n");
	for(int i=0;i<7;i++){
		printf("%d ", array1[i]);
	}
	
	printf("\nArray 2\n");
	for(int i=0;i<7;i++){
		printf("%d ", array2[i]);
	}
*/
	return 0;
}