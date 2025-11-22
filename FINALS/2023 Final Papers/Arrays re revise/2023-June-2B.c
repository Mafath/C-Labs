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
//	int max=array3[1];
//	int index;
//	for(int i=0;i<7;i++){
//		array3[i]=array1[i]+array2[i];
//		if(array3[i]>max){
//			max=array3[i];
//			index=i;
//		}
//	}
//	
//	printf("\n\nMax Index\tValue\n");
//	printf("%5d%15d", index,max);
//	
//	return 0;
//}

#include<stdio.h>
int main() {
	
	int myArr[4][4];
	int num;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Enter %d,%d: ",i+1,j+1);
			scanf("%d",&myArr[i][j]);
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",myArr[i][j]);
		}
		printf("\n");
	}
	
	printf("Inout a number to check: ");
	scanf("%d",&num);

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(myArr[i][j]==num){
				x=i;
				y=j;
				newArr[row][column]=;
			}
		}
	}

	
//	for(int i=0;i<4;i++){
//		for(int j=0;j<4;j++){
//			if(myArr[i][j]==num){
//				
//			}
//		}
//	}
	
	return 0;
}