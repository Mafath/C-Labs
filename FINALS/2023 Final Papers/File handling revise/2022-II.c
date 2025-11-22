#include<stdio.h>

int main() {
	
	int id,qty;
	char type,size;
	int vrCount=0,vlCount=0,crCount=0,clCount=0,srCount=0,slCount=0;
	
	FILE *fpointer;
	
	fpointer = fopen("orders.dat","r");
	
	if(fpointer == NULL){
		printf("Unable to open file\n");
	}
	
	while(fscanf(fpointer,"%d %c %c %d",&id,&type,&size,&qty)!=EOF){
		
		if(type=='V' || type=='v'){
			if(size=='R' || size=='r'){
				vrCount+=qty;
			}
			else if(size=='L' || size=='l'){
				vlCount+=qty;
			}
		}

		else if(type=='C' || type=='c'){
			if(size=='R' || size=='r'){
				crCount+=qty;
			}
			else if(size=='L' || size=='l'){
				clCount+=qty;
			}
		}
		
		else if(type=='S' || type=='s'){
			if(size=='R' || size=='r'){
				srCount+=qty;
			}
			else if(size=='L' || size=='l'){
				slCount+=qty;
			}
		}
	}
	
	printf("Veggie Pizza\n\tRegular\t-%d\n\tLarge\t-%d\n",vrCount,vlCount);
	printf("Chicken Pizza\n\tRegular\t-%d\n\tLarge\t-%d\n",crCount,clCount);
	printf("Seafood Pizza\n\tRegular\t-%d\n\tLarge\t-%d",srCount,slCount);
	
	
	fclose(fpointer);
	
	return 0;
}