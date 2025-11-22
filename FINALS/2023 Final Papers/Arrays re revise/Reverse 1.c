//1D arrays without using an additional array(2 methods)
#include<stdio.h>
int main() {
	
	int array1[7]={1,2,3,4,5,6,7};
	
	for(int i=0;i<7;i++){
		printf("%d ",array1[i]);
	}
	
	printf("\n");
	for(int i=0;i<7;i++){
		printf("%d ",array1[6-i]);
	}
	
	printf("\n");
	for(int i=6;i>=0;i--){
		printf("%d ",array1[i]);
	}	

	
	return 0;
}