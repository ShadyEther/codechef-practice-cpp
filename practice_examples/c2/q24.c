// name_replace string input using for loop
#include<stdio.h>
int main()
{
    int s;
    printf("Enter the size of your name: ");
    scanf("%d",&s);
    char n[s];
    printf("Enter your name: ");    
        for (int i=0;i<s;i++)
         {  
            char ch;
            scanf(" %c",&ch);
            if((int)ch==122) n[i]='a';
            else
            n[i]=(char)(ch+1);            
         }
         for(int i=0;i<s;i++)
         printf("%c",n[i]);        
}
