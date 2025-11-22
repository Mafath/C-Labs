#include<stdio.h>
#define MaxRating 5
int main(){
	
	
	int userRating[5] = {0,0,0,0,0};
	
	while(1){
		
		int rNum;
		printf("Enter your rating :");
		scanf("%d",&rNum);
		
		if(rNum == -99){
			break;
		}else{
			
			if(rNum >= 1 && rNum <=5){
				
				if(rNum == 1){
					userRating[0] = userRating[0] + 1;
				}else if(rNum == 2){
					userRating[1] = userRating[1] + 1;
				}else if(rNum == 3){
					userRating[2] = userRating[2] + 1;
				}else if(rNum == 4){
					userRating[3] = userRating[3] + 1;
				}else if(rNum == 5){
					userRating[4] = userRating[4] + 1;
				}
			}
		}	
	}
	int x;
	for(x=0;x<5;x++){
		
		printf("%d",x+1);
		
		int i;
		for(i=0;i <userRating[x]; i++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
	
}
