#include<stdio.h>
int main() {
	
	float total1=0,total2=0;
	float salesArr[2][3];
	
	//getting inputs
	for(int j=0;j<2;j++){
		printf("Enter the sales amount of sales person %d\n",j+1);
		for(int i=0;i<3;i++){
			printf("Product %d: ",i+1);
			scanf("%f", &salesArr[j][i]);
		}		
	}

	//display output
	printf("The sales amount of 2 sales persons for 3 products.\n");
	for(int i=0;i<2;i++){
		for (int j=0;j<3;j++){
			printf("%.2f\t\t", salesArr[i][j]);
		}
		printf("\n");
	}	
	
	
	
	for(int i=0;i<3;i++){
		total1+=salesArr[0][i];
	}
	for(int i=0;i<3;i++){
		total2+=salesArr[1][i];
	}
	
	printf("Total 1= %.2f\n",total1);
	printf("Total 2= %.2f",total2);
	return 0;
}