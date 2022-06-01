#include<stdio.h>
//only funciton is written
int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int c=0,max=c;
    for(int i=0;i<numsSize;i++)
    {
        if(*(nums + i)==1)
            c++;
            
        else           
            c=0;
            
        if(c>max)
       max=c;
    }
    
    return max;
}