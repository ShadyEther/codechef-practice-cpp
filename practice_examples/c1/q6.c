// Enter acceleration and determine the velocity of the vehicle using if else
#include <stdio.h>
int main()
{
int a;
printf("\n Enter the value of a: ");
scanf("%d", &a);
if(a == 0)
printf("The vehicle moves with constant velocity");
else if(a > 0)
printf("The vehicle moves with accelerated velocity ");
else
printf("The vehicle moves with deccelerated velocity");
return( 0);
}