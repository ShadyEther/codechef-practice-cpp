//q60_noofdigits
#include<stdio.h>
int nodigit(int n)
{
    if((n/10) !=0)
    return(1+nodigit(n/10));
    else return(1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",nodigit(n));
}
