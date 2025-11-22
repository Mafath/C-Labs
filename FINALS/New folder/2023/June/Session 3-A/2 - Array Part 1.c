#include<stdio.h>
int main() {
	
	int array1[10]={0};
	int array2[5]={0};
	int array3[2]={0};
	
	for(int i=0;i<10;i++){
		printf("Insert array 1[%d]: ",i);
		scanf("%d",&array1[i]);
	}
	
	int n=0;
	for(int i=0;i<10;i++){
		if(array1[i]%2==0){
			array2[n]=array1[i];
			n++;
		}
	}
	
	int sum1=0;
	for(int i=0;i<10;i++){
		sum1+=array1[i];
	}
	array3[0]=sum1;
	
	int sum2=0;
	for(int i=0;i<5;i++){
		sum2+=array2[i];
	}
	array3[1]=sum2;
	
	
	printf("\nThe sum of even numbers: %d\n",sum2);
	printf("The sum of odd numbers: %d\n",sum1-sum2);

	
	return 0;
}