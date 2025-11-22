#include<stdio.h>
int main() {
	
	int lines;
	char character1,character2;
	
	printf("Enter 1st character: ");
	scanf(" %c", &character1);
	printf("Enter 2nd character: ");
	scanf(" %c", &character2);
	printf("Enter number of lines: ");
	scanf("%d",&lines);
	
	for(int i=1;i<=lines;i++){
		for(int j=1;j<=i;j++){
			if(j%2==1){
				printf("%c ",character1);
			}
			else if(j%2==0){
				printf("%c ",character2);
			}
		}
		printf("\n");
	}
	
	return 0;
}

//#include<stdio.h>
//int main() {
//	
//	int lines;
//	char character1,character2;
//	
//	printf("Enter 1st character: ");
//	scanf(" %c", &character1);
//	printf("Enter 2nd character: ");
//	scanf(" %c", &character2);
//	printf("Enter number of lines: ");
//	scanf("%d",&lines);
//	
//	
//	for(int i=1;i<=lines;i++){
//		for(int j=lines;j>=i;j--){
//			printf(" ");
//		}
//		for(int j=1;j<=i;j++){
//			if(j%2==1){
//				printf("%c ",character1);
//			}
//			else if(j%2==0){
//			printf("%c ",character2);
//			}
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}