//Input: 123456789; Output: 123,456,789.00
#include <stdio.h>
int main()
{
    int n;
    printf(" Enter a number");
    scanf("%d", &n);
    int m=n,rd=0;
    do
    {
        rd=(rd*1000)+ (m%1000);
        m=m/1000;
    }while(m>0);
    do
    {
        printf("%d",rd%1000);
        rd=rd/1000;
        if(!rd)
        printf(".00");
        else printf(",");
    }while(rd);    
}
