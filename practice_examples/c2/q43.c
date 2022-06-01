// user friendly row addition
#include<stdio.h>

void addMatRow(int (*a)[4], int *b, int addRow){
    int i;
    b[addRow] = 0;
    for (i = 0; i < 4; i++){
        b[addRow] += a[addRow][i];
    }
    for (i = 0; i < 4; i++){
        if (i == addRow)
            continue;
        else
            b[i] = 0;
    }
}

int main(){
    int arrOne[4][4], arrTwo[4], addRow, i, j;

    printf("--Enter the element of the array-- \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Enter data for [%d][%d]: ", i, j);
            scanf("%d", &arrOne[i][j]);
        }
    }

    printf("Enter which row you want to add the elements of: ");
    scanf("%d", &addRow);

    addMatRow(arrOne, arrTwo, addRow-1);

    printf("2D-Array you have entered: \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d ", arrOne[i][j]);
        }
        printf("\n");
    }

    printf("Addition in 1D-Array: \n");
    for (i = 0; i < 4; i++){
        printf("%d \n", arrTwo[i]);
    }

    return 0;
}