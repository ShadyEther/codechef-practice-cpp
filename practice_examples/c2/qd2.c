// index at odd positions using calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a=(int*) calloc (20,sizeof(int));
    for(int i=1;i<20;i+=2)
    {
        a[i]=i;
    }
    for(int i=0;i<20;i++)
    {
        printf("%d\n",a[i]);
    }
}