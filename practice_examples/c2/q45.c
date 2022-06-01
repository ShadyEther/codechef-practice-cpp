// No of chars in a string 
#include<stdio.h>
int main()
{
    char a[100];int count=0;
    printf("Enter a stroing: ");
    scanf("%[^\n]s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("Number of characters: %d",count);
}
// #include<stdio.h>
// int prime(int n)
// {
// int i;
// for(i=2;i<=n/2;i++)
// {
// if(n%i!=0)
// {
// continue;
// }
// else
// {
// break;
// }
// }
// if(i==n/2+1)
// {
// return 1;
// }
// else return 0;

// }
// int main()
// {
//     int i,count=0;
//     for(i=2;i>0;i++)
//     {
//     if(prime(i))
//     {
//     count++;
//     }
//     if(count==1001)
//     {
//     printf("The 1001st prime number is %d.",i);
//     break;
//     }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a=5;int* b;int **c;
//     b=&a;
//     c=&b;
//     printf("%d",(**c));
// }