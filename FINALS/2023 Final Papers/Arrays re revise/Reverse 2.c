//1D arrays with using an additional array
#include<stdio.h>
int main() {
	
	int array1[7]={1,2,3,4,5,6,7};
	int temp,array2[7];
	
	for(int i=0;i<7;i++){
		printf("%d ",array1[i]);
	}
	
	for(int i=0;i<7;i++){
		temp =array1[i];
		array2[i]=array1[7-1-i];
		array2[7-1-i]=temp;
	}

	printf("\n");
	for(int i=0;i<7;i++){
		printf("%d ",array2[i]);
	}
	
	return 0;
}