#include <stdio.h>
int main(void)
{
	char id[10];
	int studentAnswers[4];
	int correctAnswers[4] = {1, 4, 2, 3};
	int i, j, count;
	
	FILE *ptr;
	
	ptr = fopen("answers.dat", "w");
	if(ptr == NULL){	
		printf("File not opened...");
		return -1;
	}
	for(i = 1; i <= 5; i++){
		printf("Enter student ID : ");
		scanf("%s", id);
		fprintf(ptr, "%s ", id);
		
		for(j = 0; j < 4; j++){
			printf("Enter answer(0 - 5) : ");
			scanf("%d", &studentAnswers[j]);
			fprintf(ptr, "%d ", studentAnswers[j]);
		}
		
		printf("\n");
		fprintf(ptr, "\n");
	}
	fclose(ptr);






	ptr = fopen("answers.dat", "r");
	if(ptr == NULL){
		printf("File not opend...");
		return -1;
	}
	printf("ID\tNo. of correct answers\n");
	fscanf(ptr, "%s", id);
	
	for(j = 0; j < 4; j++){
		fscanf(ptr, "%d", &studentAnswers[j]);
	}
	while(!feof(ptr)){
		count = 0;
		for(j = 0; j < 4; j++){
			if(correctAnswers[j] == studentAnswers[j])
			count++;
		}
		printf("%s\t%d\n", id, count);
		fscanf(ptr, "%s", id);
		for(j = 0; j < 4; j++){
			fscanf(ptr, "%d", &studentAnswers[j]);
		}
	}
	
	fclose(ptr);
	
	
	 return 0;
}