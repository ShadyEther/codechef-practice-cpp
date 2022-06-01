// Matrix addition and subtraction
#include<stdio.h>

int main(){
    int i, j, row, col;
    printf("Enter row and column: ");
    scanf("%d %d", &row, &col);
    int m1[row][col], m2[row][col], mAdd[row][col], mSub[row][col];

    printf("--Enter elements for first matrix-- \n");
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            
            scanf("%d", &m1[i][j]);
        }
    }

    printf("--Enter elements for second matrix-- \n");
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            
            scanf("%d", &m2[i][j]);
        }
    }

    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            mAdd[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            mSub[i][j] = m1[i][j] - m2[i][j];
        }
    }

    printf("A+B Matrix \n");
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            printf("%d ", mAdd[i][j]);
        }
        printf("\n");
    }

    printf("A-B Matrix \n");
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            printf("%d ", mSub[i][j]);
        }
        printf("\n");
    }
}