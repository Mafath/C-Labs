#include<stdio.h>
int main() {
	
	int array1[7]={2,4,6,8,10,12,14};
	int array2[7];
	int array3[7];
	
	for(int i=0;i<7;i++){
		array2[i]=array1[i]*array1[i];
	}
	
	for(int i=0;i<7;i++){
		array3[i]=array1[i]+array2[i];
	}
	
	int max=array3[0];
	int index=0;
	for(int i=0;i<7;i++){
		if(array3[i]>max){
			max=array3[i];
			index=i;
		}
	}
	printf("MaxIndex\tValue\n");
	printf("%d\t\t%d",index,max);
	
	
	return 0;
}