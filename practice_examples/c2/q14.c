//factorial using recursion
#include<stdio.h>
int fact(int n)
{
    if(n)
    return (n*fact(n-1));
    else return 1;

}
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    printf("%d",fact(n));
}