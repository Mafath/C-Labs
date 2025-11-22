#include<stdio.h>
int main() {
	
	float sales[2][3];
	float sum1=0,sum2=0;
	int count;
	
	for(int i=0;i<2;i++){
		printf("Enter the sales amount of sales person %d.\n",i+1);
		for(int j=0;j<3;j++){
			printf("\tProduct %d: ",j+1);
			scanf("%f",&sales[i][j]);	
		}
	}
	
	printf("\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%.2f    ",sales[i][j]);
		}
		printf("\n");
	}
	

	for(int j=0;j<3;j++){
		sum1+=sales[0][j];
	}
	
	for(int j=0;j<3;j++){
		sum2+=sales[1][j];
	}
	
	printf("sum1 %.2f\n",sum1);
	printf("sum2 %.2f\n",sum2);
	
	if(sum1>sum2){
		count=1;
	}
	else if(sum1<sum2){
		count=2;
	}
	printf("\nThe sales person with highest sales amount is sales person %d",count);
	
	return 0;
}