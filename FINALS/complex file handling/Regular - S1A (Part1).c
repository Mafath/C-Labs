#include<stdio.h>
int main(){
	int Icode;
	char Name[20],checkName[20];
	
	//write file
	FILE *ptr1;
	ptr1=fopen("Items.txt","w");
	
	if(ptr1==NULL){
		printf("Cant Open File!\n");
	}
	
	for(int i=0;i<5;i++){
		printf("Item Code: ");
		scanf("%d",&Icode);
		printf("Name: ");
		scanf("%s",&Name);
		
		fprintf(ptr1,"%d\t%s",Icode,Name);
		if(i!=4){
			printf("\n");
		}
	
	}
	fclose(ptr1);
	
	return 0;
}