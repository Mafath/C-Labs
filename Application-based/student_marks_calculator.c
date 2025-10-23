// Student marks calculator - calculates total marks for multiple students
// across 3 subjects each, displays individual student totals
#include<stdio.h>
int main() {
	
	int count,i,j;
	float mark, total=0;
	
	printf("How many students are in the module:");
	scanf("%d", &count);
	
	for(i=1; i<=count; i++) {
		
		printf("Enter the marks of student %d(between 0 - 10)\n", i);

		for(j=1;j<=3;j++) {
			printf("mark %d - ",j);
			scanf("%f", &mark);
			total+=mark;
		}
		printf("Total marks - %.0f\n", total);
		printf("\n");
		j=0;
		total=0;
	}
	
	
	
	return 0;
}