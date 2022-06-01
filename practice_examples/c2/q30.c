//addition
#include<stdio.h>
int main()
{
    int a[3][4], b[3][4];
    printf("--Enter first matrix elements-- \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            {
                scanf("%d",&a[i][j]);
            }      
    }
    printf("--Enter second matrix elements-- \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            {scanf("%d",&b[i][j]);}    
    }
    printf("--Final matrix afer Addition-- \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            printf("%d\t",a[i][j]+b[i][j]);
            printf("\n");
    }    
}