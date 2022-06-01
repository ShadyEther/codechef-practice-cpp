// dynamic memory allocation sum of array elements using malloc 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",ptr+1);
        sum+=*(ptr+1);
    }
    printf("Sum = %d",sum);
    free(ptr);
}