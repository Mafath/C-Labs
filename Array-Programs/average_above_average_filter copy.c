// Average calculator with above-average filter - gets 10 numbers,
// calculates average, then finds and displays numbers above the average
#include<stdio.h>
int main(){
	
	int myArray[10];
	int largeNum[10];
	int sum=0,count=0;
	float avg=0;
	
	
	printf("Enter number series: \n");
	for(int i=0;i<10;i++){
		scanf("%d",&myArray[i]);
		sum+=myArray[i];
	}
	
	avg = (float)sum/10;
	printf("\nAverage: %.1f\n", avg);
	
	printf("myArray: ");
	for(int j=0;j<10;j++){
		printf("%d ",myArray[j]);
	}
	
	for(int k=0;k<10;k++){
		if(myArray[k]>avg){
			largeNum[count]=myArray[k];
			count++;
		}
	}
	
	printf("\nlargeNum: ");
	for(int m=0;m<count;m++){
		printf("%d ",largeNum[m]);
	}
	
	return 0;
}