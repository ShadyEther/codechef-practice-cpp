//product between int and float respectively using functions
#include<stdio.h>

float prod(int a, float b)
{
    int res;
    res = a*b;
    return res;
}
int main()
{
    int a;float b;

    printf("Enter any two numbers: ");
    scanf("%d %f", &a, &b);
    printf("%d x %.2f = %.2f", a, b, prod(a,b));
}