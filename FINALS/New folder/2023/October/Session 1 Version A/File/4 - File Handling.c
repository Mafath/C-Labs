#include<stdio.h>
int main() {
	
	FILE *fpointer;
/*	
	fpointer=fopen("orders.dat","w");
	if(fpointer==NULL){
		printf("Unable to create file\n");
		return -1;
	}
*/	
	char type,size;
	int num,id=1;
/*	
	while(1){
		printf("Type of pizza: ");
		scanf(" %c",&type);
		if(type=='-'){
			break;
		}
		printf("Size: ");
		scanf(" %c",&size);
		printf("Number of pizza: ");
		scanf("%d",&num);
		
		fprintf(fpointer,"%d\t%c\t%c\t%d\n",id++,type,size,num);
	}
	
	fclose(fpointer);
*/	
	
	fpointer=fopen("orders.dat","r");
	if(fpointer==NULL){
		printf("Unable to open file\n");
		return -1;
	}
	
	int vr=0,vl=0,cr=0,cl=0,sr=0,sl=0;
	
	while(fscanf(fpointer,"%d %c %c %d",&id,&type,&size,&num)!=EOF){
		if(type=='V'){
			if(size=='R'){
				vr+=num;
			}
			else if(size=='L'){
				vl+=num;
			}
		}
		
		if(type=='C'){
			if(size=='R'){
				cr+=num;
			}
			else if(size=='L'){
				cl+=num;
			}
		}
		
		if(type=='S'){
			if(size=='R'){
				sr+=num;
			}
			else if(size=='L'){
				sl+=num;
			}
		}
		
	}
	
	printf("Veggie Pizza\n");
	printf("\tRegular\t-%d\n",vr);
	printf("\tLarge\t-%d\n",vl);
	
	printf("Chicken Pizza\n");
	printf("\tRegular\t-%d\n",cr);
	printf("\tLarge\t-%d\n",cl);
	
	printf("Seafood Pizza\n");
	printf("\tRegular\t-%d\n",sr);
	printf("\tLarge\t-%d\n",sl);
	
	
	fclose(fpointer);
	
	return 0;
}