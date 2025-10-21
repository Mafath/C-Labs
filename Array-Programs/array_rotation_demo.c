// Array rotation program - takes 5 numbers, rotates them left by one position
// (first element moves to end, others shift left) and displays the result
#include<stdio.h>
int main() {
	
	int motion[5]={0};
	int new[5]={0};
	
	for(int i=0;i<5;i++) {
		printf("Enter number %d:", i+1);
		scanf("%d",&motion[i]);
	}
	
	printf("Initial values: ");
	for(int j=0;j<5;j++) {
		printf("%d\t", motion[j]);
	}
	
	for(int k=0;k<4;k++) {
		new[k]=motion[k+1];
	}
	new[4] = motion[0];
	
	printf("\nAfter rotating: ");
	for(int m=0;m<5;m++) {
	new[5]= motion[1];
		printf("%d\t", new[m]);
	}
	
	return 0;
}