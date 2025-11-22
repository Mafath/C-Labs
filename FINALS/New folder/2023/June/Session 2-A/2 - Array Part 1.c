#include<stdio.h>
int main(){
	
	int array1[7]={2,4,6,8,10,12,14};
	int array2[7]={0};
	int array3[7]={0};
	int sum=0;
	
	
	for(int i=0;i<7;i++){
		array2[i]=array1[i]*array1[i];
	}
	
	for(int i=0;i<7;i++){
		array3[i]=array1[i]+array2[i];
		sum+=array3[i];
	}
	
	printf("Index\tValue\n");
	for(int i=0;i<7;i++){
		printf("%d\t%d\n",i,array3[i]);
	}
	
	printf("\nTotal of array3 element is %d",sum);
	
	return 0;
}
