//frequency
#include<stdio.h>
int main()
{
    char str[10],ch;int c=0;
    printf("Enter string: ");
    gets(str);
    printf("Enter character: ");
    scanf("%c",&ch);
    for(int i=0;c+=(str[i]==ch),str[i];++i);
    printf("\nFrequency of %c: %d",ch,c);
}