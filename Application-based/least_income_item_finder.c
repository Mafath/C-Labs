// Sales analysis system - tracks 3 items with prices and quantities sold,
// calculates sales revenue for each item, then finds the item with least income
#include<stdio.h>
int main() {
	
	float item[3]={90.00,55.00,20.00};
	int qtySold[3]={0};
	
	float min = __FLT_MAX__;
	int count;
	
	
	for(int i=0;i<3;i++) {
		printf("Enter quantity for item %d: ", i+1);
		scanf("%d", &qtySold[i]);
	}
	
	for(int j=0;j<3;j++) {
		float sales= item[j] * qtySold[j];
		if(sales<min) {
			min=sales;
			count = j+1;
		}
	}
	
	
	
	printf("Item aray\n");
	for(int k=0;k<3;k++) {
		printf("%.2f", item[k]);
		if(k!=3){
			printf(", ");
		}
	}
	
	printf("\nqtySold array\n");
	for(int m=0;m<3;m++) {
		printf("%d", qtySold[m]);
		if(m!=3){
			printf(", ");
		}
	}
	
	printf("\nItem which generate least income: %d", count);
	
	return 0;
}