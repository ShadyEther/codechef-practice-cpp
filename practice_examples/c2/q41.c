// addition of rows 
#include<stdio.h>

void addMatRow(int (*a)[4], int *b){
    int i, j;
    for (i = 0; i < 4; i++){
        b[i] = 0;
        for (j = 0; j < 4; j++){
            b[i] += a[i][j];
        }
    }
}

int main(){
    int arrOne[4][4], arrTwo[4], i, j;

    printf("--Enter the element of the array-- \n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            
            scanf("%d", &arrOne[i][j]);
        }
    }

    addMatRow(arrOne, arrTwo);

    

    printf("Addition in 1D-Array: \n");
    for (i = 0; i < 4; i++){
        printf("%d \n", arrTwo[i]);
    }

    return 0;
}