//q4_gcd
#include<stdio.h>
int gcd(int n1,int n2)
{
    
    if(!(n1%n2)) return n2;
    else return (gcd(n2, n1%n2));
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("%d",gcd (64,94));
}