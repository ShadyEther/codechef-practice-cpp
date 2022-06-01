/*
    1 
   A B
  2 3 4
 C D E F
5 6 7 8 9
*/
#include<stdio.h>

int main()
{
    int i, j, count = 1, y = 65;

    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < 5-i; j++)
        {
            printf(" ");
        }
        if (i%2)
        {
            for (j = 0; j < i; j++)
            {
                printf("%d ", count++);
            }
        }
        else
        {
            for (j = 0; j < i; j++)
            {
                printf("%c ", y++);
            }
        }
        printf("\n");
    }
}