//length

#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    int i;
    for(i=0;str[i];++i);
    printf("\nString length: %d",i);
}