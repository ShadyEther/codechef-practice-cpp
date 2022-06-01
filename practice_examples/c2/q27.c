//simple print of matrix
#include<stdio.h>
int main()
{
    int a[4][5];
    printf("Enter matrix elements: ");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
