//DO NOT use
#include<stdio.h>
#include<string.h>
int main(){
	int Icode,NewItemCode;
	char Name[20],checkName[20];
	
	//read file
	FILE *ptr2;
	ptr2=fopen("Items.txt","a+");
	
	if(ptr2==NULL){
		printf("Cant read File!\n");
	}
	
	printf("Enter check item name: ");
	scanf("%s",&checkName);
	
	//looping all file content
	while(!feof(ptr2)){
		fscanf(ptr2,"%d %s",&Icode,&Name);
		
		if(strcmp(checkName,Name)==0){
			break;
		}
	}
	
	if(strcmp(checkName,Name)==1){
		printf("No item found!\n");
		printf("enter new item code: ");
		scanf("%d",&NewItemCode);
		fprintf(ptr2,"\n%d\t%s",NewItemCode,checkName);
	}
	else{
		printf("Exist\n");
		printf("%d %s",Icode,Name);
	}
	
	fclose(ptr2);
	return 0;
}