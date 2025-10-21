// Basic array initialization demo - shows how to set all array elements to zero
// and display them in a nice tabular format
#include <stdio.h>
int  main(void){
		
	int n[5];
	int i;

	for(i=0;i<5;++i)
		n[i] = 0;

	printf("%s%13s\n",  "Element",  " Value");

	for(i=0;i<5;++i)
		printf("%4d %14d\n",i,n[i]);
     		
    return 0;
}