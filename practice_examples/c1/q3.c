// Input marks and determine grades or division using if else
#include<stdio.h>
int main()
{
    int p,c,m,e,b,per;
    printf("Enter marks of each subjects\n");
    scanf("%d %d %d %d %d",&p,&c,&m,&e,&b);
    per=(int)(p+c+m+e+b+4.9)/5;
    if(per>=60)
    printf("First Division");
    if(per>=50 && (per <60))
    printf("Second Division");
    if((per>=40)&&(per<50))
    printf("First Division");
    if(per<40)
    printf("Padhai Crow");
    
    
}
