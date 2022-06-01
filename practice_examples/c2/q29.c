//symmetric
#include<stdio.h>
int main()
{
    int s;
    printf("Enter size of matrix: ");
    scanf("%d",&s);
    int a[s][s], f=1;
    printf("--Enter matrix elements-- \n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
            {scanf("%d",&a[i][j]);}      
    }
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(a[i][j]!=a[j][i])
                {
                    f=0;
                    break;
                }
        }            
    }    
    if(f) printf("Symmetric");
    else printf("Non Symmetric");

}