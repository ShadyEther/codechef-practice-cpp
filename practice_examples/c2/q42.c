// NO of positive integers in 1D-Array
#include<stdio.h>

int main()
{
    int row, col, i, j, count;
    printf("Enter row and col - ");
    scanf("%d %d", &row, &col);

    int arrOne[row][col], arrTwo[row];
    int (*a)[col], *b;

    printf("Enter the elements of array \n");
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            
            scanf("%d", &arrOne[i][j]);
        }
    }

    a = arrOne;
    b = arrTwo;

    for (i = 0; i < row; i++){
        count = 0;
        for (j = 0; j < col; j++){
            if (a[i][j] > 0)
                count++;
        }
        b[i] = count;
    }

   
    printf("Number of positive integers in 1D-Array: \n");
    for (i = 0; i < row; i++){
        printf("%d \n", b[i]);
    }    
    return 0;
}