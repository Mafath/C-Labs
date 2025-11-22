#include <stdio.h>

int main()
{
     int array1[7]={2,4,6,8,10,12,14};
     int array2[7]={0};
     int array3[7]={0};
     int i, max=0, maxIndex=0;
 
     for(i=0;i<7;i++)
     {
         array2[i]=array1[i]*array1[i];             
     }
 
     for(i=0;i<7;i++)
     {
         array3[i]=array1[i]+array2[i];             
     }
 
     for(i=0;i<7;i++)
     {
        if (max<=array3[i])
        {
           max=array3[i];
           maxIndex=i;
         }
     }
     printf("%8s%6s\n", "MaxIndex", "Value");
     printf("%8d%6d\n", maxIndex, max);

     return 0;   
}
