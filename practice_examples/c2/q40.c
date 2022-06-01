// Addition of each rows
#include<stdio.h>

int main(){
    int r, c, i, j;
    printf("Enter r and c- ");
    scanf("%d %d", &r, &c);

    int arrOne[r][c], arrTwo[r];
    int (*a)[c], *b;

    printf("enter array elements\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
        {
            
            scanf("%d", &arrOne[i][j]);
        }
    }

    a = arrOne;
    b = arrTwo;

    for (i = 0; i < r; i++){
        b[i] = 0;
        for (j = 0; j < c; j++){
            b[i] += a[i][j];
        }
    }

    

    printf("Addition in 1D-Array- \n");
    for (i = 0; i < r; i++){
        printf("%d \n", b[i]);
    }

    return 0;
}