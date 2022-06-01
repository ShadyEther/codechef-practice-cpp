// Enter basic salary and calculate gross salary using if else
#include<stdio.h>
int main(int argc, char const *argv[])
{
    double hra,bs,da;
    printf("Enter basic Slary");
    scanf("%lf",&bs);
    if(bs<1500)
    {
        hra=bs*(10/100);
        da=bs*(40/100);        
    }
    else
    {
        hra=500;
        da=bs*(50/100);        
    }
    printf("Gross Salary: %lf",bs+hra+da);

    return 0;
}
