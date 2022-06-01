// Lowercase to uppercase convertor
#include<stdio.h>
char conv(int a)
{
    if(a>=65 && a<=90)
    return (a);
    else return (a-32);
}
int main()
{
    char ch;
    printf("enter a char: ");
    scanf("%c",&ch);
    printf("%c",conv(ch));
}