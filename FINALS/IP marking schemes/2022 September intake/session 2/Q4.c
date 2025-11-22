//header file
#include<stdio.h>
#include<string.h>

//main method
int main(){
	
	char name[10],newName[10];
	int phoneNo,no;
	int i;
	
	FILE*cfPtr;
	
	cfPtr=fopen("Directory.dat","w");
	
	if(cfPtr==NULL){
		printf("Cannot create file");
		return -1;
	}
	for(i=0;i<2;i++){
		
		printf("enter name :");
		scanf("%s",&name);
		printf("enter telephone number :");
		scanf("%d",&phoneNo);
		
	fprintf(cfPtr,"%s %d\n",name,phoneNo);
	}
	
	fclose(cfPtr);		

	
	
	FILE*hfPtr;
	
	hfPtr=fopen("Directory.dat","r");
	
	printf("enter name :");
	scanf("%s",&newName);
	
	fscanf(hfPtr,"%s %d",&name,&phoneNo);
	
	while(!feof(hfPtr)){
		if(strcmp(newName,name)==0){
		no=phoneNo;
		strcpy(newName,name);
		break;
		}
		
		fscanf(hfPtr,"%s %d ",&name,&phoneNo);	
	}

	if(strcmp(newName,name)==1){
		printf("No\n");
	}
	else{
		printf("Exist\n");
		printf("%s %d",newName,phoneNo);	
	}
		
			
	fclose(hfPtr);		
	
	return 0;
}//end of main method
