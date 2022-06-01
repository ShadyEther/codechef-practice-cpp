//no of words
#include<stdio.h>
int main()
{
    char str[100];int c=0;
    printf("Enter string1 : ");
    gets(str);
    int i=0;
    for(;c+=(str[i]==' '),str[i];++i);
    printf("\nNumber of words: %d",c+1);
}
