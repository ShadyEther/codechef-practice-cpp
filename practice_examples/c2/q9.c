// Largest and Leaders
// 12 34 12 35 56 78 23  here 34 78 and 23 are leaders 
// but if we take input from stream like 12 34 12 35 56 78 23 then  12 34 35 56 78 are leaders 
#include <stdio.h>
void max(int n)
{
    int l=0;
    printf("Enter %d numbers: ",n);

    for(int i=1;i<=n;i++)
    {
        int c;
        scanf(" %d",&c);
        if(c>l)
        l=c;
    }
    printf("The largest among these are: %d\n",l);
}
void Leadcount(int n)
{   
    int l=0,d=0;
    printf("Enter %d numbers: ",n);

    for(int i=1;i<=n;i++)
    {
        int c;
        scanf(" %d",&c);
        if(c>l)
        {l=c;d++;}
    }
    printf("The number of Leaders among these are: %d\n",d);

}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    max(n);
    Leadcount(n);
}