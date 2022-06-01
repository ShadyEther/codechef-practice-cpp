//Enter ten numbers and calculate sum of odd numbers
#include <stdio.h>
int main()
{
    int s=0;
    printf(" Enter ten numbers\n");
    for(int i=0;i<10;i++)
    {
        int n;
        scanf("%d",&n);
        if(n%2)
        s+=n;
    }
    printf("Sum of the odd numbers: %d", s);    
}
 