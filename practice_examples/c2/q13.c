//a to the power b using recursion
#include <stdio.h>
int power(int a,int b)
{
    int v = 1;
    for (int i = 0; i < b; i++)
        v *= a;
    return v;
}
int main()
{
    int a, b, res;
    printf("Enter a and b: ");
    scanf("%d %d", &a,&b);
    res = power(a,b);
    printf("%d raised to the power of %d: %d",a,b, res);
}