// Input score of all players and calculate average of all scores using goto
#include<stdio.h>
int main()
{
    int s,i=1,sum=0;double avg;
    beg:
    printf("\nEnter Score of Player %d : ",i);
    scanf("%d",&s);
    sum+=s;i++;
    if(i<=11) goto beg;
    avg=sum/11;
    printf("\nAverage of all scores: %lf",avg);   
    
}
