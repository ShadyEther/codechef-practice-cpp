/*
AAAAAAAAAAAAAAAAAAAAA
AAAAAA AAAAAA AAAAAA
AAAAA  AAAAA  AAAAA
AAAA   AAAA   AAAA
AAA    AAA    AAA
AA     AA     AA
A      A      A
        A   space   A   space   A
i=0     7   0       7   0       7   
i=1     6   1       6   1       6       
i=2     5   2       5   2       5   
i=3     4   3       4   3       4
i=4     3   4       3   4       3
i=5     2   5       2   5       2
i=6     1   6       1   6       1
*/
#include <stdio.h>
int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        printf("A");
        for(int j=0;j<i;j++)
        printf(" ");
        for(int j=0;j<n-i;j++)
        printf("A");
        for(int j=0;j<i;j++)
        printf(" ");
        for(int j=0;j<n-i;j++)
        printf("A");
        printf("\n");
    }    
}
