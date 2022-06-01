// Input score and calculate the total centuries made using goto
#include<stdio.h>
int main()
{
    int s,i=1,c=0;
    st:
    printf("\nEnter Score of Player %d: ",i);
    scanf("%d",&s);
    if(s<0) goto st;
    c+=s>=100;
    i++;
    if(i<=11) goto st;
    printf("Total centuries made: %d",c);

    
}
