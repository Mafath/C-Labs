//header file
#include<stdio.h>
#define SIZE1 4
#define SIZE2 4

//main method
int main(){
	
	int image[SIZE1][SIZE2];
	int i,j;
	
	
	for(i=0;i<SIZE1;i++){
		
		printf("Values for row %d",i+1);
		
		printf("\n");
		
		for(j=0;j<SIZE2;j++){
			
			printf("Enter element : ");
			scanf("%d",&image[i][j]);
		}	
		printf("\n");		
	}
	
	
	for(i=0;i<SIZE1;i++){

		for(j=0;j<SIZE2;j++){
						
		printf(" %d",image[i][j]);
			
		}
		printf("\n");
						
	}
	printf("\n");
			
	
	for(i=0;i<SIZE1;i++){
	
	
		for(j=0;j<SIZE2;j++){
				
			if(image[i][j]>55){
					
				image[i][j]=1;
					
			}else if((image[i][j]>0)&&(image[i][j]<55)){
					
				image[i][j]=0;
			}

		}	
			
	}
	
	for(i=0;i<SIZE1;i++){
	
	
		for(j=0;j<SIZE2;j++){
					
			printf(" %d",image[i][j]);
				
		}	
		printf("\n");
					
	}
	
	
	return 0;
}//end of main method
