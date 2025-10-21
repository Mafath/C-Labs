// Simple array display program - takes a pre-filled array and shows each element
// with its corresponding index position
#include<stdio.h>
int main() {
	
	int n[5]= {11,12,13,14,15};
	int i;
	
	for(i=0; i<5; i++){
		printf("%d is: %d\n",i,n[i]);
	}
	
	return 0;
}