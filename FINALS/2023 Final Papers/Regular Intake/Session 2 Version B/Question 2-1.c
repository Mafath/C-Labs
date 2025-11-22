#include<stdio.h>
int main() {
	
	float stMarks[8];
	float sum=0,avg,diff;
	int count=0;
	
	for(int i=0;i<8;i++){
		printf("Enter marks of student %d: ",i+1);
		scanf("%f", &stMarks[i]);
	}

	float min=stMarks[0];
	float max=stMarks[0];
	
	for(int i=0;i<8;i++){
		sum+=stMarks[i];
		if(stMarks[i]<min){
			min=stMarks[i];
		}
		if(stMarks[i]>max){
			max=stMarks[i];
		}
	}
	
	avg=sum/8;
	printf("Average = %.1f\n",avg);
	printf("min = %.1f\n",min);
	
	for(int i=0;i<8;i++){
		if(stMarks[i]<avg){
			count++;
		}
	}
	printf("number of students who obtained marks lower than average: %d\n", count);
	
	diff=max-min;
	printf("Different: %.1f",diff);
	
	return 0;
}