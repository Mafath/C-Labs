// Sales analysis system - tracks 3 items with prices and quantities sold,
// calculates sales revenue for each item, then finds the item with highest income
#include<stdio.h>
int main() {
	
	float item[3]={120.00,40.00,250.00};
	int qtySold[3];
	int newArr[3];
	int max=0;
	int number;
	
	for(int i=0;i<3;i++) {
		printf("Enter quantity for item %d: ",i+1);
		scanf("%d",&qtySold[i]);
	}
	
	for(int i=0;i<3;i++){
		newArr[i] = item[i]*qtySold[i];
		if(newArr[i]>max){
			max=newArr[i];
			number=i+1;
		}
	}
	
	printf("\nItem array\n");
	for(int i=0;i<3;i++){
		printf("%.2f",item[i]);
		if(i!=2){
			printf(", ");
		}
	}
	
	printf("\nqtySold array\n");
	for(int i=0;i<3;i++){
		printf("%d",qtySold[i]);
		if(i!=2){
			printf(", ");
		}
	}
	
	printf("\nItem which generate highest income: %d", number);

	
	return 0;
}