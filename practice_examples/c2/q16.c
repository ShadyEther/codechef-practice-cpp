//nth element in fibonacci using recursion
#include<stdio.h>
int fibo(int n)
{
    if((n==1 || n==2)) return 1;
    else
    return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d",fibo(n));
    
}