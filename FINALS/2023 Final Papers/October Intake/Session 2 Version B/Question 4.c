#include<stdio.h>
int main (){
	
	FILE *fpointer;
	char name,type;
	int num;
	
	fpointer= fopen("purchases.dat","w");
	
	if(fpointer ==NULL){
		printf("Unable to create file.\n");
	}
	
	for(int i=0;i<5;i++){
		printf("\nEnter the movie name(H/F/S): ");
		scanf(" %c", &name);
		
		printf("Enter ticket type(B/N): ");
		scanf(" %c",&type);
		
		printf("enter number of tickets: ");
		scanf("%d",&num);
		
		fprintf(fpointer,"%c\t%c\t%d\n", name,type,num);		
	}
	
	fclose(fpointer);
	
	
	
	
	
	
	FILE *ffpointer;
	int harrybCount=0,harrynCount=0,frozenbCount=0,frozennCount=0,sherlockbCount=0,sherlocknCount=0;
	
	
	ffpointer = fopen("purchases.dat","r");
	
	if(ffpointer==NULL){
		printf("Unable to open file\n");
	}
	
	
	while(fscanf(ffpointer," %c %c %d",&name,&type,&num)!=EOF){
		if(name=='H' || name=='h'){
			if(type=='B' || type=='b'){
				harrybCount+=num;
			}
			else if(type=='N' || type=='n'){
				harrynCount+=num;
			}
		}
		else if(name=='F' || name=='f'){
			if(type=='B' || type=='b'){
				frozenbCount+=num;
			}
			else if(type=='N' || type=='n'){
				frozennCount+=num;
			}
		}
		else if(name=='S' || name=='s'){
			if(type=='B' || type=='b'){
				sherlockbCount+=num;
			}
			else if(type=='N' || type=='n'){
				sherlocknCount+=num;
			}
		}
	}
	
	printf("Harry Portor\n");
	printf("\tBalcony\t-%d\n",harrybCount);
	printf("\tNormal\t-%d\n",harrynCount);
	
	printf("Frozon-II\n");
	printf("\tBalcony\t-%d\n",frozenbCount);
	printf("\tNormal\t-%d\n",frozennCount);
	
	printf("Sherlock Homes\n");
	printf("\tBalcony\t-%d\n",sherlockbCount);
	printf("\tNormal\t-%d\n",sherlocknCount);
	
	
	fclose(ffpointer);
	
	return 0;
}