//concatenation
#include<stdio.h>
int main()
{
    char str1[10], str2[10], str3[20];
    printf("Enter string1 : ");
    gets(str1);
    printf("Enter string2 : ");
    gets(str2);
    int i=0;
    for(;str3[i]=str1[i];++i);
    for(int j=0;str3[j+i]=str2[j];++j);
    printf("\nFinal string: %s",str3);
}