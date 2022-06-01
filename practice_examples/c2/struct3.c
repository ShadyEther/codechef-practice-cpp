// dyanmic interaction with struct 
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
    struct Book store[n];
    for (int i = 0; i < n; i++)
    {
        printf("--Enter details for Book %d--\n", i+1);
        printf("Enter author name: ");
        scanf("%*c%[^\n]s", store[i].author);
        printf("Enter book name: ");
        scanf("%*c%[^\n]s", store[i].title);
        printf("Enter no.of pages and book price: ");
        scanf("%d %f", &store[i].pages, &store[i].price);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (store[i].price > 200.0)
        {
            printf("---%s's book '%s' costs above Rs 200. \n\n", store[i].author, store[i].title);
        }
    }
}