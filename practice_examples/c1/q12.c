// Simple prime Check
#include<stdio.h>
#include<math.h>
int main()
{   int n,f=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)
        {f++; break;}
    if(n<=1 || f==1)
    printf("NON Prime ");
    else printf("prime");
    return 0;
}
