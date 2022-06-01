//a ^b using recursion
#include<stdio.h>
int power(int a,int b)
{
    if(b==1) return a;
    else
    return(a*power(a,b-1));

}
int main()
{
    int a,b;
    printf("enter value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("%d",power (a,b));
}