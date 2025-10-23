// Grade average calculator with input validation - calculates average of 5 marks
// validates input range (0-100), handles invalid inputs gracefully
#include<stdio.h>
int main() {
	
	int mark,sum=0;
	int i;
	float average;
	
	for(i=1; i<=5; i++) {
		printf("Input the mark number %d : ", i);
		scanf("%d", &mark);
		if(mark>=0 && mark<=100) {
			sum+=mark;
		}
		else{
			printf("Invalid input!!\n");
			i--;
		}
	}
	
	average = (float)sum /5;
	printf("Average of the 5 mark is : %.2f", average);
	
	
	
	return 0;
}