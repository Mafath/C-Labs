// 2D array demonstration - creates a 2x3 matrix with values 1-6,
// then displays it in a proper row-column format
#include<stdio.h>
int main() {
	
	int myArr[2][3] = {{1,2,3},{4,5,6}};

	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			printf("%d ", myArr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}