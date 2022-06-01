//q2 1234  1+2+3+4
#include<stdio.h>
int sum(int n)
{
    if(n/10)
    return n%10 + sum(n/10);
    else return n;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d",sum(n));
}