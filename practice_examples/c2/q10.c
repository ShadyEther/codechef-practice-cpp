//sum and average using functions
#include<stdio.h>
int sum(int n1,int n2,int n3,int n4,int n5)
{
    return (n1+n2+n3+n4+n5);
}
double average(int n1,int n2,int n3,int n4,int n5)
{
    return ((n1+n2+n3+n4+n5)/5.0);
}
int main()
{
    int n1, n2, n3, n4, n5;
    printf("Enter 5 numbers: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    printf("Sum of these numbers is: %d\n",sum(n1,n2,n3,n4,n5));
    printf("Average of these numbers is: %.2lf\n",average(n1,n2,n3,n4,n5));
}