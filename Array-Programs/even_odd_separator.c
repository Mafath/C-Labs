// Even and odd number separator - takes 6 numbers from user,
// separates them into even and odd arrays, then displays all three lists
#include <stdio.h>

int main() {
    int numArr[6];
    int oddNum[6], evenNum[6];
    int oddIndex = 0, evenIndex = 0;
    
    printf("Enter 6 numbers:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &numArr[i]);
    }

    for(int i = 0; i < 6; i++) {
        if(numArr[i] % 2 == 0) {
            evenNum[++evenIndex] = numArr[i];
        } else {
            oddNum[++oddIndex] = numArr[i];
        }
    }

    printf("\nNumber series:");
    for(int i = 0; i < 6; i++) {
        printf(" %d", numArr[i]);
        if(i!=5){
        	printf(",");
		}
    }
    
    printf("\nOdd Numbers:");
    for(int i = 0; i < oddIndex; i++) {
        printf(" %d", oddNum[i]);
        if(i!= (oddIndex-1)){
        	printf(",");
		}
    }

    printf("\nEven Numbers:");
    for(int i = 0; i < evenIndex; i++) {
        printf(" %d", evenNum[i]);
        if(i!= (evenIndex-1)){
        	printf(",");
		}
    }
    
    return 0;
}