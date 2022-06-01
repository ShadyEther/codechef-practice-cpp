// Simple use of function
#include<stdio.h>
void display(int n,char ch)
{
    while(n)
    {
    printf("%c",ch);n--;
    }

}
int main()
{
    int n;char c;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    printf("Enter the char to print: ");
    scanf(" %c",&c);
    display(n,c);
}