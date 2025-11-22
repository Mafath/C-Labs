#include <stdio.h>
int main( void)
{
     int number ;

     FILE *cfPtr;
     cfPtr = fopen("number.txt", "r");

     if ( cfPtr == NULL)
     {
           printf("File could not be pened\n");
           return -1;
    }
    fscanf(cfPtr, "%d", &number);
    printf("Number is : %d \n", number );
    fclose(cfPtr);  
     return 0;
}
