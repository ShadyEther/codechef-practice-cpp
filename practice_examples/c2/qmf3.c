// reading a file 
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("hehe.c", "r");
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);
    return 0;
}