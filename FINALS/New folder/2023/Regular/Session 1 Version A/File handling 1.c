#include<stdio.h>
#include<string.h>
int main() {
	
	
	FILE *fpointer;
/*	
	fpointer=fopen("item.dat","w");
	if(fpointer==NULL) {
		printf("Unable to create file\n");
		return -1;
	}
*/	
	int code;
	char name[20],checkName[20];
/*	
	for(int i=1;i<=4;i++){
		printf("Enter item code: ");
		scanf("%d",&code);
		printf("Enter item: ");
		scanf("%s",&name);
		
		fprintf(fpointer,"%d\t%s\n",code,name);		
	}
	
	fclose(fpointer);
*/
	
	fpointer=fopen("item.dat","a+");
	if(fpointer==NULL) {
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("Enter item name to check: ");
	scanf("%s",&checkName);
	
	while(!feof(fpointer)){
		fscanf(fpointer,"%d %s",&code,&name);
		
		if(strcmp(name,checkName)==0){
			break;
		}
	}

	if(strcmp(name,checkName)==1){
		printf("No item found!\n");
	}
	else{
		printf("Item found\n");
		printf("Item code = %d\nItem name = %s",code,name);
	}
	
	fclose(fpointer);
	
	return 0;
}