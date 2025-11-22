//#include<stdio.h>
//int main() {
//	
//	int userRating[5]={0};
//	int num;
//	
//	
//	do{
//		printf("Enter ur rating: ");
//		scanf("%d", &num);
//		if(num==1){
//			userRating[0]++;
//		}
//		else if(num==2){
//			userRating[1]++;
//		}
//		else if(num==3){
//			userRating[2]++;
//		}
//		else if(num==4){
//			userRating[3]++;
//		}
//		else if(num==5){
//			userRating[4]++;
//		}
//		else{
//			printf("Invalid rating\n\n");
//		}
//		
//		
//    }while(num!=-99);
//	
//	
//	for(int i=0;i<5;i++){
//		printf("%d\t",i+1);
//		for(int j=0;j<userRating[i];j++){
//			printf("* ");		
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

#include<stdio.h>
int main() {
	
	int userRating[5]={0};
	int num;
	
	printf("Enter ur rating: ");
	scanf("%d", &num);
	
	while(num!=-99){
		if(num==1){
			userRating[0]++;
		}
		else if(num==2){
			userRating[1]++;
		}
		else if(num==3){
			userRating[2]++;
		}
		else if(num==4){
			userRating[3]++;
		}
		else if(num==5){
			userRating[4]++;
		}
		else{
			printf("Invalid rating\n\n");
		}
		printf("Enter ur rating: ");
		scanf("%d", &num);	
    }
	
	for(int i=0;i<5;i++){
		printf("%d\t",i+1);
		for(int j=0;j<userRating[i];j++){
			printf("* ");		
		}
		printf("\n");
	}
	
	return 0;
}