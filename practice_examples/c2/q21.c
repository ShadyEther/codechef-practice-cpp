// avg marks and grade calculator 
#include<stdio.h>
int main()
{
    int s,sum=0,c=0;
    printf("enter no of students: ");
    scanf("%d",&s);
    int a[s];
    printf("Enter marks of each students: ");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        if(a[i]>89)
        c++;
    }
    printf("The average marks of %d students are: %d\n",s,(sum/s));
    printf("The number of students who secured O grade: %d",c);

}