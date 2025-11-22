#include<stdio.h>
int main() {
	
	float rainArr[7];
	float max,min,sum,average;
	
	for(int i=0;i<7;i++){
		printf("Input the rainfall of day %d: ",i+1);
		scanf("%f",&rainArr[i]);
	}
	
	
	max=rainArr[0];
	min=rainArr[0];
	for(int i=0;i<7;i++){
		sum+=rainArr[i];
		average = sum/(i+1);
		if(rainArr[i]>max){
			max=rainArr[i];
		}
		if(rainArr[i]<min){
			min=rainArr[i];
		}
		printf("\nDay 1 to %d\n\n",i+1);
		printf("Average rainfall: %.2f mm\n", average);
		printf("Maximum rainfall: %.2f mm\n", max);
		printf("Minimum rainfall: %.2f mm\n", min);
	}
	
	return 0;
}