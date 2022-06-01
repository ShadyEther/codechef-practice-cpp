//copy
#include<stdio.h>
int length(char *s)
{
    int i;
    for(i=0;*(s+i);++i);
    return i;
}

int main()
{
    char src[100], fw[100], lw[100];
    printf("Enter string : ");
    scanf("%[^\n]",src);
    int fp=0,ep=0,l=length(src);
    for(int i=0;i<l;++i)//first word extraction
    {
        if(src[i]==' ') {fp=i;break;}
        fw[i]=src[i];
    }
    
    for(int i=(l-1);i>fp;i--)//last word extraction
    {
        if(src[i]==' ') {ep=i;break;}
        lw[(l-1)-i]=src[i];
    }
    printf("Last word: %s\n",lw);
    printf("first word: %s\n",fw);
     for(int i=length(lw)-1;i>=0;i--)
    {
        printf("%c",lw[i]);
    }
    printf("\n");
    int lastlength=length(lw),firstlength=length(fw);
    if(length(lw)>length(fw))//right shift
    {   
        for(int i=ep+1;i>fp;i--) src[i]=src[i-1];
    }
    else if(length(lw)<length(fw))//left shift
    {
        for(int i=fp-1;i<ep;i++) src[i]=src[i+1];//shifting
        
    }
    for(int i=lastlength-1;i>=0;i--)//last word insertion
            src[i]=lw[lastlength-1-i];

            for(int i=0;i<firstlength;++i)
            
            src[l-firstlength+ i]=fw[i];

    printf("String after reverse: ");
    printf("%s",src);
}