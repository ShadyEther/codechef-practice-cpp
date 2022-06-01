// Simple call by value
#include<stdio.h>
void display(int n)
{
    
    while(n--)
    {
        printf("=");
    }
}
int main()
{
    display(10);
}