//Leap check optimised
#include<stdio.h>
int Leap(int y)
{
    
    return ((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0);
}
int main(){
    int a;

    printf("Enter a year: ");
    scanf("%d", &a);
    printf("%d",Leap(a));
}