// #include<stdio.h>
// int main()
// {
//     char a[10];
//     scanf("%s",a);
//     printf("%s",a);
// }
#include<stdio.h>

int main(){
    int size;
    char p[3][10];
    // char a[] = "Bhim", b[] = "Arjun", c[] = "Nakul";

    // p[0] = a;
    // p[1] = b;
    // p[2] = c;

    for (int i = 0; i < 2; i++)
    {
        printf("ENter size: ");
        scanf("%d", &size);
        char a[]={' '};
        scanf("%s", a);
        for(int j=0;j<sizeof(a);j++)
        {
            p[i][j]=a[j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
             
            printf("%s\n", p[i]);
        
    }
}
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char p[]=" ";
//     char a[]=" ";
//     scanf("%s",p);
//     strcpy(a,p);
    
//     printf("\n%s",a);
// }