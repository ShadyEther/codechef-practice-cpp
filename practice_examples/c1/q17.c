// Find the middle digit of a number
#include<stdio.h>
#include<math.h>
int main()
{   int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int c=0,m=n;
    do
    {
        m=m/10;
        c++;
    } while (m);
    if(c%2)
    {
        int mid=(c+1)/2;
        int midpos=pow(10,mid);
        int midigit=(n%midpos)/(midpos/10);
        printf(" Middle digit is %d.", midigit);
    }
    else 
    {
        int mid1=c/2,mid2=(c/2)+1;
        int mid1pos=(pow(10.0,mid1))+1,mid2pos=pow(10,mid2);
        int midigit1=(n%mid1pos)/(mid1pos/10),midigit2=(n%mid2pos)/(mid2pos/10);
        printf(" Middle digits are %d and %d.", midigit2,midigit1);

    }   
    return 0;
}
