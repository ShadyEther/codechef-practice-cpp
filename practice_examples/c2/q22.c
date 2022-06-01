//searching linear
#include <stdio.h>
int main()
{
    int f, s, c = -1;
    printf("Enter how many items you want to store: ");
    scanf("%d", &s);

    int a[s];

    printf("Enter %d items : ",s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter item to search: ");
    scanf("%d", &f);

    for (int i = 0; i < s; i++)
    {
        if (f == a[i])
        {
            c = i;
            break;
        }
    }
    if (c == -1)
        printf("item not found");
    else
        printf("item found in position: %d", c+1);

}