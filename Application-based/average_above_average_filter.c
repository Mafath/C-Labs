// Average calculator with above-average filter - gets 10 numbers,
// calculates average, then finds and displays numbers above the average
#include<stdio.h>
int main() {
	
	int myArray[10];
	int newArray[10];
	int sum=0, count = 0;
	float average;
	
	printf("Enter the number series:\n");
	for(int i=0;i<10;i++) {
		scanf("%d",&myArray[i]);
		sum+=myArray[i];
	}
	
	
	average = (float)sum/10;
	printf("Average: %.1f",average);
	
	
	printf("\nmy Array: ");
	for(int i=0;i<10;i++) {
		printf("%d", myArray[i]);
		if(i!=9){
			printf(", ");
		}
	}
	
	for(int i=0;i<10;i++) {
		if(myArray[i]>average){
			newArray[count]=myArray[i];
			count++;
		}
	}
	
	printf("\nlarge Num: ");
	for(int i=0;i<count;i++) {
		printf("%d", newArray[i]);
		if(i!=(count-1)){
			printf(", ");
		}
	}
	
	
	return 0;
}