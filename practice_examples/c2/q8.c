//call by value another example
#include<stdio.h>
void display(int n,char c)
{
    
    while(n--)
    {
        printf("%c",c);
    }
}
int main()
{
    display(10,'o');

}