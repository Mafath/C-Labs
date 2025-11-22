#include<stdio.h>
int main() {
	
	//creating the file for writing
	FILE *fpointer;
	fpointer=fopen("answers.dat","w");

	if(fpointer==NULL){  //check if the text file created successfully
		printf("Unable to create file");
		return -1;
	}

	//declaring variables
	char stdId[20];
	int ans1,ans2,ans3,ans4;
	int count=0;//assigning 0 to count value
	
	//get the student ID and answers for 4 questions from 5 students
	for(int i=0;i<5;i++){
		printf("Enter student ID: ");
		scanf("%s",stdId);
		
		printf("Answer 1: ");
		scanf("%d",&ans1);
		printf("Answer 2: ");
		scanf("%d",&ans2);
		printf("Answer 3: ");
		scanf("%d",&ans3);
		printf("Answer 4: ");
		scanf("%d",&ans4);
		printf("\n");
		
		//write the data to the text file
		fprintf(fpointer,"%s\t%d %d %d %d\n",stdId,ans1,ans2,ans3,ans4);	
	}
	
	fclose(fpointer);//close the text file

	//Reopen the text file for reading
	fpointer=fopen("answers.dat","r");
	
	if(fpointer==NULL){   //check if the text file opened successfully
		printf("Unable to create file");
		return -1;
	}
	
	while(fscanf(fpointer,"%s%d%d%d%d",&stdId,&ans1,&ans2,&ans3,&ans4)!=EOF){
		printf("%s\n",stdId);
		
		//checking whether answers are correct or not
		if(ans1==1){
			count++;
		}
		if(ans2==4){
			count++;
		}
		if(ans3==2){
			count++;
		}
		if(ans4==3){
			count++;
		}
		//display number of correct answers of each student
		printf("Number of correct answers: %d\n",count);
		count=0;
	}
	
	fclose(fpointer);//close the text file
	
	return 0;
}