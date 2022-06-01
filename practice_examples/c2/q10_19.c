// Leap year check using functions
#include<stdio.h>
int leap(int year)
{
    if (year%400 == 0) 
        return 1;
    else if (year%4 == 0)
    {
        if (year%100 != 0) 
            return 1;
        else 
            return 0;
    }
    else 
        return 0;
}
int main(){
    int a;

    printf("Enter a year: ");
    scanf("%d", &a);

    if (leap(a))
        printf("%d is a leap year", a);
    else
        printf("%d is not a leap year", a);
}