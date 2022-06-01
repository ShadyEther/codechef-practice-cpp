// Simple struc display
#include<stdio.h>
struct Book
{
    char name[20];
    int pages;
    float price;
};
int main()
{
    struct Book b1={"Programming in C",100,999};
    printf("--Book Details--\n");
    printf("Book name: %s\n", b1.name);
    printf("No.of pages: %d\n", b1.pages);
    printf("Price: Rs %.2f", b1.price);
}