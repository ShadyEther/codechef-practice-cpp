// zig zag matrix
#include<stdio.h>
int main()
{
    int a[10][10];
    int c=10;
    for(int i=0;i<4;i+=2)
    {
        for(int j=0;j<4;j++)
        {
            a[i][j]=c;c++;
        }
        for(int j=3;j>=0;j--)
        {
            a[i+1][j]=c;c++;
        }
    }
    for(int i=0;i<4;i++)
    {
        
        for(int j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}