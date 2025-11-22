#include<stdio.h>
int main() {
	
	FILE *fpointer;
	char name[10], newName[10];
	int no;
	
	fpointer=fopen("directory.txt","w");
	if(fpointer==NULL){
		printf("Unable to create file\n");
		return -1;
	}
	for(int i=0;i<2;i++){
		printf("Enter name: ");
		scanf("%s",&name);
		printf("Enter number: ");
		scanf("%d",&no);
		
		fprintf(fpointer,"%s\t%d\n",name,no);	
	}
	
	fclose(fpointer);


	fpointer(fopen,"directory.txt","r");
	if(fpointer==NULL){
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("enter name to check: ");
	scanf("%s",&newName);
	
	while(fscanf(fpointer,"%s%d",&name,no)!=EOF){
		if(strcmp(newName,name)==0){
			
		}
	}
	
	
	
	
	return 0;
}