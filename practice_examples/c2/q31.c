//scalar multiplication
#include<stdio.h>
int main()
{
    int s;
    printf("enter size of array: ");
    scanf("%d",&s);
    int a[s][s], k;
    printf("--Enter first matrix elements-- \n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
            {scanf("%d",&a[i][j]);}      
    }
    printf("Enter scalar to be multiply with: ");
    scanf("%d",&k);
    printf("--Final matrix afer Scalar multiplication-- \n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
            printf("%d\t",k*a[i][j]);
            printf("\n");
    }    
}