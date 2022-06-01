#include<stdio.h>
int n;
struct Book
{
    char author[25];
    char title[25];
    float price;
    int pages;
};

int main()
{
    printf("Enter number of books: ");
    scanf("%d",&n);
    struct Book *p,store[n];
    p=store;
    for (int i = 0; i < n; i++)
    {
        printf("--Enter details for Book %d--\n", i+1);
        printf("Enter author name: ");
        scanf("%*c%[^\n]s", (p+i)->author);
        printf("Enter book name: ");
        scanf("%*c%[^\n]s", (p+i)->title);
        printf("Enter no.of pages and book price: ");
        scanf("%d %f", &(p+i)->pages, &(p+i)->price);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if ((p+i)->price > 200.0)
        {
            printf("---%s's book '%s' costs above Rs 200. \n\n", (p+i)->author, (p+i)->title);
        }
    }
}