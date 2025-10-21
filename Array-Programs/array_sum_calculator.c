// Array sum calculator - gets 5 numbers from user, stores them in an array,
// then calculates and displays the total sum of all elements

//# include <stdio.h>
//# define SIZE 5
//int  main(void)
//{
//	int a[ SIZE ] ;
//	int i,j;
//	int total = 0; // sum of array
//	
//	for( i = 0; i   < SIZE; ++i){
//		
//		printf("\na[ i ] = ");
//		scanf("%d", &a[ i ]);      		
//    }
//    
//	for(j=0; j<SIZE; ++j)
//     	total += a[ j ];
//     	
//	printf("Total of array elements is %d \n", total); 
//}

#include<stdio.h>
int main() {
	
	int myArray[5];
	int i,j;
	int total= 0;
	
	for(i=0; i<5; i++) {
		printf("Enter number %d: ", i+1);
		scanf("%d",&myArray[i]);
	}
	
	for(j=0; j<5; j++) {
		total+=myArray[j];
	}
	
	printf("%d", total);
	
	
	
	return 0;
}
