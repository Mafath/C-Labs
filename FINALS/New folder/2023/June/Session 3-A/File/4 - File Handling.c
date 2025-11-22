#include<stdio.h>
#include<string.h>
int main() {
	
	FILE *fpointer;
/*	
	fpointer=fopen("rain.txt","w");
	if(fpointer==NULL) {
		printf("Unable to create file\n");
		return -1;
	}
*/	
	char day[15];
	int amount;
/*	
	for(int i=1;i<=7;i++){
		printf("Ener day: ");
		scanf("%s",&day);
		
		printf("Rainfall(mm): ");
		scanf("%d",&amount);
		printf("\n");
		
		fprintf(fpointer,"%s\t%d\n",day,amount);
	}
	
	fclose(fpointer);
*/


	fpointer=fopen("rain.txt","r");
	if(fpointer==NULL) {
		printf("Unable to open file\n");
		return -1;
	}
	
	int max;
//	int min;
	char store[15];
	
	fscanf(fpointer,"%s %d",&day,&amount);
	max=amount;
//	min=amount;
	strcpy(store,day);
	
	while(fscanf(fpointer,"%s %d",&day,&amount)!=EOF){
		if(amount>max){
			max=amount;
			strcpy(store,day);
		}
//		if(min>amount){
//			min=amount;
//			strcpy(store,day);
//		}
	}
	
	printf("\n%s\t%d mm",store,max);
	
	fclose(fpointer);
	
	return 0;
}