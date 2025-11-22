//#include<stdio.h>
//int main() {
//	
//	int array1[10]={0};//all
//	int array2[5]={0};//even
//	int array3[2]={0};//odd
//	int count=0,sum1=0,sum2=0;
//	
//	for(int i=0;i<10;i++){
//		printf("Insert array 1[%d]: ",i+1);
//		scanf("%d", &array1[i]);
//	}
//	//assigning values to array2 and getting the sum of those
//	for(int i=0;i<10;i++){
//		if(array1[i]%2==0){
//			array2[count]=array1[i];
//			sum2+=array2[count];
//			count++;
//		}
//	}
//	//getting the sum of array1 elements
//	for(int i=0;i<10;i++){
//		sum1+=array1[i];
//	}
//
//	array3[0]=sum1;
//	array3[1]=sum2;
//
//	//display the sums of array1,array2
//	printf("\nArray 1 sum: %d\n",array3[0]);
//	printf("Array 2 sum(sum of even numbers): %d\n",array3[1]);
//	printf("sum of odd numbers: %d\n",array3[0]-array3[1]);
//	
//
//	return 0;
//}

#include<stdio.h>
int main() {
	
	float transDetails[3][3];
	float deposits,withdrawals,limit;
	
	
	for(int i=0;i<3;i++){
		printf("Input the account details for customer %d\n", i+1);
		
		printf("Input the total deposits: ");
		scanf("%f",&deposits);
		printf("Input the total withdrawals: ");
		scanf("%f",&withdrawals);
		printf("Input the withdrawal limit: ");
		scanf("%f",&limit);
		if(deposits<0 || withdrawals<0 || limit<0){
			printf("Totals deposits, withdrawals, and withdrawal limits can't be negative\n\n");
			i--;
			continue;
		}
		else{
			transDetails[i][0]=deposits;
			transDetails[i][1]=withdrawals;
			transDetails[i][2]=limit;
			printf("\n");
		}
	}
		
	printf("\n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%.2f    ",transDetails[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}











