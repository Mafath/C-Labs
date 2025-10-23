// Interactive student marks calculator - calculates total marks for students
// across 3 subjects each, allows user to continue with more students (y/n)
#include<stdio.h>
int main() {
	
	int playerCount = 1;
	int total=0,i,mark;
	char des;
	
	do{
		printf("Enter the marks of student %d(between 0 - 10)\n", playerCount);
		for(i=1; i<=3;i++){
			printf("mark %d - ",i);
			scanf("%d", &mark);
			total+=mark;
		}
		printf("Total marks - %d\n", total);
		i=1;
		total=0;
		
		printf("Do you want to enter mark of another student(y/n)?");
		scanf(" %c", &des);
		printf("\n");
		
		playerCount++;
		
	}while(des=='y' || des=='Y');
	
	
	
	return 0;
}