// malloc simple example
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    ptr=(int*) malloc (sizeof(int));
    scanf("%d",&ptr);
    printf("%d",ptr);
    free(ptr);
    ptr=(int*) malloc (2*sizeof(int));
    scanf("%d %d",&ptr[0],&ptr[1]);
    printf("%d,%d",ptr[0],ptr[1]);
}