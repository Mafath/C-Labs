//#include<stdio.h>
//int main() {
//	
//	int array1[7];
//	int array2[7];
//	int array3[7];
//	int temp;
//	
//	for(int i=0;i<7;i++){
//		printf("Insert array1[%d]: ",i+1);
//		scanf("%d", &array1[i]);
//	}
//	
//	for(int i=0;i<7;i++){
//		array2[i]=array1[i]*array1[i];
//	}
//
//	printf("Array1\n");	
//	for(int i=0;i<7;i++){
//		printf("%d ",array1[i]);
//	}
//	
//	printf("\nArray2\n");	
//	for(int i=0;i<7;i++){
//		printf("%d ",array2[i]);
//	}
//	
//	for(int i=0;i<7;i++){
//		array3[i]=array1[i]+array2[i];
//	}
//	
//	printf("\nArray3\n");	
//	printf("Index\tValue\n");	
//	for(int i=0;i<7;i++){
//		printf("%d\t%d\n",i,array3[i]);
//	}
//	
//	return 0;
//}

#include<stdio.h>
int main() {
	
	int matrix[5][5];
//	int news[5][5],temp;  //with using an additional array
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//with using an additional array
	
//	for(int i=0;i<5;i++){
//		for(int j=0;j<5;j++){
//			temp=matrix[i][j];
//			news[i][j]=matrix[i][5-1-j];
//			news[i][5-1-j]=temp;
//		}
//	}
//	
//	for(int i=0;i<5;i++){
//		for(int j=0;j<5;j++){
//			printf("%d ",news[i][j]);
//		}
//		printf("\n");
//	}
	
	for(int i=0;i<5;i++){
		for(int j=4;j>=0;j--){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}