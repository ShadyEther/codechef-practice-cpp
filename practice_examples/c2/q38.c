// simple pointer operation for matrix
#include<stdio.h>
int main(){
    int row, col;
    printf("Enter row and col: ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter data for [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
           printf("Data in [%d][%d] index: %d \n", i, j,*(*(arr+i)+j));
        }
    }
}