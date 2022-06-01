//transpose
#include<stdio.h>
int main()
{
    int s;
    printf("enter size of matrix: ");
    scanf("%d",&s);
    int a[s][s], b[s][s],t=0;
    printf("--Enter matrix elements-- \n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
            {scanf("%d",&a[i][j]);}      
    }
    for(int i=0;i<s;i++)
    {
        for(int j=i;j<s;j++)
            {
                if(i!=j)
                {                   
                a[i][j]=a[i][j]+a[j][i];
                a[j][i]=a[i][j]-a[j][i];
                a[i][j]=a[i][j]-a[j][i];
                }
            }      
    }
    printf("--Transpose-- \n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
    }    
}
