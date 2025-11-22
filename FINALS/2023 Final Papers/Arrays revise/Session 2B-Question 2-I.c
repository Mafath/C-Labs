#include<stdio.h>
int main() {
	
	int max=0,index=0;
	
	int array1[7]={2,4,6,8,10,12,14};
	int array2[7]={0};
	int array3[7]={0};
	
	for(int i=0;i<7;i++){
		array2[i]=array1[i]*array1[i];
	}
	
	for(int i=0;i<7;i++){
		array3[i]=array1[i]+array2[i];
	}
	
	for(int i=0;i<7;i++){
		if(max<array3[i]){
			max=array3[i];
			index=i;
		}
	}
	
	printf("\nMax Index\tValue\n");
	printf("%d\t\t%d", index,max);
	
	return 0;
}