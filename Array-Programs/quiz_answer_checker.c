// Quiz grading system - compares student's True/False answers against correct answers,
// counts correct responses and displays the score
#include<stdio.h>
int main() {
	
	char correctAns[6]={'T','F','F','T','F','T'};
	char stdAns[6];
	
	int count = 0;
	
	for(int i=0;i<6;i++) {
		printf("Enter answer %d: ", i+1);
		scanf(" %c", &stdAns[i]);
	}
	
	
	printf("\nCorrect Answers\n");
	for(int j=0; j<6;j++) {
		printf("%c, ",correctAns[j]);
	}
	
	printf("\nStudent Answers\n");
	for(int k=0; k<6;k++) {
		printf("%c, ",stdAns[k]);
	}
	
	
	
	for(int m=0;m<6;m++) {
		if(correctAns[m]==stdAns[m]){
			count++;
		}
	}
	
	printf("\nnumber of correct answers : %d", count);
	
	return 0;
}