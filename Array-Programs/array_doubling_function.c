// Array doubling function demo - takes user input, stores in array,
// then passes it to a function that doubles each element and shows the result
#include<stdio.h>
#define SIZE 5

void newArray(int para1[], int para2);

int main() {

	int arr[SIZE];
	int i;

	for(i=0;i<SIZE;i++) {
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("Original array:- ");
	for(i=0;i<SIZE;i++) {
		printf("%d\t", arr[i]);
	}

	printf("\n");
	newArray(arr,SIZE);
	
	return 0;
}



void newArray(int para1[], int para2) {
	int nw[para2];
	int i;
	
	printf("Modified array:- ");

	for(i=0;i<para2;i++) {
		nw[i]=para1[i]*2;
		printf("%d\t", nw[i]);
	}

}