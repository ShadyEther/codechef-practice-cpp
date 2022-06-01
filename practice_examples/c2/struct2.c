// simple struct assignment
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[25];
    int age;
    float salary;
};
int main()
{
    struct employee e1 ={"Santosh Kumar Thatoi",40,300000};
    struct employee e2;
    e2.age=e1.age;
    e2.salary=e1.salary;
    strcpy(e2.name,e1.name);
    printf("Name: %s\nAge: %d\nSalary:Rs %.2f",e2.name,e2.age,e2.salary);
}