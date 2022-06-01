//scalar multiplication
#include<stdio.h>
int main()
{
    int s;
    printf("enter size of array: ");
    scanf("%d",&s);
    int a[s][s];
    printf("--Enter first matrix elements-- \n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
            {scanf("%d",&a[i][j]);}      
    }
    printf("--Final matrix afer i+j multiplication-- \n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
            printf("%d\t",(i+j)*a[i][j]);
            printf("\n");
    }    
}