// Input postion of object and determine nature of image uisng if else

#include <stdio.h>
int main(){
    int ch;
    printf("Enter1 if POSITION OF OBJECT -> At infinity \n");
    printf("Enter2 if POSITION OF OBJECT -> Beyond the center of curvature C \n");
    printf("Enter3 if POSITION OF OBJECT -> At the center of curvature \n");
    printf("Enter4 if POSITION OF OBJECT -> Between C and F \n");
    printf("Enter5 if POSITION OF OBJECT -> At focus F \n");
    scanf("%d: \n",&ch);
    if (ch==1)
    {
        printf("POSITION OF IMAGE-> At the focus F \n");
        printf("SIZE OF IMAGE-> Highly diminshed \n");
        printf("NATURE OF IMAGE-> Real & Inverted \n");
    }
    else if (ch==2)
    {
        printf("POSITION OF IMAGE-> Between F & C \n");
        printf("SIZE OF IMAGE-> Diminshed \n");
        printf("NATURE OF IMAGE-> Real & Inverted \n");
    }
    else if (ch==3)
    {
        printf("POSITION OF IMAGE-> At C \n");
        printf("SIZE OF IMAGE-> Same size \n");
        printf("NATURE OF IMAGE-> Real & Inverted \n");
    }
    else if (ch==4)
    {
        printf("POSITION OF IMAGE-> Beyond C \n");
        printf("SIZE OF IMAGE-> Enlarged\n");
        printf("NATURE OF IMAGE-> Real and Inverted \n");
    }
    else{
        printf("POSITION OF IMAGE-> At infinity \n");
        printf("SIZE OF IMAGE-> Highly enlarged \n");
        printf("NATURE OF IMAGE-> Real & Inverted \n");
    }
    return 0;
}