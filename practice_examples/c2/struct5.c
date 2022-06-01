// nested struct 
#include<stdio.h>
struct info
{
    char phone[15];
    char city[20];
    int pin;
};
struct emp
{
    char name[25];
    struct info inf;
};
int main()
{
    struct emp e1={"Santosh Kumar Thatoi","+91 8917304591","Bhubaneswar",751024};
    printf("\nName: %s\nContact: %s\nAddess: %s-%d",e1.name,e1.inf.phone,e1.inf.city,e1.inf.pin);
}