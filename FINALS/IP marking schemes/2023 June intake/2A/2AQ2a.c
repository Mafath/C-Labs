# include <stdio.h>

int main()
{
    int array1[7]={2,4,6,8,10,12,14};
    int array2[7]={0};
    int array3[7]={0};
    int i, total=0;
 
    for(i=0;i<7;i++)
    {
        array2[i]=array1[i]*array1[i];             
    }
     
    for(i=0;i<7;i++)
    {
         array3[i]=array1[i]+array2[i];             
    }
     
    printf ("%5s%6s\n", "Index", "Value");
    for(i= 0; i < 7; i++)
    {
         total=total+ array3[i];
         printf ("%5d %5d\n",i,array3[i]);
    }
    printf("Total of array3 elements is %d \n", total);
    
    return 0;   
}
