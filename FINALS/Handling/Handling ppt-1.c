#include <stdio.h>
int main(void)
{
    int number = 75;

    FILE *cfPtr;
    cfPtr = fopen("number.txt", "a");

    if ( cfPtr == NULL){
        printf("Cannot create file\n");
    	return -1;
    }
    
    fprintf(cfPtr, "%d\t", number);
	printf("\nFile created successfully\n");
    fclose(cfPtr);  
    return 0;
}
