// Searching in a file 
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int c = 0;
    fp = fopen("hehe.c", "r");
    while ((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
        if (ch == 's')
            c++;
    }
    fclose(fp);
    printf("\nNo of 's' present in program: %d", c);
    return 0;
}