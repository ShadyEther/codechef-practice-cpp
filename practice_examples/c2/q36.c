//sum of all elements of array using pointer variable
#include<stdio.h>
int main()
{
    int s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int arr[s],sum=0;
    
    for(int i=0;i<s;i++)
    {
        scanf("%d",(arr+i));
    }

    for(int i=0;i<s;i++)
    {
        sum+=*(arr+i);
    }
    printf("Sum=%d",sum);
}
// #include<stdio.h>
// int main()
// {
//     int x[]={1,2,3,4,5,6};
//     for(int i=0;i<6;i++)
//     printf("Address at %d: %d\n",i,&x[i]);
//     int *ptr;
//     int y;
//     ptr=6422280;
//     printf("%d\n",ptr);
    
//     y=ptr-;    
//     printf("%d",y);
// }
    // char *p;
    // p=(char*)x;
    // printf("%d",p);
